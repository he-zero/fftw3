# fftw3
1. install and configure environment to fftw3
2. test environment and use fftw3 to fft & ifft
*******************************************************
1. 开发环境说明如下：
  系统：Windows10 专业版 64位
  VS版本：Ultimate 2013
2. FFTW3的下载和安装
  2.1 下载地址：http://www.fftw.org/install/windows.html
  建议下载32位的FFTW3库,编译为32位的lib文件。因为之前下载64位FFTW3库，但是后续在VS中编译32位的程序时发生错误，无法正常使用。为避免后续出现问题，下载安装了32位的FFTW3库，之后运行正常。
  2.2 将下载后的文件解压到某一文件夹。例如D:\fftw3
  2.3 生成FFTW3的lib文件
  1)打开VS命令提示。（开始->Visual Studio 2013->Visual Studio Tools-> VS2013 开发人员命令提示）
  2)切换到目录D:\fftw3。(cd d:/fftw3)
  3)输入以下三条命令，生成对应的lib文件：
  lib /machine:x86 /def:libfftw3-3.def	(生成libfftw3-3.lib)
  lib /machine:x86 /def:libfftw3l-3.def	(生成libfftw3l-3.lib)
  lib /machine:x86 /def:libfftw3f-3.def	(生成libfftw3f-3.lib)
至此，FFTW3库安装完毕。
3. 开发环境配置
  3.1 在VS2013中新建项目后，在项目属性中做修改如下：
  项目->属性->C/C++->附加包含目录，加上D:\fftw3
  项目->属性->链接器->常规->附加库目录，加上D:\fftw3
  项目->属性->链接器->输入->附加依赖项，加上libfftw3-3.lib、libfftw3l-3.lib、libfftw3f-3.lib
  3.2 把D:\fftw3中的libfftw3-3.dll、libfftw3f-3.dll、libfftw3l-3.dll三个dll文件复制到项目文件夹里（有.vcxproj文件的文件夹）。
至此，开发环境配置完毕。
4. 运行测试
	配置好开发环境后，对开发环境进行测试。测试程序下载地址：https://github.com/he-zero/fftw3。 如果测试程序能正确运行，说明环境配置正确，否则要重新修改配置环境。
