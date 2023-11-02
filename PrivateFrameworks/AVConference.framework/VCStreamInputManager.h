
@interface VCStreamInputManager : VCObject <VCStreamInputDelegate> {
    NSObject<OS_dispatch_queue> * _streamInputQueue;
    NSMutableDictionary * _streamInputs;
    NSObject<OS_dispatch_queue> * _xpcQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (id)allocWithZone:(struct _NSZone { }*)arg1;
- (id)autorelease;
- (bool)clientProcessDiedWithXPCArguments:(id)arg1 result:(id*)arg2 error:(id*)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)deregisterBlocksForService;
- (void)didResumeStreamInput:(id)arg1;
- (void)didStartStreamInput:(id)arg1;
- (void)didStopStreamInput:(id)arg1;
- (void)didSuspendStreamInput:(id)arg1;
- (bool)getServerPidWithXPCArguments:(id)arg1 result:(id*)arg2 error:(id*)arg3;
- (id)init;
- (bool)initializeStreamInputWithXPCArguments:(id)arg1 result:(id*)arg2 error:(id*)arg3;
- (id)newStreamInputID;
- (bool)pushSampleBufferWithXPCArguments:(id)arg1 result:(id*)arg2 error:(id*)arg3;
- (void)registerBlocksForService;
- (void)registerDidClientDieBlock:(id)arg1;
- (void)registerService:(char *)arg1 weakSelf:(id)arg2 block:(id /* block */)arg3;
- (void)registerService:(char *)arg1 weakSelf:(id)arg2 eventLogLevel:(int)arg3 block:(id /* block */)arg4;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (id)streamInputWithID:(long long)arg1;
- (bool)terminateStreamInputWithXPCArguments:(id)arg1 result:(id*)arg2 error:(id*)arg3;

@end
