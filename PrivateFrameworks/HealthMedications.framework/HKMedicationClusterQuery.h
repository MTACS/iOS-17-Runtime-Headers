
@interface HKMedicationClusterQuery : HKQuery <HKMedicationClusterQueryClientInterface> {
    long long  _codeAttributeType;
    NSArray * _existingMedications;
    long long  _limit;
    NSString * _machineReadableCode;
    long long  _queryType;
    id /* block */  _resultsHandler;
    NSArray * _scanResult;
    NSDate * _sinceDate;
    NSArray * _textSearchTokens;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)clientInterfaceProtocol;
+ (Class)configurationClass;
+ (void)configureClientInterface:(id)arg1;

- (void).cxx_destruct;
- (void)client_deliverResults:(id)arg1 queryUUID:(id)arg2;
- (id)initForCHRImportWithExistingMedications:(id)arg1 sinceDate:(id)arg2 limit:(long long)arg3 resultsHandler:(id /* block */)arg4;
- (id)initWithMachineReadableCode:(id)arg1 codeAttributeType:(long long)arg2 resultsHandler:(id /* block */)arg3;
- (id)initWithScanResult:(id)arg1 limit:(long long)arg2 resultsHandler:(id /* block */)arg3;
- (id)initWithTextSearchTokens:(id)arg1 limit:(long long)arg2 resultsHandler:(id /* block */)arg3;
- (void)queue_deliverError:(id)arg1;
- (void)queue_populateConfiguration:(id)arg1;

@end
