
@interface HKMedicationScheduleQuery : HKQuery <HKMedicationScheduleQueryClientInterface> {
    unsigned long long  _limit;
    id /* block */  _resultsHandler;
    NSArray * _sortDescriptors;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)clientInterfaceProtocol;
+ (Class)configurationClass;
+ (void)configureClientInterface:(id)arg1;

- (void).cxx_destruct;
- (void)client_deliverSchedules:(id)arg1 queryUUID:(id)arg2;
- (id)initWithPredicate:(id)arg1 limit:(unsigned long long)arg2 sortDescriptors:(id)arg3 resultsHandler:(id /* block */)arg4;
- (void)queue_deliverError:(id)arg1;
- (void)queue_populateConfiguration:(id)arg1;
- (void)queue_queryDidDeactivate:(id)arg1;
- (void)queue_validate;

@end
