
@interface CMMTLCommandQueue : NSObject <MTLCommandQueueSPI> {
    CMMTLDevice * _cmDevice;
    <MTLCommandQueue> * _commandQueue;
    InterceptConfig * _interceptConfig;
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

- (void).cxx_destruct;
- (id)commandBuffer;
- (id)commandBufferWithUnretainedReferences;
- (id)device;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithCMMTLDevice:(id)arg1;
- (id)initWithCMMTLDevice:(id)arg1 descriptor:(id)arg2;
- (id)initWithCMMTLDevice:(id)arg1 maxCommandBufferCount:(unsigned long long)arg2;
- (bool)respondsToSelector:(SEL)arg1;

@end
