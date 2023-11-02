
@interface HKMedicationScheduleItemQuery : HKQuery <HKMedicationScheduleItemQueryClientInterface> {
    NSDate * _fromDate;
    NSString * _identifier;
    id /* block */  _resultsHandler;
    NSArray * _sortDescriptors;
    NSDate * _toDate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSDate *fromDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSArray *sortDescriptors;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSDate *toDate;

+ (id)clientInterfaceProtocol;
+ (Class)configurationClass;
+ (void)configureClientInterface:(id)arg1;

- (void).cxx_destruct;
- (void)client_deliverScheduleItems:(id)arg1 queryUUID:(id)arg2;
- (id)fromDate;
- (id)identifier;
- (id)initWithFromDate:(id)arg1 toDate:(id)arg2 identifier:(id)arg3 sortDescriptors:(id)arg4 resultsHandler:(id /* block */)arg5;
- (void)queue_deliverError:(id)arg1;
- (void)queue_populateConfiguration:(id)arg1;
- (void)queue_queryDidDeactivate:(id)arg1;
- (void)queue_validate;
- (id)sortDescriptors;
- (id)toDate;

@end
