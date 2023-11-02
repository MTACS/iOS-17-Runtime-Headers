
@interface HDUserDomainConceptLocalizedStringEntity : HDHealthEntity <HDUserDomainConceptDataEntity>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)addPropertyDataToCodable:(id)arg1 userDomainConceptID:(long long)arg2 transaction:(id)arg3 error:(id*)arg4;
+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (id)foreignKeys;
+ (bool)insertDataForUserDomainConcept:(id)arg1 userDomainConceptID:(long long)arg2 transaction:(id)arg3 error:(id*)arg4;
+ (long long)protectionClass;
+ (bool)retrieveDataForUserDomainConcept:(id)arg1 userDomainConceptID:(long long)arg2 mutableUserDomainConceptProperties:(id)arg3 transaction:(id)arg4 error:(id*)arg5;
+ (bool)willDeleteUserDomainConcept:(id)arg1 userDomainConceptID:(long long)arg2 syncProvenance:(long long)arg3 transaction:(id)arg4 error:(id*)arg5;

@end
