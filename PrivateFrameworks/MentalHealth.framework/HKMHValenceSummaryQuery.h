
@interface HKMHValenceSummaryQuery : HKQuery <HKMHValenceSummaryQueryClientInterface> {
    struct { 
        long long start; 
        long long duration; 
    }  _dayIndexRange;
    NSCalendar * _gregorianCalendar;
    id /* block */  _resultsHandler;
}

@property (nonatomic, readonly) struct { long long x1; long long x2; } dayIndexRange;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSCalendar *gregorianCalendar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)clientInterfaceProtocol;
+ (Class)configurationClass;
+ (void)configureClientInterface:(id)arg1;

- (void).cxx_destruct;
- (void)client_deliverValenceSummary:(id)arg1 queryUUID:(id)arg2;
- (struct { long long x1; long long x2; })dayIndexRange;
- (id)gregorianCalendar;
- (id)initWithDayIndexRange:(struct { long long x1; long long x2; })arg1 gregorianCalendar:(id)arg2 predicate:(id)arg3 resultsHandler:(id /* block */)arg4;
- (void)queue_deliverError:(id)arg1;
- (void)queue_populateConfiguration:(id)arg1;
- (void)queue_queryDidDeactivate:(id)arg1;
- (void)queue_validate;

@end
