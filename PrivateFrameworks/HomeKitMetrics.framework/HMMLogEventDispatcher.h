
@interface HMMLogEventDispatcher : NSObject <HMMLogEventDispatching> {
    NSObject<OS_dispatch_queue> * _clientQueue;
    <HMMLogEventDispatchingDataSource> * _dataSource;
    NSMapTable * _observersByClass;
    NSMapTable * _observersByProtocol;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property <HMMLogEventDispatchingDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMapTable *observersByClass;
@property (nonatomic, readonly) NSMapTable *observersByProtocol;
@property (readonly) Class superclass;

+ (void)initialize;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_getOrCreateObserversForEventClass:(Class)arg1;
- (void)addObserver:(id)arg1 forEventClass:(Class)arg2;
- (void)addObserver:(id)arg1 forEventClasses:(id)arg2;
- (void)addObserver:(id)arg1 forProtocol:(id)arg2;
- (id)clientQueue;
- (id)dataSource;
- (id)init;
- (id)observersByClass;
- (id)observersByProtocol;
- (void)removeObserver:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)submitLogEvent:(id)arg1;
- (void)submitLogEvent:(id)arg1 error:(id)arg2;

@end
