
@interface EspressoMetalKernelsCache : NSObject {
    <MTLDevice> * _device;
    NSString * _kernelPrefix;
    NSDictionary * _m_kernelCache;
    NSMutableDictionary * auxLibraries;
    NSObject<OS_dispatch_queue> * dictionary_write_queue;
    bool  isSupportingiOSGPUFamilyV2;
    <MTLLibrary> * m_DefaultLibrary;
    <MTLLibrary> * m_ShaderLibrary;
    NSMutableDictionary * m_kernelCache_rw;
    struct mutex { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } __m_; 
    }  setup_mutex;
}

@property (nonatomic, retain) NSString *kernelPrefix;
@property (retain) NSDictionary *m_kernelCache;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addLibraryAtPath:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (id)kernelForFunction:(const char *)arg1;
- (id)kernelForFunction:(const char *)arg1 cacheString:(const char *)arg2 withConstants:(id)arg3;
- (id)kernelPrefix;
- (void)lazySetup;
- (void)loadLibraryNamed:(id)arg1;
- (id)m_kernelCache;
- (void)setKernelPrefix:(id)arg1;
- (void)setM_kernelCache:(id)arg1;
- (bool)shouldUseTexArray;
- (bool)wasSetup;

@end
