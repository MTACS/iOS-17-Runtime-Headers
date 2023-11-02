
@interface TSXUserFilteredExported : NSObject <TSXUserFilteredClockClientProtocol> {
    TSXUserFilteredClock * _object;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) TSXUserFilteredClock *object;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)changedClockMaster;
- (id)object;
- (void)resetClock;
- (void)setObject:(id)arg1;
- (void)updateLockState:(int)arg1;
- (void)updateTimeSyncTime:(unsigned long long)arg1 timeSyncInterval:(unsigned long long)arg2 domainTime:(unsigned long long)arg3 domainInterval:(unsigned long long)arg4;

@end
