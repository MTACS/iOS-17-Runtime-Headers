
@protocol HKMedicationControlServerInterface <HKUnitTestingTaskServerInterface>

@required

- (void)remote_allDismissedDrugInteractionsWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)remote_deleteDismissedDrugInteractionsForMedication:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: HKMedicationUserDomainConcept *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_markInteractionAsDismissed:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: HKDrugInteractionResult *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
