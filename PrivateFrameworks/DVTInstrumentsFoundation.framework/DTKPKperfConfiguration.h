
@interface DTKPKperfConfiguration : NSObject <DTKPConfiguration, DTKPTriggerCounterAllocatorProvider> {
    NSMutableArray * _allTriggerTimes;
    NSMutableArray * _allTriggers;
    unsigned long long  _bufferSize;
    DTKPCPUCounterAllocator * _counterAllocator;
    DTKPKDebugCodeSet * _kdebugCodeSet;
    struct mutex { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } __m_; 
    }  _lock;
    DTKPTriggerKDebug * _triggerKDebug;
    DTKPTriggerPMI * _triggerPMI;
    unsigned char  collectionMode;
}

@property (nonatomic) unsigned long long bufferSize;
@property (nonatomic) unsigned char collectionMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned int enabledKPCClasses;
@property (nonatomic, readonly) bool hasEnabledKPCClasses;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) DTKPKDebugCodeSet *queryCodeSet;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *triggers;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_disableContextSwitchSampling;
- (void)_disableKdebugCodes;
- (id)_enableContextSwitchSampling;
- (void)_enableKdebugCodes;
- (id)_reinitializeKperf;
- (id)_validateConfigLocked;
- (void)addCodeSet:(id)arg1;
- (id)allTriggerTime;
- (id)apply;
- (unsigned long long)bufferSize;
- (void)clearAllTriggerTime;
- (void)clearTriggerKDebug;
- (void)clearTriggerPMI;
- (void)clearTriggerTimeAtIndex:(unsigned long long)arg1;
- (unsigned char)collectionMode;
- (id)counterAllocator;
- (id)createTriggerKDebug:(id*)arg1;
- (id)createTriggerPMI:(id*)arg1;
- (id)createTriggerTime:(id*)arg1;
- (unsigned int)enabledKPCClasses;
- (id)firstTriggerTime;
- (id)generateConfigWords;
- (bool)hasEnabledKPCClasses;
- (id)init;
- (id)queryCodeSet;
- (id)queryCounterAllocator;
- (id)reset;
- (void)setBufferSize:(unsigned long long)arg1;
- (void)setCollectionMode:(unsigned char)arg1;
- (id)triggerKDebug;
- (id)triggerPMI;
- (id)triggers;

@end
