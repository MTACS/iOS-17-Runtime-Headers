
@interface MTLGPUDebugImageData : NSObject {
    unsigned long long  _constantDataBufferIndex;
    struct KeyBufferPair { 
        struct Key { 
            struct { 
                unsigned char key[32]; 
            } hash; 
            NSData *data; 
        } key; 
        <MTLBuffer> *buffer; 
    }  _constantDataKeyPair;
    struct mutex { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } __m_; 
    }  _constantDataMutex;
    MTLDebugInstrumentationData * _debugInstrumentationData;
    MTLGPUDebugDevice * _device;
    MTLGPUDebugDynamicLibrary * _dynamicLibrary;
    MTLGPUDebugFunction * _function;
    unsigned long long  _functionType;
    unsigned long long  _imageID;
    int  _imageType;
    NSString * _loadedImageName;
    MTLGPUDebugBuffer * constantDataBuffer;
}

@property (nonatomic, readonly) MTLDebugInstrumentationData *debugInstrumentationData;
@property (nonatomic, readonly) MTLGPUDebugDynamicLibrary *dynamicLibrary;
@property (nonatomic, readonly) MTLGPUDebugFunction *function;
@property (nonatomic, readonly) unsigned long long functionType;
@property (nonatomic, readonly) int imageType;
@property (nonatomic, readonly) NSString *loadedImageName;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_applyConstantRelocation;
- (void)_applyConstantRelocation:(id)arg1;
- (void)_applyImageIDRelocation:(id)arg1;
- (void)dealloc;
- (id)debugInstrumentationData;
- (id)dynamicLibrary;
- (id)function;
- (unsigned long long)functionType;
- (int)imageType;
- (id)initWithDynamicLibrary:(id)arg1;
- (id)initWithFunction:(id)arg1;
- (id)initWithFunction:(id)arg1 debugInstrumentationData:(id)arg2;
- (id)loadedImageName;
- (void)setConstantData:(id)arg1;

@end
