
@interface VCRemoteVideoManager : NSObject <VCRemoteVideoManagerDelegate> {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSMutableDictionary * _queuesForStreamTokenDict;
    NSMutableDictionary * _stateCacheForStreamTokenDict;
    NSObject<OS_dispatch_queue> * _xpcCallbackQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)cleanupDictionaries;
- (void)connectionDidChangeWithLocalInterfaceType:(id)arg1 remoteInterfaceType:(id)arg2 streamToken:(long long)arg3;
- (id)contextIdForStreamTokenWithArguments:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (void)dispatchNetworkQualityDidDegrade:(bool)arg1 isLocalNetworkQualityDegraded:(bool)arg2 streamToken:(long long)arg3;
- (void)dispatchedConnectionDidChangeWithLocalInterfaceType:(id)arg1 remoteInterfaceType:(id)arg2 streamToken:(long long)arg3;
- (void)dispatchedNotifyCachedStateForStreamToken:(id)arg1;
- (void)dispatchedRemoteMediaDidStall:(bool)arg1 streamToken:(long long)arg2;
- (void)dispatchedRemoteVideoDidDegrade:(bool)arg1 streamToken:(long long)arg2;
- (void)dispatchedRemoteVideoDidPause:(bool)arg1 streamToken:(long long)arg2;
- (void)dispatchedRemoteVideoDidSuspend:(bool)arg1 streamToken:(long long)arg2;
- (bool)doesQueueExistForStreamToken:(id)arg1;
- (id)init;
- (void)networkQualityDidDegrade:(bool)arg1 isLocalNetworkQualityDegraded:(bool)arg2 streamToken:(long long)arg3;
- (id)newQueueForStreamToken:(long long)arg1 videoMode:(int)arg2;
- (id)newQueueForStreamToken:(long long)arg1 videoMode:(int)arg2 imageQueueProtected:(bool)arg3;
- (void)notifyCachedStateForStreamToken:(id)arg1;
- (void)registerBlocksForService;
- (void)releaseQueueForStreamToken:(long long)arg1;
- (void)remoteMediaDidStall:(bool)arg1 streamToken:(long long)arg2;
- (void)remoteVideoDidDegrade:(bool)arg1 streamToken:(long long)arg2;
- (void)remoteVideoDidPause:(bool)arg1 streamToken:(long long)arg2;
- (void)remoteVideoDidSuspend:(bool)arg1 streamToken:(long long)arg2;
- (id)setLayerBoundsForStreamTokenWithArguments:(id)arg1 error:(id*)arg2;
- (unsigned int)slotForStreamToken:(long long)arg1 videoMode:(int)arg2;

@end
