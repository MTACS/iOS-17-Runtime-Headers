
@protocol TSXgPTPClockClientProtocol <TSXKernelClockClientProtocol>

@required

- (void)beginGrandmasterChangeWithGrandmasterID:(unsigned long long)arg1 localPort:(unsigned short)arg2;
- (void)changeLocalPortGrandmasterChangeWithGrandmasterID:(unsigned long long)arg1 localPort:(unsigned short)arg2;
- (void)endGrandmasterChangeWithGrandmasterID:(unsigned long long)arg1 localPort:(unsigned short)arg2;
- (void)updateGrandmasterIdentity:(unsigned long long)arg1 andgPTPPath:(NSArray *)arg2;
- (void)updateWithSyncInfoValid:(bool)arg1 syncFlags:(unsigned char)arg2 timeSyncTime:(unsigned long long)arg3 domainTimeHi:(unsigned long long)arg4 domainTimeLo:(unsigned long long)arg5 cumulativeScaledRate:(unsigned long long)arg6 inverseCumulativeScaledRate:(unsigned long long)arg7 grandmasterID:(unsigned long long)arg8 localPortNumber:(unsigned short)arg9;

@end
