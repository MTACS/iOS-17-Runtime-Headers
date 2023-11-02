
@protocol HDMHTypicalDayProviding

@required

- (void)rebuildTypicalDayProviderForCurrentDate;
- (void)registerObserver:(id <HDMHTypicalDayProviderObserver>)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2;
- (void)removeObserver:(id <HDMHTypicalDayProviderObserver>)arg1;
- (NSDate *)userEndOfDay;
- (NSDate *)userStartOfDay;

@end
