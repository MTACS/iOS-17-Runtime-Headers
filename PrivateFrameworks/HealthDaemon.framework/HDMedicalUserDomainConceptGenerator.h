
@interface HDMedicalUserDomainConceptGenerator : HDUserDomainConceptOntologyContentRefresher

+ (bool)generateUserDomainConceptForMedicalRecord:(id)arg1 entityPersistentID:(id)arg2 insertionContext:(id)arg3 transaction:(id)arg4 error:(id*)arg5;
+ (bool)performAdditionalCleanupAfterRefreshingUserDomainConcept:(id)arg1 ontologyTransaction:(id)arg2 error:(id*)arg3;
+ (id)propertyCollectionWithOntologyConcept:(id)arg1 ontologyTransaction:(id)arg2 error:(id*)arg3;
+ (bool)remapMedicalRecordsIfNeededForUserDomainConcept:(id)arg1 shouldExcludeExistingConcept:(bool)arg2 ontologyTransaction:(id)arg3 error:(id*)arg4;
+ (long long)resolveOntologyConceptForRefreshFromUserDomainConceptWithoutOntologyCoding:(id)arg1 outAdditionalCodings:(id*)arg2 outConceptToRefreshWith:(id*)arg3 ontologyTransaction:(id)arg4 error:(id*)arg5;
+ (bool)supportsAutomaticGrouperPromotion;

@end
