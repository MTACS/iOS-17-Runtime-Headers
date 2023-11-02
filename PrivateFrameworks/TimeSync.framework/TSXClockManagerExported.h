
@interface TSXClockManagerExported : NSObject <TSXClockManagerClientProtocol> {
    TSXClockManager * _object;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) TSXClockManager *object;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)changedTranslationClockMaster;
- (id)object;
- (void)setObject:(id)arg1;
- (void)updateTranslationClockLockState:(int)arg1;
- (void)updateTranslationClockTimeSyncTime:(unsigned long long)arg1 timeSyncInterval:(unsigned long long)arg2 domainTime:(unsigned long long)arg3 domainInterval:(unsigned long long)arg4;

@end
