
@interface HDMedicationSearchEngine : NSObject

+ (id)_attributeTypesForInflation;
+ (id)_genericProductForClinicalProduct:(id)arg1 ontologyTransaction:(id)arg2 error:(id*)arg3;
+ (id)_importEligibleMedicationConceptsSinceDate:(id)arg1 limit:(long long)arg2 profile:(id)arg3 errorOut:(id*)arg4;
+ (bool)_inflateFirstConcept:(id*)arg1 predicate:(id)arg2 relationshipTypes:(id)arg3 maximumDepth:(long long)arg4 ontologyTransaction:(id)arg5 errorOut:(id*)arg6;
+ (bool)_medicationClusterFromMachineReadableCode:(id)arg1 codeAttributeType:(long long)arg2 searchResultOut:(id*)arg3 ontologyTransaction:(id)arg4 errorOut:(id*)arg5;
+ (id)_medicationClustersFromScanResult:(id)arg1 limit:(long long)arg2 ontologyTransaction:(id)arg3 errorOut:(id*)arg4;
+ (id)_medicationClustersFromTextSearchTokens:(id)arg1 limit:(long long)arg2 ontologyTransaction:(id)arg3 errorOut:(id*)arg4;
+ (id)_medicationSearchResultForClinicalProduct:(id)arg1 ontologyTransaction:(id)arg2 errorOut:(id*)arg3;
+ (bool)_medicationSearchResultForFirstConcept:(id*)arg1 predicate:(id)arg2 ontologyTransaction:(id)arg3 errorOut:(id*)arg4;
+ (id)_medicationSearchResultForSpecificProduct:(id)arg1 ontologyTransaction:(id)arg2 errorOut:(id*)arg3;
+ (id)_relationshipsForInflation;
+ (id)hkt_genericMedicationWithClinicalProductConcept:(id)arg1 profile:(id)arg2 errorOut:(id*)arg3;
+ (id)hkt_importEligibleMedicationConceptsSinceDate:(id)arg1 limit:(long long)arg2 profile:(id)arg3 errorOut:(id*)arg4;
+ (bool)medicationCluster:(id*)arg1 machineReadableCode:(id)arg2 codeAttributeType:(long long)arg3 profile:(id)arg4 errorOut:(id*)arg5;
+ (id)medicationClustersForCHRImportWithExistingMedications:(id)arg1 sinceDate:(id)arg2 limit:(long long)arg3 profile:(id)arg4 errorOut:(id*)arg5;
+ (id)medicationClustersFromScanResult:(id)arg1 limit:(long long)arg2 profile:(id)arg3 errorOut:(id*)arg4;
+ (id)medicationClustersFromTextSearchTokens:(id)arg1 limit:(long long)arg2 profile:(id)arg3 errorOut:(id*)arg4;

@end
