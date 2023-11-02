
@interface HKMCDaySummaryQuery : HKQuery <HKMCDaySummaryQueryClientInterface> {
    bool  _ascending;
    struct { 
        long long start; 
        long long duration; 
    }  _dayIndexRange;
    long long  _limit;
    id /* block */  _resultsHandler;
    NSMutableArray * _summariesPendingDelivery;
}

@property (nonatomic, readonly) bool ascending;
@property (nonatomic, readonly) struct { long long x1; long long x2; } dayIndexRange;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long limit;
@property (readonly) Class superclass;

+ (id)clientInterfaceProtocol;
+ (Class)configurationClass;
+ (void)configureClientInterface:(id)arg1;

- (void).cxx_destruct;
- (bool)ascending;
- (void)client_deliverDaySummaries:(id)arg1 clearPending:(bool)arg2 isFinalBatch:(bool)arg3 daySummaryAnchor:(id)arg4 queryUUID:(id)arg5;
- (struct { long long x1; long long x2; })dayIndexRange;
- (id)initWithDayIndexRange:(struct { long long x1; long long x2; })arg1 ascending:(bool)arg2 limit:(long long)arg3 resultsHandler:(id /* block */)arg4;
- (long long)limit;
- (void)queue_deliverError:(id)arg1;
- (void)queue_populateConfiguration:(id)arg1;
- (void)queue_queryDidDeactivate:(id)arg1;
- (void)queue_validate;

@end
