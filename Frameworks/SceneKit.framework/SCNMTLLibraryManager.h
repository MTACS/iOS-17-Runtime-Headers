
@interface SCNMTLLibraryManager : NSObject {
    struct __C3DEngineStats { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; double x25; double x26; double x27; double x28; double x29; double x30; double x31; double x32; double x33; double x34; double x35; double x36; double x37; double x38; double x39; unsigned int x40; unsigned int x41; unsigned int x42; unsigned int x43; unsigned int x44; unsigned int x45; unsigned int x46; unsigned int x47; unsigned int x48; unsigned int x49; unsigned int x50; unsigned int x51; unsigned int x52; unsigned int x53; unsigned int x54; unsigned int x55; unsigned int x56; double x57; unsigned int x58; double x59; unsigned int x60; double x61; double x62; double x63; double x64; double x65[60]; } * __engineStats;
    struct __CFDictionary { } * _availableCompiledLibraries;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _availableCompiledLibrariesLock;
    NSMapTable * _availableLibraries;
    <MTLLibrary> * _commonProfileCacheLibrary;
    NSDictionary * _commonProfilePrecompiledFunctions;
    SCNMTLLibrary * _defaultLibrary;
    <MTLDevice> * _device;
    NSObject<OS_dispatch_queue> * _deviceQueue;
    SCNMTLLibrary * _frameworkLibrary;
    NSObject<OS_dispatch_group> * _shaderCompilationGroup;
}

+ (id)hashCodeForSource:(id)arg1 macros:(id)arg2;

- (void)_setEngineStats:(struct __C3DEngineStats { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; double x25; double x26; double x27; double x28; double x29; double x30; double x31; double x32; double x33; double x34; double x35; double x36; double x37; double x38; double x39; unsigned int x40; unsigned int x41; unsigned int x42; unsigned int x43; unsigned int x44; unsigned int x45; unsigned int x46; unsigned int x47; unsigned int x48; unsigned int x49; unsigned int x50; unsigned int x51; unsigned int x52; unsigned int x53; unsigned int x54; unsigned int x55; unsigned int x56; double x57; unsigned int x58; double x59; unsigned int x60; double x61; double x62; double x63; double x64; double x65[60]; }*)arg1;
- (void)clearCompiledLibraries;
- (id)commonProfileCacheLibrary;
- (void)dealloc;
- (id)defaultLibrary;
- (id)device;
- (id)deviceQueue;
- (id)frameworkLibrary;
- (id)initWithDevice:(id)arg1;
- (id)libraryForFile:(id)arg1;
- (void)libraryForProgramDesc:(struct { struct __C3DFXMetalProgram {} *x1; struct __C3DMaterial {} *x2; struct __C3DGeometry {} *x3; struct __C3DFXPass {} *x4; struct __C3DFXPass {} *x5; id x6; struct __C3DBlendStates {} *x7; struct __C3DNode {} *x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; id x15; struct { unsigned char x_16_1_1; id /* block */ x_16_1_2; } x16; unsigned long long x17; })arg1 completionHandler:(id /* block */)arg2;
- (id)libraryForSourceCode:(id)arg1 options:(id)arg2;
- (id)shaderCompilationGroup;
- (void)waitForShadersCompilation;

@end
