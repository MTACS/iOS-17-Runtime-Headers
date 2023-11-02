
@interface _ANEVirtualPlatformClient : NSObject {
    _ANEClient * _aneClient;
    NSMutableDictionary * _aneModelDict;
    NSString * _anebaseDirectory;
    NSString * _guestBuildVersion;
    unsigned long long  _guestCapabilityMask;
    unsigned int  _guestDataInterfaceVersion;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) _ANEClient *aneClient;
@property (nonatomic, readonly) NSMutableDictionary *aneModelDict;
@property (nonatomic, readonly) NSString *anebaseDirectory;
@property (nonatomic, retain) NSString *guestBuildVersion;
@property (nonatomic) unsigned long long guestCapabilityMask;
@property (nonatomic) unsigned int guestDataInterfaceVersion;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

+ (unsigned long long)getCommandInputSize:(unsigned long long)arg1;
+ (unsigned long long)getCommandOutputSize:(unsigned long long)arg1;
+ (void)initialize;
+ (bool)isValidBufferSize:(unsigned long long)arg1;
+ (id)new;
+ (void)printStruct:(struct VirtANEModel { unsigned int x1; long long x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned int x11[32]; unsigned long long x12[32]; unsigned int x13[32]; unsigned long long x14[32]; unsigned long long x15; unsigned long long x16; unsigned long long x17; BOOL x18; unsigned char x19; unsigned int x20; unsigned long long x21; unsigned int x22; unsigned int x23; unsigned int x24; unsigned long long x25; unsigned int x26; unsigned int x27; unsigned long long x28; unsigned int x29; unsigned long long x30; unsigned int x31[64]; unsigned int x32[64]; unsigned int x33[64]; unsigned int x34[64]; unsigned int x35; unsigned long long x36; unsigned long long x37; unsigned int x38[64]; unsigned int x39[64]; unsigned int x40; unsigned int x41; unsigned int x42; unsigned int x43; unsigned int x44; unsigned int x45; unsigned long long x46; long long x47; unsigned int x48; unsigned int x49; unsigned long long x50; unsigned int x51; }*)arg1;
+ (id)sharedConnection;
+ (id)sharedConnection:(id)arg1;

- (void).cxx_destruct;
- (id)aneClient;
- (id)aneModelDict;
- (id)anebaseDirectory;
- (void)beginRealTimeTask:(struct VirtANEModel { unsigned int x1; long long x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned int x11[32]; unsigned long long x12[32]; unsigned int x13[32]; unsigned long long x14[32]; unsigned long long x15; unsigned long long x16; unsigned long long x17; BOOL x18; unsigned char x19; unsigned int x20; unsigned long long x21; unsigned int x22; unsigned int x23; unsigned int x24; unsigned long long x25; unsigned int x26; unsigned int x27; unsigned long long x28; unsigned int x29; unsigned long long x30; unsigned int x31[64]; unsigned int x32[64]; unsigned int x33[64]; unsigned int x34[64]; unsigned int x35; unsigned long long x36; unsigned long long x37; unsigned int x38[64]; unsigned int x39[64]; unsigned int x40; unsigned int x41; unsigned int x42; unsigned int x43; unsigned int x44; unsigned int x45; unsigned long long x46; long long x47; unsigned int x48; unsigned int x49; unsigned long long x50; unsigned int x51; }*)arg1;
- (void)callDictionaryMethod:(struct AppleVirtIONeuralEngineData { unsigned int x1; int x2; unsigned int x3; unsigned long long x4; unsigned int x5; unsigned long long x6; unsigned int x7; unsigned long long x8; }*)arg1;
- (void)compileModel:(struct VirtANEModel { unsigned int x1; long long x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned int x11[32]; unsigned long long x12[32]; unsigned int x13[32]; unsigned long long x14[32]; unsigned long long x15; unsigned long long x16; unsigned long long x17; BOOL x18; unsigned char x19; unsigned int x20; unsigned long long x21; unsigned int x22; unsigned int x23; unsigned int x24; unsigned long long x25; unsigned int x26; unsigned int x27; unsigned long long x28; unsigned int x29; unsigned long long x30; unsigned int x31[64]; unsigned int x32[64]; unsigned int x33[64]; unsigned int x34[64]; unsigned int x35; unsigned long long x36; unsigned long long x37; unsigned int x38[64]; unsigned int x39[64]; unsigned int x40; unsigned int x41; unsigned int x42; unsigned int x43; unsigned int x44; unsigned int x45; unsigned long long x46; long long x47; unsigned int x48; unsigned int x49; unsigned long long x50; unsigned int x51; }*)arg1;
- (void)compileModelDictionary:(id)arg1 ioSIDs:(unsigned int*)arg2 ioSIDsSize:(unsigned long long)arg3;
- (void)compiledModelExistsFor:(struct VirtANEModel { unsigned int x1; long long x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned int x11[32]; unsigned long long x12[32]; unsigned int x13[32]; unsigned long long x14[32]; unsigned long long x15; unsigned long long x16; unsigned long long x17; BOOL x18; unsigned char x19; unsigned int x20; unsigned long long x21; unsigned int x22; unsigned int x23; unsigned int x24; unsigned long long x25; unsigned int x26; unsigned int x27; unsigned long long x28; unsigned int x29; unsigned long long x30; unsigned int x31[64]; unsigned int x32[64]; unsigned int x33[64]; unsigned int x34[64]; unsigned int x35; unsigned long long x36; unsigned long long x37; unsigned int x38[64]; unsigned int x39[64]; unsigned int x40; unsigned int x41; unsigned int x42; unsigned int x43; unsigned int x44; unsigned int x45; unsigned long long x46; long long x47; unsigned int x48; unsigned int x49; unsigned long long x50; unsigned int x51; }*)arg1;
- (void)compiledModelExistsForDictionary:(id)arg1 ioSIDs:(unsigned int*)arg2 ioSIDsSize:(unsigned long long)arg3;
- (void)compiledModelExistsMatchingHash:(struct VirtANEModel { unsigned int x1; long long x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned int x11[32]; unsigned long long x12[32]; unsigned int x13[32]; unsigned long long x14[32]; unsigned long long x15; unsigned long long x16; unsigned long long x17; BOOL x18; unsigned char x19; unsigned int x20; unsigned long long x21; unsigned int x22; unsigned int x23; unsigned int x24; unsigned long long x25; unsigned int x26; unsigned int x27; unsigned long long x28; unsigned int x29; unsigned long long x30; unsigned int x31[64]; unsigned int x32[64]; unsigned int x33[64]; unsigned int x34[64]; unsigned int x35; unsigned long long x36; unsigned long long x37; unsigned int x38[64]; unsigned int x39[64]; unsigned int x40; unsigned int x41; unsigned int x42; unsigned int x43; unsigned int x44; unsigned int x45; unsigned long long x46; long long x47; unsigned int x48; unsigned int x49; unsigned long long x50; unsigned int x51; }*)arg1;
- (void)compiledModelExistsMatchingHashDictionary:(id)arg1 ioSIDs:(unsigned int*)arg2 ioSIDsSize:(unsigned long long)arg3;
- (void)copyToIOSurface:(id)arg1 ioSID:(unsigned int)arg2;
- (bool)createModelFile:(id)arg1 path:(id)arg2 ioSID:(unsigned int)arg3 length:(unsigned long long)arg4;
- (void)createOptionFilesForCompilation:(struct VirtANEModel { unsigned int x1; long long x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned int x11[32]; unsigned long long x12[32]; unsigned int x13[32]; unsigned long long x14[32]; unsigned long long x15; unsigned long long x16; unsigned long long x17; BOOL x18; unsigned char x19; unsigned int x20; unsigned long long x21; unsigned int x22; unsigned int x23; unsigned int x24; unsigned long long x25; unsigned int x26; unsigned int x27; unsigned long long x28; unsigned int x29; unsigned long long x30; unsigned int x31[64]; unsigned int x32[64]; unsigned int x33[64]; unsigned int x34[64]; unsigned int x35; unsigned long long x36; unsigned long long x37; unsigned int x38[64]; unsigned int x39[64]; unsigned int x40; unsigned int x41; unsigned int x42; unsigned int x43; unsigned int x44; unsigned int x45; unsigned long long x46; long long x47; unsigned int x48; unsigned int x49; unsigned long long x50; unsigned int x51; }*)arg1 aneModelKey:(id)arg2 options:(id)arg3;
- (void)createOptionFilesForCompilationDictionary:(id)arg1 ioSIDs:(unsigned int*)arg2 ioSIDsSize:(unsigned long long)arg3 aneModelKey:(id)arg4 options:(id)arg5;
- (void)dealloc;
- (id)doCreateModelFile:(struct VirtANEModel { unsigned int x1; long long x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned int x11[32]; unsigned long long x12[32]; unsigned int x13[32]; unsigned long long x14[32]; unsigned long long x15; unsigned long long x16; unsigned long long x17; BOOL x18; unsigned char x19; unsigned int x20; unsigned long long x21; unsigned int x22; unsigned int x23; unsigned int x24; unsigned long long x25; unsigned int x26; unsigned int x27; unsigned long long x28; unsigned int x29; unsigned long long x30; unsigned int x31[64]; unsigned int x32[64]; unsigned int x33[64]; unsigned int x34[64]; unsigned int x35; unsigned long long x36; unsigned long long x37; unsigned int x38[64]; unsigned int x39[64]; unsigned int x40; unsigned int x41; unsigned int x42; unsigned int x43; unsigned int x44; unsigned int x45; unsigned long long x46; long long x47; unsigned int x48; unsigned int x49; unsigned long long x50; unsigned int x51; }*)arg1 aneModelKey:(id)arg2;
- (id)doCreateModelFileDictionary:(id)arg1 ioSIDs:(unsigned int*)arg2 ioSIDsSize:(unsigned long long)arg3 aneModelKey:(id)arg4;
- (void)doModelAttributeUpdate:(id)arg1 virtualANEModel:(struct VirtANEModel { unsigned int x1; long long x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned int x11[32]; unsigned long long x12[32]; unsigned int x13[32]; unsigned long long x14[32]; unsigned long long x15; unsigned long long x16; unsigned long long x17; BOOL x18; unsigned char x19; unsigned int x20; unsigned long long x21; unsigned int x22; unsigned int x23; unsigned int x24; unsigned long long x25; unsigned int x26; unsigned int x27; unsigned long long x28; unsigned int x29; unsigned long long x30; unsigned int x31[64]; unsigned int x32[64]; unsigned int x33[64]; unsigned int x34[64]; unsigned int x35; unsigned long long x36; unsigned long long x37; unsigned int x38[64]; unsigned int x39[64]; unsigned int x40; unsigned int x41; unsigned int x42; unsigned int x43; unsigned int x44; unsigned int x45; unsigned long long x46; long long x47; unsigned int x48; unsigned int x49; unsigned long long x50; unsigned int x51; }*)arg2;
- (void)doModelAttributeUpdateDictionary:(id)arg1 dictionary:(id)arg2 ioSIDs:(unsigned int*)arg3;
- (void)doRemoveModelFile:(struct VirtANEModel { unsigned int x1; long long x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned int x11[32]; unsigned long long x12[32]; unsigned int x13[32]; unsigned long long x14[32]; unsigned long long x15; unsigned long long x16; unsigned long long x17; BOOL x18; unsigned char x19; unsigned int x20; unsigned long long x21; unsigned int x22; unsigned int x23; unsigned int x24; unsigned long long x25; unsigned int x26; unsigned int x27; unsigned long long x28; unsigned int x29; unsigned long long x30; unsigned int x31[64]; unsigned int x32[64]; unsigned int x33[64]; unsigned int x34[64]; unsigned int x35; unsigned long long x36; unsigned long long x37; unsigned int x38[64]; unsigned int x39[64]; unsigned int x40; unsigned int x41; unsigned int x42; unsigned int x43; unsigned int x44; unsigned int x45; unsigned long long x46; long long x47; unsigned int x48; unsigned int x49; unsigned long long x50; unsigned int x51; }*)arg1;
- (void)doRemoveModelFileDictionary:(id)arg1 ioSIDs:(unsigned int*)arg2 ioSIDsSize:(unsigned long long)arg3;
- (void)echo:(struct VirtANEModel { unsigned int x1; long long x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned int x11[32]; unsigned long long x12[32]; unsigned int x13[32]; unsigned long long x14[32]; unsigned long long x15; unsigned long long x16; unsigned long long x17; BOOL x18; unsigned char x19; unsigned int x20; unsigned long long x21; unsigned int x22; unsigned int x23; unsigned int x24; unsigned long long x25; unsigned int x26; unsigned int x27; unsigned long long x28; unsigned int x29; unsigned long long x30; unsigned int x31[64]; unsigned int x32[64]; unsigned int x33[64]; unsigned int x34[64]; unsigned int x35; unsigned long long x36; unsigned long long x37; unsigned int x38[64]; unsigned int x39[64]; unsigned int x40; unsigned int x41; unsigned int x42; unsigned int x43; unsigned int x44; unsigned int x45; unsigned long long x46; long long x47; unsigned int x48; unsigned int x49; unsigned long long x50; unsigned int x51; }*)arg1;
- (void)echoDictionary:(id)arg1 ioSIDs:(unsigned int*)arg2 ioSIDsSize:(unsigned long long)arg3;
- (void)endRealTimeTask:(struct VirtANEModel { unsigned int x1; long long x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned int x11[32]; unsigned long long x12[32]; unsigned int x13[32]; unsigned long long x14[32]; unsigned long long x15; unsigned long long x16; unsigned long long x17; BOOL x18; unsigned char x19; unsigned int x20; unsigned long long x21; unsigned int x22; unsigned int x23; unsigned int x24; unsigned long long x25; unsigned int x26; unsigned int x27; unsigned long long x28; unsigned int x29; unsigned long long x30; unsigned int x31[64]; unsigned int x32[64]; unsigned int x33[64]; unsigned int x34[64]; unsigned int x35; unsigned long long x36; unsigned long long x37; unsigned int x38[64]; unsigned int x39[64]; unsigned int x40; unsigned int x41; unsigned int x42; unsigned int x43; unsigned int x44; unsigned int x45; unsigned long long x46; long long x47; unsigned int x48; unsigned int x49; unsigned long long x50; unsigned int x51; }*)arg1;
- (void)evaluateWithModel:(struct VirtANEModel { unsigned int x1; long long x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned int x11[32]; unsigned long long x12[32]; unsigned int x13[32]; unsigned long long x14[32]; unsigned long long x15; unsigned long long x16; unsigned long long x17; BOOL x18; unsigned char x19; unsigned int x20; unsigned long long x21; unsigned int x22; unsigned int x23; unsigned int x24; unsigned long long x25; unsigned int x26; unsigned int x27; unsigned long long x28; unsigned int x29; unsigned long long x30; unsigned int x31[64]; unsigned int x32[64]; unsigned int x33[64]; unsigned int x34[64]; unsigned int x35; unsigned long long x36; unsigned long long x37; unsigned int x38[64]; unsigned int x39[64]; unsigned int x40; unsigned int x41; unsigned int x42; unsigned int x43; unsigned int x44; unsigned int x45; unsigned long long x46; long long x47; unsigned int x48; unsigned int x49; unsigned long long x50; unsigned int x51; }*)arg1;
- (void)evaluateWithModelDictionary:(id)arg1 ioSIDs:(unsigned int*)arg2 ioSIDsSize:(unsigned long long)arg3;
- (void)exchangeBuildVersionInfo:(struct BuildVersionInfo { unsigned int x1; unsigned int x2; unsigned long long x3; unsigned char x4[32]; unsigned char x5; unsigned long long x6; unsigned long long x7[16]; }*)arg1;
- (void)getArrayFromIOSurfaceID:(unsigned int)arg1 localData:(unsigned int*)arg2 localDataLength:(unsigned long long)arg3;
- (void)getDeviceInfo:(struct DeviceInfo { unsigned int x1; long long x2; long long x3; bool x4; }*)arg1;
- (struct __IOSurface { }*)getIOSurface:(unsigned long long)arg1;
- (id)getObjectFromIOSurfaceID:(unsigned int)arg1 classType:(Class)arg2 length:(unsigned long long)arg3;
- (unsigned short)getQueueCount;
- (id)guestBuildVersion;
- (unsigned long long)guestCapabilityMask;
- (unsigned int)guestDataInterfaceVersion;
- (id)init:(id)arg1;
- (void)loadModel:(struct VirtANEModel { unsigned int x1; long long x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned int x11[32]; unsigned long long x12[32]; unsigned int x13[32]; unsigned long long x14[32]; unsigned long long x15; unsigned long long x16; unsigned long long x17; BOOL x18; unsigned char x19; unsigned int x20; unsigned long long x21; unsigned int x22; unsigned int x23; unsigned int x24; unsigned long long x25; unsigned int x26; unsigned int x27; unsigned long long x28; unsigned int x29; unsigned long long x30; unsigned int x31[64]; unsigned int x32[64]; unsigned int x33[64]; unsigned int x34[64]; unsigned int x35; unsigned long long x36; unsigned long long x37; unsigned int x38[64]; unsigned int x39[64]; unsigned int x40; unsigned int x41; unsigned int x42; unsigned int x43; unsigned int x44; unsigned int x45; unsigned long long x46; long long x47; unsigned int x48; unsigned int x49; unsigned long long x50; unsigned int x51; }*)arg1;
- (void)loadModelDictionary:(id)arg1 ioSIDs:(unsigned int*)arg2 ioSIDsSize:(unsigned long long)arg3;
- (void)mapIOSurfacesWithModel:(struct VirtANEModel { unsigned int x1; long long x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned int x11[32]; unsigned long long x12[32]; unsigned int x13[32]; unsigned long long x14[32]; unsigned long long x15; unsigned long long x16; unsigned long long x17; BOOL x18; unsigned char x19; unsigned int x20; unsigned long long x21; unsigned int x22; unsigned int x23; unsigned int x24; unsigned long long x25; unsigned int x26; unsigned int x27; unsigned long long x28; unsigned int x29; unsigned long long x30; unsigned int x31[64]; unsigned int x32[64]; unsigned int x33[64]; unsigned int x34[64]; unsigned int x35; unsigned long long x36; unsigned long long x37; unsigned int x38[64]; unsigned int x39[64]; unsigned int x40; unsigned int x41; unsigned int x42; unsigned int x43; unsigned int x44; unsigned int x45; unsigned long long x46; long long x47; unsigned int x48; unsigned int x49; unsigned long long x50; unsigned int x51; }*)arg1;
- (void)mapIOSurfacesWithModelDictionary:(id)arg1 ioSIDs:(unsigned int*)arg2 ioSIDsSize:(unsigned long long)arg3;
- (void)modelAction:(unsigned short)arg1 buffer:(void*)arg2 bufferSize:(unsigned long long)arg3;
- (id)objectWithIOSurfaceID:(unsigned int)arg1;
- (void)printIOSurfaceDataInBytes:(unsigned int)arg1;
- (void)purgeCompiledModel:(struct VirtANEModel { unsigned int x1; long long x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned int x11[32]; unsigned long long x12[32]; unsigned int x13[32]; unsigned long long x14[32]; unsigned long long x15; unsigned long long x16; unsigned long long x17; BOOL x18; unsigned char x19; unsigned int x20; unsigned long long x21; unsigned int x22; unsigned int x23; unsigned int x24; unsigned long long x25; unsigned int x26; unsigned int x27; unsigned long long x28; unsigned int x29; unsigned long long x30; unsigned int x31[64]; unsigned int x32[64]; unsigned int x33[64]; unsigned int x34[64]; unsigned int x35; unsigned long long x36; unsigned long long x37; unsigned int x38[64]; unsigned int x39[64]; unsigned int x40; unsigned int x41; unsigned int x42; unsigned int x43; unsigned int x44; unsigned int x45; unsigned long long x46; long long x47; unsigned int x48; unsigned int x49; unsigned long long x50; unsigned int x51; }*)arg1;
- (void)purgeCompiledModelDictionary:(id)arg1 ioSIDs:(unsigned int*)arg2 ioSIDsSize:(unsigned long long)arg3;
- (void)purgeCompiledModelMatchingHash:(struct VirtANEModel { unsigned int x1; long long x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned int x11[32]; unsigned long long x12[32]; unsigned int x13[32]; unsigned long long x14[32]; unsigned long long x15; unsigned long long x16; unsigned long long x17; BOOL x18; unsigned char x19; unsigned int x20; unsigned long long x21; unsigned int x22; unsigned int x23; unsigned int x24; unsigned long long x25; unsigned int x26; unsigned int x27; unsigned long long x28; unsigned int x29; unsigned long long x30; unsigned int x31[64]; unsigned int x32[64]; unsigned int x33[64]; unsigned int x34[64]; unsigned int x35; unsigned long long x36; unsigned long long x37; unsigned int x38[64]; unsigned int x39[64]; unsigned int x40; unsigned int x41; unsigned int x42; unsigned int x43; unsigned int x44; unsigned int x45; unsigned long long x46; long long x47; unsigned int x48; unsigned int x49; unsigned long long x50; unsigned int x51; }*)arg1;
- (void)purgeCompiledModelMatchingHashDictionary:(id)arg1 ioSIDs:(unsigned int*)arg2 ioSIDsSize:(unsigned long long)arg3;
- (id)queue;
- (id)requestWithVirtualANEModel:(struct VirtANEModel { unsigned int x1; long long x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned int x11[32]; unsigned long long x12[32]; unsigned int x13[32]; unsigned long long x14[32]; unsigned long long x15; unsigned long long x16; unsigned long long x17; BOOL x18; unsigned char x19; unsigned int x20; unsigned long long x21; unsigned int x22; unsigned int x23; unsigned int x24; unsigned long long x25; unsigned int x26; unsigned int x27; unsigned long long x28; unsigned int x29; unsigned long long x30; unsigned int x31[64]; unsigned int x32[64]; unsigned int x33[64]; unsigned int x34[64]; unsigned int x35; unsigned long long x36; unsigned long long x37; unsigned int x38[64]; unsigned int x39[64]; unsigned int x40; unsigned int x41; unsigned int x42; unsigned int x43; unsigned int x44; unsigned int x45; unsigned long long x46; long long x47; unsigned int x48; unsigned int x49; unsigned long long x50; unsigned int x51; }*)arg1;
- (id)requestWithVirtualANEModelDictionary:(id)arg1 ioSIDs:(unsigned int*)arg2 ioSIDsSize:(unsigned long long)arg3;
- (void)setGuestBuildVersion:(id)arg1;
- (void)setGuestCapabilityMask:(unsigned long long)arg1;
- (void)setGuestDataInterfaceVersion:(unsigned int)arg1;
- (void)storeGuestBuildVersion:(struct BuildVersionInfoLegacy { unsigned int x1; unsigned char x2[32]; unsigned char x3; }*)arg1;
- (void)unLoadModel:(struct VirtANEModel { unsigned int x1; long long x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned int x11[32]; unsigned long long x12[32]; unsigned int x13[32]; unsigned long long x14[32]; unsigned long long x15; unsigned long long x16; unsigned long long x17; BOOL x18; unsigned char x19; unsigned int x20; unsigned long long x21; unsigned int x22; unsigned int x23; unsigned int x24; unsigned long long x25; unsigned int x26; unsigned int x27; unsigned long long x28; unsigned int x29; unsigned long long x30; unsigned int x31[64]; unsigned int x32[64]; unsigned int x33[64]; unsigned int x34[64]; unsigned int x35; unsigned long long x36; unsigned long long x37; unsigned int x38[64]; unsigned int x39[64]; unsigned int x40; unsigned int x41; unsigned int x42; unsigned int x43; unsigned int x44; unsigned int x45; unsigned long long x46; long long x47; unsigned int x48; unsigned int x49; unsigned long long x50; unsigned int x51; }*)arg1;
- (void)unLoadModelDictionary:(id)arg1 ioSIDs:(unsigned int*)arg2 ioSIDsSize:(unsigned long long)arg3;
- (void)updateErrorValue:(struct VirtANEModel { unsigned int x1; long long x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned int x11[32]; unsigned long long x12[32]; unsigned int x13[32]; unsigned long long x14[32]; unsigned long long x15; unsigned long long x16; unsigned long long x17; BOOL x18; unsigned char x19; unsigned int x20; unsigned long long x21; unsigned int x22; unsigned int x23; unsigned int x24; unsigned long long x25; unsigned int x26; unsigned int x27; unsigned long long x28; unsigned int x29; unsigned long long x30; unsigned int x31[64]; unsigned int x32[64]; unsigned int x33[64]; unsigned int x34[64]; unsigned int x35; unsigned long long x36; unsigned long long x37; unsigned int x38[64]; unsigned int x39[64]; unsigned int x40; unsigned int x41; unsigned int x42; unsigned int x43; unsigned int x44; unsigned int x45; unsigned long long x46; long long x47; unsigned int x48; unsigned int x49; unsigned long long x50; unsigned int x51; }*)arg1 error:(id)arg2;
- (void)updateErrorValueDictionary:(id)arg1 ioSIDs:(unsigned int*)arg2 error:(id)arg3;
- (id)updateOptions:(id)arg1 virtualANEModel:(struct VirtANEModel { unsigned int x1; long long x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned int x11[32]; unsigned long long x12[32]; unsigned int x13[32]; unsigned long long x14[32]; unsigned long long x15; unsigned long long x16; unsigned long long x17; BOOL x18; unsigned char x19; unsigned int x20; unsigned long long x21; unsigned int x22; unsigned int x23; unsigned int x24; unsigned long long x25; unsigned int x26; unsigned int x27; unsigned long long x28; unsigned int x29; unsigned long long x30; unsigned int x31[64]; unsigned int x32[64]; unsigned int x33[64]; unsigned int x34[64]; unsigned int x35; unsigned long long x36; unsigned long long x37; unsigned int x38[64]; unsigned int x39[64]; unsigned int x40; unsigned int x41; unsigned int x42; unsigned int x43; unsigned int x44; unsigned int x45; unsigned long long x46; long long x47; unsigned int x48; unsigned int x49; unsigned long long x50; unsigned int x51; }*)arg2;
- (id)updateOptionsDictionary:(id)arg1 dictionary:(id)arg2;
- (void)updatePerformanceStats:(struct VirtANEModel { unsigned int x1; long long x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned int x11[32]; unsigned long long x12[32]; unsigned int x13[32]; unsigned long long x14[32]; unsigned long long x15; unsigned long long x16; unsigned long long x17; BOOL x18; unsigned char x19; unsigned int x20; unsigned long long x21; unsigned int x22; unsigned int x23; unsigned int x24; unsigned long long x25; unsigned int x26; unsigned int x27; unsigned long long x28; unsigned int x29; unsigned long long x30; unsigned int x31[64]; unsigned int x32[64]; unsigned int x33[64]; unsigned int x34[64]; unsigned int x35; unsigned long long x36; unsigned long long x37; unsigned int x38[64]; unsigned int x39[64]; unsigned int x40; unsigned int x41; unsigned int x42; unsigned int x43; unsigned int x44; unsigned int x45; unsigned long long x46; long long x47; unsigned int x48; unsigned int x49; unsigned long long x50; unsigned int x51; }*)arg1 aneRequest:(id)arg2;
- (void)updatePerformanceStatsDictionary:(id)arg1 ioSIDs:(unsigned int*)arg2 aneRequest:(id)arg3;
- (void)updateVirtualANEModel:(struct VirtANEModel { unsigned int x1; long long x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned int x11[32]; unsigned long long x12[32]; unsigned int x13[32]; unsigned long long x14[32]; unsigned long long x15; unsigned long long x16; unsigned long long x17; BOOL x18; unsigned char x19; unsigned int x20; unsigned long long x21; unsigned int x22; unsigned int x23; unsigned int x24; unsigned long long x25; unsigned int x26; unsigned int x27; unsigned long long x28; unsigned int x29; unsigned long long x30; unsigned int x31[64]; unsigned int x32[64]; unsigned int x33[64]; unsigned int x34[64]; unsigned int x35; unsigned long long x36; unsigned long long x37; unsigned int x38[64]; unsigned int x39[64]; unsigned int x40; unsigned int x41; unsigned int x42; unsigned int x43; unsigned int x44; unsigned int x45; unsigned long long x46; long long x47; unsigned int x48; unsigned int x49; unsigned long long x50; unsigned int x51; }*)arg1 model:(id)arg2;
- (void)updateVirtualANEModelDictionary:(id)arg1 ioSIDs:(unsigned int*)arg2 model:(id)arg3 aneModelKey:(id)arg4;

@end