
@interface HDUserDomainMedicalCodingEntity : HDHealthEntity <HDUserDomainConceptDataEntity>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)addPropertyDataToCodable:(id)arg1 userDomainConceptID:(long long)arg2 transaction:(id)arg3 error:(id*)arg4;
+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (bool)enumerateMedicalCodingsWithPredicate:(id)arg1 transaction:(id)arg2 error:(id*)arg3 enumerationHandler:(id /* block */)arg4;
+ (id)foreignKeys;
+ (bool)insertDataForUserDomainConcept:(id)arg1 userDomainConceptID:(long long)arg2 transaction:(id)arg3 error:(id*)arg4;
+ (id)joinClausesForProperty:(id)arg1;
+ (id)privateSubEntities;
+ (long long)protectionClass;
+ (bool)retrieveDataForUserDomainConcept:(id)arg1 userDomainConceptID:(long long)arg2 mutableUserDomainConceptProperties:(id)arg3 transaction:(id)arg4 error:(id*)arg5;
+ (id)triggers;
+ (id)uniquedColumns;
+ (bool)willDeleteUserDomainConcept:(id)arg1 userDomainConceptID:(long long)arg2 syncProvenance:(long long)arg3 transaction:(id)arg4 error:(id*)arg5;

@end
