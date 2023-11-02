
@protocol VCRemoteVideoManagerDelegate <NSObject>

@required

- (void)connectionDidChangeWithLocalInterfaceType:(NSString *)arg1 remoteInterfaceType:(NSString *)arg2 streamToken:(long long)arg3;
- (void)networkQualityDidDegrade:(bool)arg1 isLocalNetworkQualityDegraded:(bool)arg2 streamToken:(long long)arg3;
- (void)releaseQueueForStreamToken:(long long)arg1;
- (void)remoteMediaDidStall:(bool)arg1 streamToken:(long long)arg2;
- (void)remoteVideoDidDegrade:(bool)arg1 streamToken:(long long)arg2;
- (void)remoteVideoDidPause:(bool)arg1 streamToken:(long long)arg2;
- (void)remoteVideoDidSuspend:(bool)arg1 streamToken:(long long)arg2;

@optional

- (void)remoteVideoServerDidDie;

@end
