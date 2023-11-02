
@interface ACHActivitySummaryIterator : NSObject <_HKXPCExportable> {
    NSCalendar * _calendar;
    HKHealthStore * _healthStore;
    bool  _includePrivateProperties;
    HKTaskServerProxyProvider * _proxyProvider;
}

@property (nonatomic, retain) NSCalendar *calendar;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HKHealthStore *healthStore;
@property (nonatomic) bool includePrivateProperties;
@property (nonatomic, retain) HKTaskServerProxyProvider *proxyProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_enumerateActivitySummariesIncludingEmptySummariesForDateComponentInterval:(id)arg1 handler:(id /* block */)arg2 errorHandler:(id /* block */)arg3;
- (id)calendar;
- (void)connectionInvalidated;
- (void)enumerateActivitySummariesForDateComponentInterval:(id)arg1 handler:(id /* block */)arg2 errorHandler:(id /* block */)arg3;
- (void)enumerateActivitySummariesForDateComponentInterval:(id)arg1 includeNilSummaries:(bool)arg2 handler:(id /* block */)arg3 errorHandler:(id /* block */)arg4;
- (id)exportedInterface;
- (id)healthStore;
- (bool)includePrivateProperties;
- (id)initWithHealthStore:(id)arg1 shouldIncludePrivateProperties:(bool)arg2;
- (id)newEmptyActivitySummaryFromSummary:(id)arg1;
- (id)proxyProvider;
- (id)remoteInterface;
- (void)setCalendar:(id)arg1;
- (void)setHealthStore:(id)arg1;
- (void)setIncludePrivateProperties:(bool)arg1;
- (void)setProxyProvider:(id)arg1;

@end
