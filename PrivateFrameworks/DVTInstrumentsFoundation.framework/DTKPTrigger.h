
@interface DTKPTrigger : NSObject {
    unsigned int  _actionID;
    bool  _collectKernelStacks;
    bool  _collectUserStacks;
    <DTKPTriggerCounterAllocatorProvider> * _counterAllocatorProvider;
    NSObject<OS_dispatch_semaphore> * _lock;
    bool  _requestsPMCSampling;
    unsigned int  _samplers;
    int  _targetPid;
    unsigned int  _triggerID;
}

@property (nonatomic) unsigned int actionID;
@property (nonatomic) bool collectKernelStacks;
@property (nonatomic) bool collectUserStacks;
@property (nonatomic, readonly, retain) DTKPCPUCounterAllocator *counterAllocator;
@property (nonatomic, readonly) <DTKPTriggerCounterAllocatorProvider> *counterAllocatorProvider;
@property (nonatomic, readonly, retain) NSObject<OS_dispatch_semaphore> *lock;
@property (nonatomic, readonly) unsigned long long pmcEventCount;
@property (nonatomic, readonly, retain) DTKPCPUCounterAllocator *queryCounterAllocator;
@property (nonatomic, readonly) bool requestsPMCSampling;
@property (nonatomic) unsigned int samplers;
@property (nonatomic) int targetPid;
@property (nonatomic, readonly) unsigned int triggerID;
@property (readonly) unsigned long long triggerKind;
@property (readonly) const char *triggerKindRepr;

+ (int)reinitializeKperf:(id*)arg1;

- (void).cxx_destruct;
- (unsigned int)_actionAlloc;
- (void)_actionDealloc:(unsigned int)arg1;
- (int)_setFilterByPid:(int)arg1 forAction:(unsigned int)arg2;
- (int)_setSamplers:(unsigned int)arg1 forAction:(unsigned int)arg2;
- (unsigned int)actionID;
- (int)addPMCEventNamed:(id)arg1 error:(id*)arg2;
- (bool)collectKernelStacks;
- (bool)collectUserStacks;
- (id)counterAllocator;
- (id)counterAllocatorProvider;
- (void)dealloc;
- (id)init;
- (id)initWithCounterAllocatorProvider:(id)arg1;
- (id)lock;
- (unsigned long long)pmcEventCount;
- (id)queryCounterAllocator;
- (bool)requestsPMCSampling;
- (unsigned int)samplers;
- (void)setActionID:(unsigned int)arg1;
- (void)setCollectKernelStacks:(bool)arg1;
- (void)setCollectUserStacks:(bool)arg1;
- (void)setSamplers:(unsigned int)arg1;
- (void)setTargetPid:(int)arg1;
- (int)start:(id*)arg1;
- (int)stop:(id*)arg1;
- (int)targetPid;
- (unsigned int)triggerID;
- (unsigned long long)triggerKind;
- (const char *)triggerKindRepr;

@end
