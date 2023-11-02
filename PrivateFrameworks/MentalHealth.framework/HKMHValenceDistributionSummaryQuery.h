
@interface HKMHValenceDistributionSummaryQuery : HKQuery <HKMHValenceDistributionSummaryQueryClientInterface> {
    bool  _ascending;
    struct { 
        long long start; 
        long long duration; 
    }  _dayIndexRange;
    NSCalendar * _gregorianCalendar;
    long long  _limit;
    unsigned long long  _options;
    id /* block */  _resultsHandler;
    NSMutableArray * _summariesPendingDelivery;
}

@property (nonatomic, readonly) bool ascending;
@property (nonatomic, readonly) struct { long long x1; long long x2; } dayIndexRange;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSCalendar *gregorianCalendar;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long limit;
@property (nonatomic, readonly) unsigned long long options;
@property (readonly) Class superclass;

+ (id)clientInterfaceProtocol;
+ (Class)configurationClass;
+ (void)configureClientInterface:(id)arg1;

- (void).cxx_destruct;
- (bool)ascending;
- (void)client_deliverValenceDistributionSummaries:(id)arg1 clearPending:(bool)arg2 isFinalBatch:(bool)arg3 queryUUID:(id)arg4;
- (struct { long long x1; long long x2; })dayIndexRange;
- (id)gregorianCalendar;
- (id)initWithDayIndexRange:(struct { long long x1; long long x2; })arg1 gregorianCalendar:(id)arg2 predicate:(id)arg3 options:(unsigned long long)arg4 ascending:(bool)arg5 limit:(long long)arg6 resultsHandler:(id /* block */)arg7;
- (long long)limit;
- (unsigned long long)options;
- (void)queue_deliverError:(id)arg1;
- (void)queue_populateConfiguration:(id)arg1;
- (void)queue_queryDidDeactivate:(id)arg1;
- (void)queue_validate;

@end
