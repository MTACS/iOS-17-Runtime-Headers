
@interface MTLToolsCommandQueue : MTLToolsObject <MTLCommandQueueSPI> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _perfHandlerLock;
    id /* block */  _perfSampleHandlerBlock;
    MTLToolsPerfCounterMailbox * _perfSampleMailbox;
}

@property (getter=isStatEnabled, nonatomic) bool StatEnabled;
@property (getter=getStatLocations, nonatomic) unsigned long long StatLocations;
@property (getter=getStatOptions, nonatomic) unsigned long long StatOptions;
@property int backgroundTrackingPID;
@property (readonly) NSObject<OS_dispatch_queue> *commitQueue;
@property (readonly) bool commitSynchronously;
@property (readonly) NSObject<OS_dispatch_queue> *completionQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (readonly) bool disableCrossQueueHazardTracking;
@property bool executionEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) bool isOpenGLQueue;
@property (copy) NSString *label;
@property (readonly) unsigned long long maxCommandBufferCount;
@property (getter=isProfilingEnabled) bool profilingEnabled;
@property (readonly) unsigned long long qosLevel;
@property bool skipRender;
@property (readonly) Class superclass;

- (void)addPerfSampleHandler:(id /* block */)arg1;
- (id)availableCounters;
- (int)backgroundTrackingPID;
- (id)commandBuffer;
- (id)commandBufferWithDescriptor:(id)arg1;
- (id)commandBufferWithUnretainedReferences;
- (id)commitQueue;
- (bool)commitSynchronously;
- (id)completionQueue;
- (id)counterInfo;
- (void)dealloc;
- (bool)disableCrossQueueHazardTracking;
- (void)dispatchAvailableCompletionNotifications;
- (bool)executionEnabled;
- (void)finish;
- (unsigned long long)getBackgroundGPUPriority;
- (unsigned long long)getGPUPriority;
- (id)getRequestedCounters;
- (id)getSPIStats;
- (unsigned long long)getStatLocations;
- (unsigned long long)getStatOptions;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;
- (void)insertDebugCaptureBoundary;
- (bool)isOpenGLQueue;
- (bool)isProfilingEnabled;
- (bool)isStatEnabled;
- (id)label;
- (unsigned long long)maxCommandBufferCount;
- (unsigned long long)qosLevel;
- (int)requestCounters:(id)arg1;
- (int)requestCounters:(id)arg1 withIndex:(unsigned long long)arg2;
- (bool)setBackgroundGPUPriority:(unsigned long long)arg1;
- (bool)setBackgroundGPUPriority:(unsigned long long)arg1 offset:(unsigned short)arg2;
- (void)setBackgroundTrackingPID:(int)arg1;
- (void)setCompletionQueue:(id)arg1;
- (void)setExecutionEnabled:(bool)arg1;
- (bool)setGPUPriority:(unsigned long long)arg1;
- (bool)setGPUPriority:(unsigned long long)arg1 offset:(unsigned short)arg2;
- (void)setLabel:(id)arg1;
- (void)setProfilingEnabled:(bool)arg1;
- (void)setSkipRender:(bool)arg1;
- (void)setStatEnabled:(bool)arg1;
- (void)setStatLocations:(unsigned long long)arg1;
- (void)setStatOptions:(unsigned long long)arg1;
- (void)setSubmissionQueue:(id)arg1;
- (bool)skipRender;
- (id /* block */)snapshotPerfSampleHandlerAndStatEnabled:(bool*)arg1 forCommandBuffer:(id)arg2;
- (id)subdivideCounterList:(id)arg1;

@end
