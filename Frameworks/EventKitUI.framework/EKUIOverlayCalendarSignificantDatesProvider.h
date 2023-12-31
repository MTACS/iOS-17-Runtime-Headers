
@interface EKUIOverlayCalendarSignificantDatesProvider : NSObject {
    CalDateRange * _cachedCentralYear;
    CalDateRange * _cachedDateRange;
    NSDictionary * _cachedFirstsOfMonths;
    NSDictionary * _cachedFirstsOfYears;
    unsigned long long  _currentGeneration;
    NSDate * _currentRequest;
    bool  _loadPending;
    NSObject<OS_dispatch_queue> * _queue;
    id /* block */  _significantDatesChangedHandler;
}

@property (nonatomic, copy) id /* block */ significantDatesChangedHandler;

- (void).cxx_destruct;
- (void)_invalidateCaches;
- (void)_load;
- (void)_requestDate:(id)arg1;
- (void)dealloc;
- (id)firstOfOverlayMonthsForCalendarMonth:(id)arg1;
- (id)firstOfOverlayYearsForCalendarMonth:(id)arg1;
- (id)init;
- (void)setSignificantDatesChangedHandler:(id /* block */)arg1;
- (id /* block */)significantDatesChangedHandler;

@end
