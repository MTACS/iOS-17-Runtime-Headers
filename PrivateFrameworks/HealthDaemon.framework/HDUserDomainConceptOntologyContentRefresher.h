
@interface HDUserDomainConceptOntologyContentRefresher : NSObject

+ (bool)_determineIfEligibleForRefreshAndPerformRefreshOperationForConcept:(id)arg1 ontologyTransaction:(id)arg2 outRefreshedUserDomainConcept:(id*)arg3 error:(id*)arg4;
+ (long long)_isAbleToPromoteConceptToGrouper:(id)arg1 ontologyTransaction:(id)arg2 error:(id*)arg3;
+ (long long)_isAbleToUpdateUserDomainConcept:(id)arg1 outAdditionalCodings:(id*)arg2 outConceptToRefreshWith:(id*)arg3 ontologyTransaction:(id)arg4 error:(id*)arg5;
+ (long long)_loadMercuryConceptForRefreshFromUserDomainConcept:(id)arg1 ontologyCoding:(id)arg2 outConcept:(id*)arg3 ontologyTransaction:(id)arg4 error:(id*)arg5;
+ (long long)_performAutomaticGrouperPromotionForConcept:(id)arg1 userDomainConcept:(id)arg2 outConcept:(id*)arg3 ontologyTransaction:(id)arg4 error:(id*)arg5;
+ (id)_refreshUserDomainConcept:(id)arg1 withOntologyConcept:(id)arg2 codings:(id)arg3 ontologyTransaction:(id)arg4 error:(id*)arg5;
+ (bool)performAdditionalCleanupAfterRefreshingUserDomainConcept:(id)arg1 ontologyTransaction:(id)arg2 error:(id*)arg3;
+ (id)propertyCollectionWithOntologyConcept:(id)arg1 ontologyTransaction:(id)arg2 error:(id*)arg3;
+ (id)refreshOntologyContentForUserDomainConcept:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
+ (long long)resolveOntologyConceptForRefreshFromUserDomainConceptWithoutOntologyCoding:(id)arg1 outAdditionalCodings:(id*)arg2 outConceptToRefreshWith:(id*)arg3 ontologyTransaction:(id)arg4 error:(id*)arg5;
+ (bool)supportsAutomaticGrouperPromotion;

@end
