
@interface HDQuantitySeriesManager : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _observerLock;
    NSMutableDictionary * _observerLock_observersByType;
    NSMutableDictionary * _observerLock_synchronousObserversByType;
    HDProfile * _profile;
}

@property (nonatomic, readonly) HDProfile *profile;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1 forType:(id)arg2 queue:(id)arg3;
- (void)addSynchronousObserver:(id)arg1 forType:(id)arg2;
- (bool)discardSeries:(id)arg1 error:(id*)arg2;
- (id)freezeSeries:(id)arg1 metadata:(id)arg2 endDate:(id)arg3 error:(id*)arg4;
- (id)init;
- (id)initWithProfile:(id)arg1;
- (bool)insertValues:(id)arg1 series:(id)arg2 error:(id*)arg3;
- (id)profile;
- (void)removeObserver:(id)arg1 forType:(id)arg2;
- (void)samplesAdded:(id)arg1 type:(id)arg2 anchor:(id)arg3 transaction:(id)arg4;
- (void)samplesJournaled:(id)arg1 type:(id)arg2;
- (void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2 transaction:(id)arg3;

@end
