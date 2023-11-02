
@interface _EFLazyCacheConditionLock : NSConditionLock {
    _Atomic long long  _waiterCount;
}

@property (readonly) long long waiterCount;

- (void)decrementWaiterCount;
- (void)incrementWaiterCount;
- (id)initWithCondition:(long long)arg1;
- (long long)waiterCount;

@end
