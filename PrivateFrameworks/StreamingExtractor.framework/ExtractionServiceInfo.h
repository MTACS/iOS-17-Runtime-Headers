
@interface ExtractionServiceInfo : NSObject {
    unsigned long long  _availableExtractionServiceMemory;
    struct _opaque_pthread_cond_t { 
        long long __sig; 
        BOOL __opaque[40]; 
    }  _availableExtractionServiceMemoryCondition;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _availableExtractionServiceMemoryMutex;
    NSString * _pluginBundlePath;
    NSUUID * _uuid;
}

@property (nonatomic) unsigned long long availableExtractionServiceMemory;
@property (nonatomic, readonly) struct _opaque_pthread_cond_t { long long x1; BOOL x2[40]; } availableExtractionServiceMemoryCondition;
@property (nonatomic, readonly) struct _opaque_pthread_mutex_t { long long x1; BOOL x2[56]; } availableExtractionServiceMemoryMutex;
@property (nonatomic, readonly) NSString *pluginBundlePath;
@property (nonatomic, readonly) NSUUID *uuid;

+ (id)extractionServiceInfoForPluginBundlePath:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)availableExtractionServiceMemory;
- (struct _opaque_pthread_cond_t { long long x1; BOOL x2[40]; })availableExtractionServiceMemoryCondition;
- (struct _opaque_pthread_mutex_t { long long x1; BOOL x2[56]; })availableExtractionServiceMemoryMutex;
- (void)dealloc;
- (void)extractionBecameInvalid;
- (id)initWithPluginBundlePath:(id)arg1;
- (id)initWithUUID:(id)arg1 pluginBundlePath:(id)arg2;
- (id)pluginBundlePath;
- (void)releaseExtractionMemory:(id)arg1;
- (id)reserveExtractionMemory:(id)arg1;
- (void)setAvailableExtractionServiceMemory:(unsigned long long)arg1;
- (id)uuid;

@end
