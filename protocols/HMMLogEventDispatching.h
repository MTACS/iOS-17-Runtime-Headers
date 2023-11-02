
@protocol HMMLogEventDispatching <HMMLogEventSubmitting>

@required

- (void)addObserver:(id <HMMLogEventObserver>)arg1 forEventClass:(Class)arg2;
- (void)addObserver:(id <HMMLogEventObserver>)arg1 forEventClasses:(NSArray *)arg2;
- (void)addObserver:(id <HMMLogEventObserver>)arg1 forProtocol:(Protocol *)arg2;
- (NSObject<OS_dispatch_queue> *)clientQueue;
- (<HMMLogEventDispatchingDataSource> *)dataSource;
- (void)removeObserver:(id <HMMLogEventObserver>)arg1;
- (void)setDataSource:(id <HMMLogEventDispatchingDataSource>)arg1;

@end
