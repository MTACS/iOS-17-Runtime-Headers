
@interface HDDrugInteractionEngineTaskServer : HDStandardTaskServer <HKDrugInteractionEngineServerInterface>

+ (id)requiredEntitlements;
+ (id)taskIdentifier;

- (void)connectionInvalidated;
- (id)exportedInterface;
- (id)remoteInterface;
- (void)remote_interactionClassForLifestyleFactor:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)remote_interactionClassesForConceptWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_interactionClassesForMedication:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_interactionResultForFirstMedication:(id)arg1 secondMedication:(id)arg2 completion:(id /* block */)arg3;
- (void)remote_interactionResultForMedication:(id)arg1 lifestyleFactor:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)remote_interactionResultsForInteractionClasses:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_interactionResultsForMedications:(id)arg1 lifestyleFactors:(id)arg2 completion:(id /* block */)arg3;
- (void)remote_numberOfInteractionsForConceptWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_numberOfInteractionsForMedication:(id)arg1 completion:(id /* block */)arg2;

@end
