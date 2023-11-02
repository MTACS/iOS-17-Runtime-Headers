
@protocol HKDrugInteractionEngineServerInterface <HKUnitTestingTaskServerInterface>

@required

- (void)remote_interactionClassForLifestyleFactor:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HKDrugInteractionClass *, NSError *, void*
- (void)remote_interactionClassesForConceptWithIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: HKConceptIdentifier *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, NSError *, void*
- (void)remote_interactionClassesForMedication:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: HKMedicationUserDomainConcept *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, NSError *, void*
- (void)remote_interactionResultForFirstMedication:(void *)arg1 secondMedication:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: HKMedicationUserDomainConcept *, HKMedicationUserDomainConcept *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HKMedicationInteractionResult *, NSError *, void*
- (void)remote_interactionResultForMedication:(void *)arg1 lifestyleFactor:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: HKMedicationUserDomainConcept *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HKMedicationInteractionResult *, NSError *, void*
- (void)remote_interactionResultsForInteractionClasses:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, NSError *, void*
- (void)remote_interactionResultsForMedications:(void *)arg1 lifestyleFactors:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSSet *, NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, NSError *, void*
- (void)remote_numberOfInteractionsForConceptWithIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: HKConceptIdentifier *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (void)remote_numberOfInteractionsForMedication:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: HKMedicationUserDomainConcept *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*

@end
