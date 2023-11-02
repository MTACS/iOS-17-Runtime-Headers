
@interface HDContributorEntity : HDHealthEntity

+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)contributorEntityForNoContributorWithProfile:(id)arg1 error:(id*)arg2;
+ (id)contributorEntityWithUUID:(id)arg1 profile:(id)arg2 includeDeleted:(bool)arg3 error:(id*)arg4;
+ (id)contributorForReference:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)databaseTable;
+ (bool)deleteContributorWithUUID:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)externalReferenceForContributorReference:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)insertOrLookupContributorEntityForNoContributorWithTransaction:(id)arg1 syncIdentity:(long long)arg2 error:(id*)arg3;
+ (id)insertPrimaryUserWithAppleID:(id)arg1 callerID:(id)arg2 syncIdentity:(long long)arg3 database:(id)arg4 error:(id*)arg5;
+ (id)insertWithUUID:(id)arg1 appleID:(id)arg2 callerID:(id)arg3 primaryUser:(bool)arg4 profile:(id)arg5 error:(id*)arg6;
+ (id)insertWithUUID:(id)arg1 appleID:(id)arg2 callerID:(id)arg3 primaryUser:(bool)arg4 syncProvenance:(long long)arg5 syncIdentity:(long long)arg6 transaction:(id)arg7 error:(id*)arg8;
+ (id)noneContributorUUID;
+ (id)primaryUserContributorInDatabase:(id)arg1 error:(id*)arg2;
+ (id)primaryUserContributorInProfile:(id)arg1 error:(id*)arg2;
+ (id)propertyForSyncAnchor;
+ (id)propertyForSyncIdentity;
+ (id)propertyForSyncProvenance;
+ (long long)protectionClass;

- (id)appleIDInProfile:(id)arg1 error:(id*)arg2;
- (id)callerIDInProfile:(id)arg1 error:(id*)arg2;
- (bool)deletedInProfile:(id)arg1 error:(id*)arg2;
- (id)modificationDateInProfile:(id)arg1 error:(id*)arg2;
- (id)syncAnchorInProfile:(id)arg1 error:(id*)arg2;
- (bool)updateAppleID:(id)arg1 profile:(id)arg2 error:(id*)arg3;
- (bool)updateCallerID:(id)arg1 profile:(id)arg2 error:(id*)arg3;

@end
