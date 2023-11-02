
@interface HDSyncIdentityEntity : HDHealthEntity

+ (id)childIdentitiesForCurrentSyncIdentityWithTransaction:(id)arg1 error:(id*)arg2;
+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)concreteIdentityForIdentity:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
+ (id)concreteIdentityForPersistentID:(long long)arg1 database:(id)arg2 error:(id*)arg3;
+ (id)concreteIdentityForPersistentID:(long long)arg1 transaction:(id)arg2 error:(id*)arg3;
+ (id)databaseTable;
+ (bool)enumerateConcreteIdentitiesWithTransaction:(id)arg1 error:(id*)arg2 enumerationHandler:(id /* block */)arg3;
+ (id)insertOrLookupConcreteIdentityForIdentity:(id)arg1 database:(id)arg2 error:(id*)arg3;
+ (id)insertOrLookupConcreteIdentityForIdentity:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
+ (long long)protectionClass;
+ (id)uniquedColumns;
+ (id)updateIsChild:(bool)arg1 concreteIdentity:(id)arg2 transaction:(id)arg3 error:(id*)arg4;

- (id)concreteIdentityWithTransaction:(id)arg1 error:(id*)arg2;

@end
