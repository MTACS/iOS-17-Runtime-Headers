
@interface HDSharingAuthorizationsEntity : HDHealthEntity

+ (bool)addSharingAuthorizations:(id)arg1 forRecipientIdentifier:(id)arg2 databaseTransaction:(id)arg3 error:(id*)arg4;
+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (bool)deleteAllMarkedSharingAuthorizationsWithTransaction:(id)arg1 error:(id*)arg2;
+ (bool)deleteAllSharingAuthorizationsForRecipientIdentifier:(id)arg1 databaseTransaction:(id)arg2 error:(id*)arg3;
+ (bool)deleteSharingAuthorizations:(id)arg1 recipientIdentifier:(id)arg2 databaseTransaction:(id)arg3 error:(id*)arg4;
+ (bool)insertOrReplaceWithRecipientIdentifier:(id)arg1 sharingAuthorizations:(id)arg2 databaseTransaction:(id)arg3 error:(id*)arg4;
+ (bool)markSharingAuthorizationsForDeletion:(id)arg1 recipientIdentifier:(id)arg2 databaseTransaction:(id)arg3 error:(id*)arg4;
+ (long long)protectionClass;
+ (id)recipientIdentifiersForSharingAuthorization:(id)arg1 databaseTransaction:(id)arg2 error:(id*)arg3;
+ (id)sharingAuthorizationsForRecipientIdentifier:(id)arg1 databaseTransaction:(id)arg2 error:(id*)arg3;
+ (id)sharingAuthorizationsForRecipientIdentifier:(id)arg1 databaseTransaction:(id)arg2 includeMarkedForDeletion:(bool)arg3 error:(id*)arg4;
+ (id)sharingAuthorizationsMarkedForDeletionForRecipientIdentifier:(id)arg1 databaseTransaction:(id)arg2 error:(id*)arg3;
+ (id)uniquedColumns;

@end
