
@protocol HDUserDomainConceptDataEntity <HDSQLiteEntity>

@required

+ (bool)addPropertyDataToCodable:(PBCodable *)arg1 userDomainConceptID:(long long)arg2 transaction:(HDDatabaseTransaction *)arg3 error:(id*)arg4;
+ (bool)insertDataForUserDomainConcept:(HKUserDomainConcept *)arg1 userDomainConceptID:(long long)arg2 transaction:(HDDatabaseTransaction *)arg3 error:(id*)arg4;
+ (bool)retrieveDataForUserDomainConcept:(HKUserDomainConcept *)arg1 userDomainConceptID:(long long)arg2 mutableUserDomainConceptProperties:(NSMutableArray *)arg3 transaction:(HDDatabaseTransaction *)arg4 error:(id*)arg5;
+ (bool)willDeleteUserDomainConcept:(HKUserDomainConcept *)arg1 userDomainConceptID:(long long)arg2 syncProvenance:(long long)arg3 transaction:(HDDatabaseTransaction *)arg4 error:(id*)arg5;

@optional

+ (bool)pruneDataForUpdatedUserDomainConcept:(HKUserDomainConcept *)arg1 userDomainConceptID:(long long)arg2 transaction:(HDDatabaseTransaction *)arg3 error:(id*)arg4;

@end
