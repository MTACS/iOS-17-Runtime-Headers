
@interface PLShare : PLManagedObject <PLCloudDeletable>

@property (nonatomic) short cloudDeleteState;
@property (readonly) long long cloudDeletionType;
@property (readonly, copy) NSString *cloudUUIDForDeletion;
@property (nonatomic, copy) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSDate *expiryDate;
@property (readonly) unsigned long long hash;
@property (nonatomic) short localPublishState;
@property (nonatomic, retain) NSSet *participants;
@property (nonatomic) long long publicPermission;
@property (nonatomic, copy) NSString *scopeIdentifier;
@property (nonatomic) long long scopeType;
@property (nonatomic, copy) NSURL *shareURL;
@property (nonatomic) short status;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSDate *trashedDate;
@property (nonatomic) short trashedState;
@property (nonatomic, copy) NSString *uuid;

+ (void)_abortIfCalledOnBaseClass;
+ (id)_basePredicateIncludeTrashedShares:(bool)arg1;
+ (long long)_cloudDeletionTypeForScopeType:(long long)arg1;
+ (long long)_cloudDeletionTypeForStatus:(short)arg1;
+ (id)_registeredSubclasses;
+ (bool)_shouldRecordCloudDeletionForShare:(id)arg1;
+ (long long)cloudDeletionTypeForTombstone:(id)arg1;
+ (id)cloudUUIDKeyForDeletion;
+ (id)createOwnedShareWithUUID:(id)arg1 creationDate:(id)arg2 title:(id)arg3 inPhotoLibrary:(id)arg4;
+ (void)deleteAllSharesInManagedObjectContext:(id)arg1;
+ (void)deleteExpiredSharesInManagedObjectContext:(id)arg1;
+ (void)deleteOldTrashedSharesInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (void)fetchShareFromShareURL:(id)arg1 inPhotoLibrary:(id)arg2 completionHandler:(id /* block */)arg3;
+ (bool)incrementallyDeleteAndSaveShares:(id)arg1 logMessagePrefix:(id)arg2 error:(id*)arg3;
+ (id)insertInPhotoLibrary:(id)arg1;
+ (id)insertOrUpdateShareWithCPLScopeChange:(id)arg1 inPhotoLibrary:(id)arg2;
+ (id)predicateToExcludeExpiredShares;
+ (id)predicateToExcludeTrashedShares;
+ (id)scopeIdentifierPrefix;
+ (id)shareWithScopeIdentifier:(id)arg1 includeTrashed:(bool)arg2 inManagedObjectContext:(id)arg3;
+ (id)shareWithScopeIdentifiers:(id)arg1 includeTrashed:(bool)arg2 inManagedObjectContext:(id)arg3;
+ (id)shareWithScopedIdentifier:(id)arg1 includeTrashed:(bool)arg2 inManagedObjectContext:(id)arg3;
+ (id)shareWithShareURL:(id)arg1 includeTrashed:(bool)arg2 inManagedObjectContext:(id)arg3;
+ (id)shareWithUUID:(id)arg1 includeTrashed:(bool)arg2 inManagedObjectContext:(id)arg3;
+ (id)sharesWithPredicate:(id)arg1 fetchLimit:(unsigned long long)arg2 inManagedObjectContext:(id)arg3;
+ (bool)shouldAllowFetchURLWithScopeChange:(id)arg1 photoLibrary:(id)arg2 error:(id*)arg3;
+ (bool)supportsCPLScopeType:(long long)arg1;
+ (bool)validateCPLScopeChange:(id)arg1;

- (id)_statusDescription;
- (void)_updateShareStatusWithCurrentUser:(id)arg1;
- (void)acceptWithCompletionHandler:(id /* block */)arg1;
- (void)autoAcceptShareIfNecessary;
- (long long)cloudDeletionType;
- (id)cloudUUIDForDeletion;
- (id)compactDescription;
- (id)cplScopeChange;
- (id)currentUserParticipant;
- (bool)incrementallyDeleteAndSaveWithError:(id*)arg1;
- (bool)isCurrentUserOwner;
- (id)owner;
- (void)prepareForDeletion;
- (long long)publicPermission;
- (void)publishWithCompletionHandler:(id /* block */)arg1;
- (long long)scopeType;
- (void)setPublicPermission:(long long)arg1;
- (void)setScopeType:(long long)arg1;
- (void)trash;
- (void)untrash;
- (void)updateShareWithCPLShare:(id)arg1 inPhotoLibrary:(id)arg2;

@end
