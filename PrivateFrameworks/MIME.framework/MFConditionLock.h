
@interface MFConditionLock : NSConditionLock <MFLockObject> {
    id  _delegate;
    NSString * _name;
}

+ (void)initialize;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithName:(id)arg1 andDelegate:(id)arg2;
- (id)initWithName:(id)arg1 condition:(long long)arg2 andDelegate:(id)arg3;
- (bool)isLockedByMe;
- (bool)lockBeforeDate:(id)arg1;
- (bool)lockWhenCondition:(long long)arg1 beforeDate:(id)arg2;
- (void)unlock;
- (void)unlockWithCondition:(long long)arg1;

@end
