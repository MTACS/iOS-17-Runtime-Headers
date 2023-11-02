
@interface ReminderKitInternal.MockACAccount : ACAccount {
    void rem_aa_altDSIDMock;
    void rem_aa_primaryEmailMock;
    void rem_enabledDataClasses;
    void rem_mockChildren;
}

@property (nonatomic, readonly) NSString *aa_altDSID;
@property (nonatomic, readonly) NSString *aa_primaryEmail;
@property (nonatomic, readonly) NSArray *childAccounts;
@property (nonatomic, retain) NSMutableSet *enabledDataclasses;

- (void).cxx_destruct;
- (id)aa_altDSID;
- (id)aa_primaryEmail;
- (id)childAccounts;
- (id)childAccountsWithAccountTypeIdentifier:(id)arg1;
- (id)enabledDataclasses;
- (id)initWithAccountType:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithManagedAccount:(id)arg1;
- (bool)isEnabledForDataclass:(id)arg1;
- (void)setEnabled:(bool)arg1 forDataclass:(id)arg2;
- (void)setEnabledDataclasses:(id)arg1;

@end
