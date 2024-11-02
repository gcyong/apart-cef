# apart-cef

CEF를 WebView2 처럼 사용하기 위한 프로젝트

## 서드파티
프로젝트에 필요하나 여러 사정으로 깃헙에 올리지 못한(않은) 파일들이 있음

### CEF
[CEF Automated Builds](https://cef-builds.spotifycdn.com/index.html) 에서 Current Stable Build 내 Standard Distribution을 다운로드 받아 압축 풀고 아래 디렉터리 구성대로 복사

```
apart-cef\thirdparty\cef\
    ├ amd64_lib_debug\
    │    ├ cef_sandbox.lib             (Standard Distribution)\Debug\cef_sandbox.lib
    │    ├ libcef_dll_wrapper.lib      libcef_dll_wrapper 프로젝트 빌드 산출물 (x64 Debug)
    │    └ libcef.lib                  (Standard Distribution)\Debug\libcef.lib
    ├ amd64_lib_release\
    │    ├ cef_sandbox.lib             (Standard Distribution)\Release\cef_sandbox.lib
    │    ├ libcef_dll_wrapper.lib      libcef_dll_wrapper 프로젝트 빌드 산출물 (x64 Debug)
    │    └ libcef.lib                  (Standard Distribution)\Release\libcef.lib
    ├ amd64_res_common\...             (Standard Distribution)\Resources 내용과 동일
    ├ amd64_res_debug\                 (Standard Distribution)\Debug 내용 중 cef_sandbox.lib, libcef.lib 파일을 제외한 나머지
    │    ├ chrome_elf.dll
    │    ├ d3dcompiler_47.dll
    │    ├ dxcompiler.dll
    │    ├ dxil.dll
    │    ├ libcef.dll
    │    ├ libEGL.dll
    │    ├ libGLESv2.dll
    │    ├ snapshot_blob.bin
    │    ├ v8_context_snapshot.bin
    │    ├ vk_swiftshader_icd.json
    │    ├ vk_swiftshader.dll
    │    └ vulkan-1.dl
    ├ amd64_res_release\               (Standard Distribution)\Release 내용 중 cef_sandbox.lib, libcef.lib 파일을 제외한 나머지
    │    ├ chrome_elf.dll
    │    ├ d3dcompiler_47.dll
    │    ├ dxcompiler.dll
    │    ├ dxil.dll
    │    ├ libcef.dll
    │    ├ libEGL.dll
    │    ├ libGLESv2.dll
    │    ├ snapshot_blob.bin
    │    ├ v8_context_snapshot.bin
    │    ├ vk_swiftshader_icd.json
    │    ├ vk_swiftshader.dll
    │    └ vulkan-1.dl
    ├ include\...                      (Standard Distribution)\include 내용과 동일
    └ version.txt                      CEF 버전을 빌드 출력에 표시하기 위함. 파일만 있으면 내용은 상관 없음
```
