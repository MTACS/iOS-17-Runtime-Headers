
@interface HMDSnapshotLocalSession : HMDSnapshotSession

- (void)addMessage:(id)arg1;
- (id)description;
- (id)initWithSessionID:(id)arg1 accessory:(id)arg2 snapshotGetter:(id)arg3 message:(id)arg4 waitPeriod:(double)arg5 reachabilityPath:(unsigned long long)arg6 cameraLocallyReachable:(bool)arg7 snapshotForNotification:(bool)arg8;

@end
