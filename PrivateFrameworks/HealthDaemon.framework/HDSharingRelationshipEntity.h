
@interface HDSharingRelationshipEntity : HDHealthEntity

+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (bool)deleteEntityWithRecipientIdentifier:(id)arg1 databaseTransaction:(id)arg2 error:(id*)arg3;
+ (id)entityWithRecipientIdentifier:(id)arg1 databaseTransaction:(id)arg2 error:(id*)arg3;
+ (id)insertOrReplaceWithRecipientIdentifier:(id)arg1 dateModified:(id)arg2 syncProvenance:(long long)arg3 syncIdentity:(long long)arg4 databaseTransaction:(id)arg5 error:(id*)arg6;
+ (id)propertyForSyncIdentity;
+ (id)propertyForSyncProvenance;
+ (long long)protectionClass;

- (id)dateModifiedInDatabaseTransaction:(id)arg1 error:(id*)arg2;
- (id)recipientIdentifierInDatabaseTransaction:(id)arg1 error:(id*)arg2;
- (bool)setDateModified:(id)arg1 databaseTransaction:(id)arg2 error:(id*)arg3;

@end
