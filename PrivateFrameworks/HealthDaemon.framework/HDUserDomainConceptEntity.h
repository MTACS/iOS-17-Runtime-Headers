
@interface HDUserDomainConceptEntity : HDHealthEntity

+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)createAndRefreshOntologyBackedUserDomainConceptWithConceptIdentifier:(id)arg1 additionalProperties:(id)arg2 userDomainConceptTypeIdentifier:(id)arg3 profile:(id)arg4 error:(id*)arg5;
+ (id)databaseTable;
+ (id)deduplicateUserDomainConcept:(id)arg1 with:(id)arg2 transaction:(id)arg3 error:(id*)arg4;
+ (id)defaultForeignKey;
+ (bool)deleteUserDomainConcept:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
+ (id)disambiguatedSQLForProperty:(id)arg1;
+ (bool)encodesCodableUserDomainConceptSubclassData;
+ (id)entityEncoderForProfile:(id)arg1 transaction:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(id /* block */)arg5;
+ (bool)enumerateUserDomainConceptsWithPredicate:(id)arg1 limit:(long long)arg2 orderingTerms:(id)arg3 transaction:(id)arg4 error:(id*)arg5 enumerationHandler:(id /* block */)arg6;
+ (bool)enumerateUserDomainConceptsWithPredicate:(id)arg1 transaction:(id)arg2 error:(id*)arg3 enumerationHandler:(id /* block */)arg4;
+ (long long)evaluateIsCanonicalConcept:(id)arg1 entityClass:(Class)arg2 transaction:(id)arg3 error:(id*)arg4;
+ (bool)generateAPIObjectForUserDomainConcept:(id)arg1 apiObjectOut:(id*)arg2 transaction:(id)arg3 error:(id*)arg4;
+ (id)ignoreHiddenConceptsPredicate;
+ (bool)incrementSyncAnchorAndAdjustSyncProvenanceIfNotLocalForUserDomainConceptWithUUID:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
+ (bool)insertConcreteUserDomainConcept:(id)arg1 userDomainConceptID:(long long)arg2 transaction:(id)arg3 error:(id*)arg4;
+ (bool)insertPrivateDataEnitiesForUserDomainConcept:(id)arg1 userDomainConceptID:(long long)arg2 transaction:(id)arg3 error:(id*)arg4;
+ (id)joinClausesForProperty:(id)arg1;
+ (id)newUserDomainConceptForRefreshWithCodingCollection:(id)arg1 propertyCollection:(id)arg2;
+ (id)predicateMatchingSemanticDuplicatesOf:(id)arg1;
+ (id)predicateMatchingSemanticIdentifier:(id)arg1;
+ (id)privateDataEntities;
+ (id)privateSubEntities;
+ (id)propertyForSyncAnchor;
+ (id)propertyForSyncIdentity;
+ (id)propertyForSyncProvenance;
+ (long long)protectionClass;
+ (id)refreshOntologyContentForUserDomainConcept:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
+ (bool)retrievePrivateDataEntitiesForUserDomainConcept:(id)arg1 persistentID:(long long)arg2 transaction:(id)arg3 error:(id*)arg4;
+ (long long)storeUserDomainConcept:(id)arg1 method:(long long)arg2 syncProvenance:(long long)arg3 syncIdentity:(long long)arg4 syncVersion:(struct { int x1; int x2; })arg5 transaction:(id)arg6 error:(id*)arg7;
+ (long long)storeUserDomainConcept:(id)arg1 method:(long long)arg2 transaction:(id)arg3 error:(id*)arg4;
+ (bool)supportsHidingSemanticDuplicates;
+ (bool)supportsSyncStore:(id)arg1;
+ (bool)updateConcreteUserDomainConcept:(id)arg1 userDomainConceptID:(long long)arg2 transaction:(id)arg3 error:(id*)arg4;
+ (bool)updateLinksTargetingUserDomainConceptUUID:(id)arg1 toTargetUserDomainConceptUUID:(id)arg2 transaction:(id)arg3 error:(id*)arg4;
+ (bool)updatePrivateDataEnitiesForUserDomainConcept:(id)arg1 userDomainConceptID:(long long)arg2 syncProvenance:(long long)arg3 transaction:(id)arg4 error:(id*)arg5;
+ (Class)userDomainConceptClass;
+ (Class)userDomainConceptSemanticIdentifierClass;
+ (id)userDomainConceptUUIDForCanonicalConceptWithSemanticIdentifierString:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
+ (bool)willDeleteConcreteUserDomainConcept:(id)arg1 userDomainConceptID:(long long)arg2 syncProvenance:(long long)arg3 transaction:(id)arg4 error:(id*)arg5;

@end
