
@interface HMDSnapshotRemoteSession : HMDSnapshotSession

- (id)description;
- (id)initWithSessionID:(id)arg1 accessory:(id)arg2 snapshotGetter:(id)arg3 message:(id)arg4 waitPeriod:(double)arg5 streamingTierType:(unsigned long long)arg6 cameraLocallyReachable:(bool)arg7;

@end
