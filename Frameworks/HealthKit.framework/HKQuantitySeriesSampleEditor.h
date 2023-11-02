
@interface HKQuantitySeriesSampleEditor : NSObject <_HKXPCExportable> {
    NSMutableSet * _datesIntervalsToRemove;
    HKHealthStore * _healthStore;
    NSUUID * _identifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HKTaskServerProxyProvider * _proxyProvider;
    HKQuantitySample * _quantitySample;
    long long  _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) HKQuantitySample *quantitySample;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long unitTest_state;

+ (id)serverInterface;

- (void).cxx_destruct;
- (bool)_performWithError:(id*)arg1 stateValidator:(id /* block */)arg2 lockedBlock:(id /* block */)arg3;
- (void)commitWithCompletion:(id /* block */)arg1;
- (void)connectionInvalidated;
- (void)dealloc;
- (id)description;
- (void)discard;
- (id)exportedInterface;
- (id)initWithHealthStore:(id)arg1 quantitySample:(id)arg2;
- (id)quantitySample;
- (id)remoteInterface;
- (bool)removeQuantityForDateInterval:(id)arg1 error:(id*)arg2;
- (long long)unitTest_state;

@end
