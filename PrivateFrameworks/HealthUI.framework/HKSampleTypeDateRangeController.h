
@interface HKSampleTypeDateRangeController : NSObject {
    bool  _applicationIsInForeground;
    _HKDateRangeQuery * _dateRangeQuery;
    NSDictionary * _dateRangesBySampleType;
    HKHealthStore * _healthStore;
    bool  _lastQuerySufferedError;
    NSString * _name;
    NSHashTable * _observers;
}

@property (nonatomic, readonly) NSDictionary *dateRangesBySampleType;
@property (nonatomic, copy) NSString *name;

- (void).cxx_destruct;
- (void)_alertObserverDidUpdateDateRanges:(id)arg1;
- (void)_alertObserversDidUpdateDateRanges;
- (void)_applicationMovingToBackground:(id)arg1;
- (void)_applicationMovingToForeground:(id)arg1;
- (void)_beginUpdates;
- (void)_resultsDidUpdate:(id)arg1;
- (void)_updateHandlerDidReceiveError:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)dateRangeForSampleType:(id)arg1;
- (id)dateRangesBySampleType;
- (void)dealloc;
- (id)initWithHealthStore:(id)arg1;
- (id)name;
- (void)removeObserver:(id)arg1;
- (void)setName:(id)arg1;

@end
