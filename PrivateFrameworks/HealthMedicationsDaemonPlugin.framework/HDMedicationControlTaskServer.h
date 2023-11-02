
@interface HDMedicationControlTaskServer : HDStandardTaskServer <HKMedicationControlServerInterface>

+ (id)taskIdentifier;

- (void)connectionInvalidated;
- (id)exportedInterface;
- (id)remoteInterface;
- (void)remote_allDismissedDrugInteractionsWithCompletion:(id /* block */)arg1;
- (void)remote_deleteDismissedDrugInteractionsForMedication:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_markInteractionAsDismissed:(id)arg1 completion:(id /* block */)arg2;

@end
