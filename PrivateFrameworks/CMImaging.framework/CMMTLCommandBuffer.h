
@interface CMMTLCommandBuffer : NSObject <MTLCommandBufferSPI> {
    CMMTLCommandQueue * _cmCommandQueue;
    NSMutableString * _cmLabel;
    <MTLCommandBuffer> * _commandBuffer;
    InterceptConfig * _interceptConfig;
    bool  _unretained;
}

@property (readonly) double GPUEndTime;
@property (readonly) double GPUStartTime;
@property (readonly) <MTLCommandQueue> *commandQueue;
@property (readonly, retain) <MTLDeadlineProfile> *deadlineProfile;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (readonly) NSError *error;
@property (readonly) unsigned long long errorOptions;
@property (readonly) unsigned long long globalTraceObjectID;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) InterceptConfig *interceptConfig;
@property (readonly) double kernelEndTime;
@property (readonly) double kernelStartTime;
@property (copy) NSString *label;
@property (getter=getListIndex, nonatomic, readonly) unsigned long long listIndex;
@property (readonly) <MTLLogContainer> *logs;
@property (getter=isProfilingEnabled) bool profilingEnabled;
@property (readonly) NSDictionary *profilingResults;
@property (readonly) bool retainedReferences;
@property (readonly) unsigned long long status;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSMutableDictionary *userDictionary;

- (void).cxx_destruct;
- (id)commandQueue;
- (void)commit;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithCMMTLCommandQueue:(id)arg1 unretained:(bool)arg2;
- (id)interceptConfig;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setInterceptConfig:(id)arg1;
- (void)waitUntilCompleted;
- (void)waitUntilScheduled;

@end
