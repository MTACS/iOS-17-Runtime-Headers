
@interface _ASPasswordManagerDeleteAlertConfiguration : NSObject {
    NSString * _buttonTitle;
    bool  _isPermanentlyRemovingFromRecentlyDeleted;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic, readonly, copy) NSString *buttonTitle;
@property (nonatomic, readonly) bool isPermanentlyRemovingFromRecentlyDeleted;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (nonatomic, readonly, copy) NSString *title;

+ (id)_buttonTitleStringForAlertToDeleteNumberOfPasswords:(unsigned long long)arg1 numberOfPasskeys:(unsigned long long)arg2 isDeletingSharedAccounts:(bool)arg3;
+ (id)_configurationForAlertToDeletePasskeyFromSavedAccount:(id)arg1 isUndoable:(bool)arg2;
+ (id)_configurationForAlertToDeletePasswordAndPasskeyFromSavedAccount:(id)arg1;
+ (id)_configurationForAlertToDeletePasswordFromSavedAccount:(id)arg1 isUndoable:(bool)arg2;
+ (id)_configurationForAlertToDeleteVerificationCodeFromSavedAccount:(id)arg1 isUndoable:(bool)arg2;
+ (id)_credentialDeletionStringForAlertToDeleteNumberOfPasswords:(unsigned long long)arg1 numberOfPasskeys:(unsigned long long)arg2 isDeletingSharedAccounts:(bool)arg3 isPermanentlyDeleting:(bool)arg4;
+ (void)_getInformationForSavedAccountsToDelete:(id)arg1 numberOfPasswords:(unsigned long long*)arg2 numberOfPasskeys:(unsigned long long*)arg3 isDeletingVerificationCodes:(bool*)arg4 hasSharedAccounts:(bool*)arg5 areAllAccountsShared:(bool*)arg6;
+ (bool)_isKeychainSyncEnabled;
+ (bool)_isPermanentlyDeletingSavedAccount:(id)arg1;
+ (id)_subtitleForDeletingNumberOfPasswordsWithVerificationCodes:(unsigned long long)arg1;
+ (id)_subtitleStringForAlertToDeleteNumberOfPasswords:(unsigned long long)arg1 numberOfPasskeys:(unsigned long long)arg2 isDeletingVerificationCodes:(bool)arg3 isDeletingSharedAccounts:(bool)arg4 isPermanentlyDeleting:(bool)arg5;
+ (id)_subtitleStringForAlertToDeletePasskeyFromSavedAccount:(id)arg1 isUndoable:(bool)arg2;
+ (id)_subtitleStringForAlertToDeletePasswordFromSavedAccount:(id)arg1 isUndoable:(bool)arg2;
+ (id)_subtitleStringForAlertToDeleteVerificationCodeFromSavedAccount:(id)arg1 isUndoable:(bool)arg2;
+ (id)_subtitleStringForAlertToPermanentlyDeletePasskeyFromSavedAccount:(id)arg1;
+ (id)_subtitleStringForAlertToPermanentlyDeletePasswordFromSavedAccount:(id)arg1;
+ (id)_subtitleStringForAlertToSoftDeletePasskeyFromSavedAccount:(id)arg1;
+ (id)_subtitleStringForAlertToSoftDeletePasswordFromSavedAccount:(id)arg1;
+ (id)_titleStringForAlertToDeleteNumberOfPasswords:(unsigned long long)arg1 numberOfPasskeys:(unsigned long long)arg2 isDeletingSharedAccounts:(bool)arg3 isPermanentlyDeleting:(bool)arg4;
+ (id)_titleStringForAlertToDeletePasskeyFromSavedAccount:(id)arg1;
+ (id)_titleStringForAlertToDeletePasswordFromSavedAccount:(id)arg1;
+ (id)_titleStringForAlertToDeleteVerificationCodeFromSavedAccount:(id)arg1;
+ (id)configurationForDeleting:(unsigned long long)arg1 fromSavedAccount:(id)arg2;
+ (id)configurationForDeleting:(unsigned long long)arg1 fromSavedAccount:(id)arg2 isUndoable:(bool)arg3;
+ (id)configurationForDeletingSavedAccounts:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithTitle:(id)arg1 subtitle:(id)arg2 buttonTitle:(id)arg3 isPermanentlyRemovingFromRecentlyDeleted:(bool)arg4;
- (id)buttonTitle;
- (bool)isPermanentlyRemovingFromRecentlyDeleted;
- (id)subtitle;
- (id)title;

@end
