
@interface WBSPasswordAuditor : NSObject {
    WBSAutoFillQuirksManager * _autoFillQuirksManager;
    WBSSavedAccountStore * _savedAccountStore;
}

@property (nonatomic, readonly) bool accountStoreHasDuplicatedPasswords;
@property (nonatomic, readonly) WBSAutoFillQuirksManager *autoFillQuirksManager;
@property (nonatomic, readonly) WBSSavedAccountStore *savedAccountStore;

- (void).cxx_destruct;
- (bool)_passwordIsReused:(id)arg1 byOtherSavedAccount:(id)arg2;
- (bool)_savedAccountQualifiesForReuseAuditing:(id)arg1;
- (bool)accountStoreHasDuplicatedPasswords;
- (id)autoFillQuirksManager;
- (id)duplicatePasswordsInPasswords:(id)arg1;
- (id)init;
- (id)initWithSavedAccountStore:(id)arg1 autoFillQuirksManager:(id)arg2;
- (bool)savedAccountIsReused:(id)arg1;
- (id)savedAccountStore;
- (id)savedAccountsWithDuplicatedPassword:(id)arg1;

@end
