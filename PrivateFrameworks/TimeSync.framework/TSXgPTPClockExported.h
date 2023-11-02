
@interface TSXgPTPClockExported : NSObject <TSXgPTPClockClientProtocol> {
    TSXgPTPClock * _object;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) TSXgPTPClock *object;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)beginGrandmasterChangeWithGrandmasterID:(unsigned long long)arg1 localPort:(unsigned short)arg2;
- (void)changeLocalPortGrandmasterChangeWithGrandmasterID:(unsigned long long)arg1 localPort:(unsigned short)arg2;
- (void)changedClockMaster;
- (void)endGrandmasterChangeWithGrandmasterID:(unsigned long long)arg1 localPort:(unsigned short)arg2;
- (id)object;
- (void)resetClock;
- (void)setObject:(id)arg1;
- (void)updateGrandmasterIdentity:(unsigned long long)arg1 andgPTPPath:(id)arg2;
- (void)updateLockState:(int)arg1;
- (void)updateTimeSyncTime:(unsigned long long)arg1 timeSyncInterval:(unsigned long long)arg2 domainTime:(unsigned long long)arg3 domainInterval:(unsigned long long)arg4;
- (void)updateWithSyncInfoValid:(bool)arg1 syncFlags:(unsigned char)arg2 timeSyncTime:(unsigned long long)arg3 domainTimeHi:(unsigned long long)arg4 domainTimeLo:(unsigned long long)arg5 cumulativeScaledRate:(unsigned long long)arg6 inverseCumulativeScaledRate:(unsigned long long)arg7 grandmasterID:(unsigned long long)arg8 localPortNumber:(unsigned short)arg9;

@end
