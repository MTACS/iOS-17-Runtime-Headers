
@interface VCStreamOutputManager : NSObject <VCRemoteVideoManagerDelegate> {
    NSObject<OS_dispatch_queue> * _stateQueue;
    NSMutableDictionary * _streamOutputSourceForStreamToken;
    NSMutableDictionary * _streamOutputs;
    bool  _useFigRemoteQueue;
    NSObject<OS_dispatch_queue> * _xpcCallbackQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (id)allocDispatchedStreamOutputWithStreamToken:(long long)arg1 clientPid:(int)arg2 options:(id)arg3 errorCode:(int*)arg4;
- (id)allocStreamOutputWithStreamToken:(long long)arg1 clientPid:(int)arg2 options:(id)arg3 errorCode:(int*)arg4;
- (void)cleanupStreamOutput:(id)arg1;
- (void)connectionDidChangeWithLocalInterfaceType:(id)arg1 remoteInterfaceType:(id)arg2 streamToken:(long long)arg3;
- (void)dealloc;
- (void)deregisterBlocksForService;
- (void)deregisterStreamOutputSourceForStreamToken:(long long)arg1;
- (void)dispatchedCleanupStreamOutput:(id)arg1;
- (void)dispatchedDeregisterStreamOutputSourceForStreamToken:(long long)arg1;
- (void)dispatchedRegisterStreamOutputSource:(id)arg1 forStreamToken:(long long)arg2;
- (void)dispatchedRemoteMediaDidStall:(bool)arg1 streamToken:(long long)arg2;
- (void)dispatchedRemoteVideoDidDegrade:(bool)arg1 streamToken:(long long)arg2;
- (void)dispatchedRemoteVideoDidPause:(bool)arg1 streamToken:(long long)arg2;
- (void)dispatchedRemoteVideoDidSuspend:(bool)arg1 streamToken:(long long)arg2;
- (id)init;
- (void)networkQualityDidDegrade:(bool)arg1 isLocalNetworkQualityDegraded:(bool)arg2 streamToken:(long long)arg3;
- (void)registerBlocksForService;
- (void)registerStreamOutputSource:(id)arg1 forStreamToken:(long long)arg2;
- (void)releaseQueueForStreamToken:(long long)arg1;
- (void)remoteMediaDidStall:(bool)arg1 streamToken:(long long)arg2;
- (void)remoteVideoDidDegrade:(bool)arg1 streamToken:(long long)arg2;
- (void)remoteVideoDidPause:(bool)arg1 streamToken:(long long)arg2;
- (void)remoteVideoDidSuspend:(bool)arg1 streamToken:(long long)arg2;
- (id)serviceHandlerStreamOutputInitializeWithArguments:(id)arg1 error:(id*)arg2;
- (id)serviceHandlerStreamOutputNotifyCacheWithArguments:(id)arg1 error:(id*)arg2;
- (id)serviceHandlerStreamOutputTerminateWithArguments:(id)arg1 error:(id*)arg2;
- (bool)sourceExistsForStreamToken:(long long)arg1;

@end
