
@interface HKSleepDaySummaryQuery : HKQuery <HKSleepDaySummaryQueryClientInterface> {
    bool  _ascending;
    HKSleepDaySummaryCacheSettings * _cacheSettings;
    NSCalendar * _calendarOverrides;
    long long  _limit;
    struct { 
        long long start; 
        long long duration; 
    }  _morningIndexRange;
    unsigned long long  _options;
    id /* block */  _resultsHandler;
    NSMutableArray * _summariesPendingDelivery;
}

@property (nonatomic, readonly) bool ascending;
@property (nonatomic, copy) HKSleepDaySummaryCacheSettings *cacheSettings;
@property (nonatomic, copy) NSCalendar *calendarOverrides;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long limit;
@property (nonatomic, readonly) struct { long long x1; long long x2; } morningIndexRange;
@property (nonatomic, readonly) bool onlySleepAnalysis;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) bool skipDaysWithoutSleepAnalysis;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool surfaceSleepStages;

+ (id)clientInterfaceProtocol;
+ (Class)configurationClass;
+ (void)configureClientInterface:(id)arg1;

- (void).cxx_destruct;
- (bool)ascending;
- (id)cacheSettings;
- (id)calendarOverrides;
- (void)client_deliverDaySummaries:(id)arg1 clearPending:(bool)arg2 isFinalBatch:(bool)arg3 queryUUID:(id)arg4;
- (id)initWithMorningIndexRange:(struct { long long x1; long long x2; })arg1 ascending:(bool)arg2 limit:(long long)arg3 options:(unsigned long long)arg4 resultsHandler:(id /* block */)arg5;
- (long long)limit;
- (struct { long long x1; long long x2; })morningIndexRange;
- (bool)onlySleepAnalysis;
- (unsigned long long)options;
- (void)queue_deliverError:(id)arg1;
- (void)queue_populateConfiguration:(id)arg1;
- (void)queue_queryDidDeactivate:(id)arg1;
- (void)queue_validate;
- (void)setCacheSettings:(id)arg1;
- (void)setCalendarOverrides:(id)arg1;
- (bool)skipDaysWithoutSleepAnalysis;
- (bool)surfaceSleepStages;

@end
