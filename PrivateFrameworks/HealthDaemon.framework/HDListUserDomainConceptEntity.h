
@interface HDListUserDomainConceptEntity : HDUserDomainConceptEntity

+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (id)deduplicateUserDomainConcept:(id)arg1 with:(id)arg2 transaction:(id)arg3 error:(id*)arg4;
+ (id)entityEncoderForProfile:(id)arg1 transaction:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(id /* block */)arg5;
+ (id)foreignKeys;
+ (bool)insertConcreteUserDomainConcept:(id)arg1 userDomainConceptID:(long long)arg2 transaction:(id)arg3 error:(id*)arg4;
+ (id)newUserDomainConceptForRefreshWithCodingCollection:(id)arg1 propertyCollection:(id)arg2;
+ (id)predicateMatchingSemanticDuplicatesOf:(id)arg1;
+ (id)predicateMatchingSemanticIdentifier:(id)arg1;
+ (id)privateDataEntities;
+ (long long)protectionClass;
+ (bool)updateConcreteUserDomainConcept:(id)arg1 userDomainConceptID:(long long)arg2 transaction:(id)arg3 error:(id*)arg4;
+ (Class)userDomainConceptClass;
+ (Class)userDomainConceptSemanticIdentifierClass;
+ (bool)willDeleteConcreteUserDomainConcept:(id)arg1 userDomainConceptID:(long long)arg2 syncProvenance:(long long)arg3 transaction:(id)arg4 error:(id*)arg5;

@end
