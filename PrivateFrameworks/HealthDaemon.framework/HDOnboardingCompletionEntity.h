
@interface HDOnboardingCompletionEntity : HDHealthEntity

+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (bool)deleteAllCompletionsForFeatureIdentifier:(id)arg1 syncIdentity:(long long)arg2 transaction:(id)arg3 error:(id*)arg4;
+ (id)entityEncoderForProfile:(id)arg1 transaction:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(id /* block */)arg5;
+ (bool)enumerateAllOnboardingCompletionsWithTransaction:(id)arg1 predicate:(id)arg2 error:(id*)arg3 enumerationHandler:(id /* block */)arg4;
+ (id)insertCodableOnboardingCompletions:(id)arg1 syncProvenance:(long long)arg2 transaction:(id)arg3 error:(id*)arg4;
+ (id)insertOnboardingCompletion:(id)arg1 syncIdentity:(long long)arg2 transaction:(id)arg3 error:(id*)arg4;
+ (id)onboardingCompletionsForHighestVersionOfFeatureIdentifier:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
+ (id)onboardingCompletionsForLowestVersionOfFeatureIdentifier:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
+ (id)propertyForSyncIdentity;
+ (id)propertyForSyncProvenance;
+ (long long)protectionClass;

- (id)onboardingCompletionWithTransaction:(id)arg1 error:(id*)arg2;

@end
