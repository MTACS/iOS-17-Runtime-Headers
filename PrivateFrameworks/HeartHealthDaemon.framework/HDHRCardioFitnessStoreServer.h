
@interface HDHRCardioFitnessStoreServer : HDStandardTaskServer <HDDiagnosticObject, HKHRCardioFitnessStoreServer>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)taskIdentifier;

- (bool)_insertSampleWithLocalSource:(id)arg1 error:(id*)arg2;
- (bool)_saveCardioFitnessNotificationWithValue:(id)arg1 threshold:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 options:(unsigned long long)arg5 error:(id*)arg6;
- (void)connectionInvalidated;
- (id)diagnosticDescription;
- (id)exportedInterface;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (id)remoteInterface;
- (void)remote_saveCardioFitnessAlertWithValue:(id)arg1 threshold:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 options:(unsigned long long)arg5 completion:(id /* block */)arg6;

@end
