
@interface HDSharingAuthorizationManager : NSObject {
    NSMutableDictionary * _addedAuthorizationsByRecipient;
    HKSynchronousObserverSet * _observers;
    HDProfile * _profile;
    NSMutableDictionary * _removedAuthorizationsByRecipient;
}

- (void).cxx_destruct;
- (bool)addSharingAuthorizations:(id)arg1 recipientIdentifier:(id)arg2 error:(id*)arg3;
- (void)deleteMarkedSharingAuthorizations;
- (id)initWithProfile:(id)arg1;
- (bool)insertOrUpdateCodableRelationships:(id)arg1 syncProvenance:(long long)arg2 error:(id*)arg3;
- (bool)insertOrUpdateRecipientIdentifier:(id)arg1 sharingAuthorizations:(id)arg2 dateModified:(id)arg3 syncProvenance:(long long)arg4 syncIdentity:(long long)arg5 databaseTransaction:(id)arg6 error:(id*)arg7;
- (bool)markSharingAuthorizationsForDeletion:(id)arg1 recipientIdentifier:(id)arg2 error:(id*)arg3;
- (id)recipientIdentifiersForSharingAuthorizations:(id)arg1 error:(id*)arg2;
- (void)registerObserver:(id)arg1;
- (bool)removeSharingAuthorizations:(id)arg1 recipientIdentifier:(id)arg2 error:(id*)arg3;
- (bool)revokeRecipientWithIdentifier:(id)arg1 error:(id*)arg2;
- (id)sharingAuthorizationsForRecipientIdentifier:(id)arg1 error:(id*)arg2;
- (id)sharingAuthorizationsMarkedForDeletionForRecipientIdentifier:(id)arg1 error:(id*)arg2;
- (void)unregisterObserver:(id)arg1;
- (bool)updateAuthorizationsForRecipientIdentifier:(id)arg1 sharingAuthorizationsToAdd:(id)arg2 sharingAuthorizationsToRemove:(id)arg3 error:(id*)arg4;

@end
