
@interface WBSSavedAccountChangeRequest : NSObject {
    NSString * _customTitle;
    NSString * _notesEntry;
    NSString * _password;
    WBSSavedAccount * _savedAccount;
    NSMutableArray * _sites;
    WBSTOTPGenerator * _totpGenerator;
    NSString * _user;
}

@property (nonatomic, copy) NSString *customTitle;
@property (nonatomic, readonly) bool hasChanges;
@property (nonatomic, readonly) bool hasCustomTitleChange;
@property (nonatomic, readonly) bool hasNotesEntryChange;
@property (nonatomic, readonly) bool hasPasswordChange;
@property (nonatomic, readonly) bool hasTOTPGeneratorChange;
@property (nonatomic, readonly) bool hasUserChange;
@property (nonatomic, readonly) bool isAddingPasswordToAccountWithPasskey;
@property (nonatomic, copy) NSString *notesEntry;
@property (nonatomic, copy) NSString *password;
@property (nonatomic, retain) WBSSavedAccount *savedAccount;
@property (nonatomic, retain) NSMutableArray *sites;
@property (nonatomic, retain) WBSTOTPGenerator *totpGenerator;
@property (nonatomic, copy) NSString *user;
@property (nonatomic, readonly) NSArray *userVisibleSites;

- (void).cxx_destruct;
- (id)customTitle;
- (bool)hasChanges;
- (bool)hasCustomTitleChange;
- (bool)hasNotesEntryChange;
- (bool)hasPasswordChange;
- (bool)hasSitesChange;
- (bool)hasTOTPGeneratorChange;
- (bool)hasUserChange;
- (bool)isAddingPasswordToAccountWithPasskey;
- (id)notesEntry;
- (id)password;
- (id)savedAccount;
- (void)setCustomTitle:(id)arg1;
- (void)setNotesEntry:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setSavedAccount:(id)arg1;
- (void)setSites:(id)arg1;
- (void)setTotpGenerator:(id)arg1;
- (void)setUser:(id)arg1;
- (id)sites;
- (id)totpGenerator;
- (id)user;
- (id)userVisibleSites;

@end
