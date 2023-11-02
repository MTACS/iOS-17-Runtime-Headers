
@interface AAFollowUpController : NSObject <AAFollowUpProtocol>

- (id)_addRecoveryContactAction;
- (id)_addRecoveryKeyActionForIdentifier:(id)arg1;
- (void)_dismissFollowUpWithIdentifiers:(id)arg1 completion:(id /* block */)arg2;
- (id)_followUpController;
- (id)_followUpForRecoveryKeyHealingWithContext:(id)arg1;
- (id)_followUpForRecoveryKeyMismatchWithContext:(id)arg1;
- (id)_followUpForWalrusRecoveryKeyMismatchWithContext:(id)arg1;
- (id)_followUpItemForBeneficiaryIneligible:(id)arg1;
- (id)_followUpItemForBeneficiaryRemoved:(id)arg1;
- (id)_followUpItemForCustodianEmbargo:(id)arg1;
- (id)_followUpItemForCustodianInvitationReminder:(id)arg1;
- (id)_followUpItemForCustodianRemoved:(id)arg1;
- (id)_followUpItemForCustodianWalrusNoLiveness:(id)arg1;
- (id)_followUpItemForCustodianWalrusRemoved:(id)arg1;
- (id)_followUpItemForRenewCredentials:(id)arg1;
- (id)_followUpItemForStartUsing:(id)arg1;
- (id)_followUpItemForVerifyTerms:(id)arg1;
- (id)_followUpItemForWalrusUserRecoveryFactorsMissing:(id)arg1;
- (id)_followupActionUserInfo:(id)arg1;
- (id)_recoveryKeyMismatchOtherOptionsActionWithUserInfo:(id)arg1;
- (id)_recoveryNotificationWithInfo:(id)arg1 type:(id)arg2;
- (bool)_shouldPostRenewFollowup:(id)arg1;
- (id)_verifyRecoveryKeyAction;
- (id)_walrusUserRecoveryFactorsMissingNotification;
- (double)ageOfOldestCustodianCFU;
- (id)creationDateOfOldestFollowUpWithIdentifiers:(id)arg1;
- (void)dismissFollowUpWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (bool)dismissFollowUpWithIdentifier:(id)arg1 error:(id*)arg2;
- (void)dismissFollowUpWithIdentifier:(id)arg1 forAccount:(id)arg2 completion:(id /* block */)arg3;
- (void)dismissFollowUpsForAccount:(id)arg1 identifiers:(id)arg2 completion:(id /* block */)arg3;
- (id)followUpItemForIdentifier:(id)arg1;
- (id)followUpItemForIdentifier:(id)arg1 userInfo:(id)arg2;
- (bool)isRenewCredentialsCFUPosted;
- (void)pendingFollowUpWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)pendingFollowUpsForAccount:(id)arg1 completion:(id /* block */)arg2;
- (void)postFollowUpWithIdentifier:(id)arg1 forAccount:(id)arg2 userInfo:(id)arg3 completion:(id /* block */)arg4;
- (void)postFollowUpWithIdentifier:(id)arg1 userInfo:(id)arg2 completion:(id /* block */)arg3;
- (bool)postFollowUpWithIdentifier:(id)arg1 userInfo:(id)arg2 error:(id*)arg3;

@end
