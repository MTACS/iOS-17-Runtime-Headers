
@interface RMAccountDetailsViewController : ACUIViewController {
    ACAccount * _account;
}

@property (retain) ACAccount *account;

- (void).cxx_destruct;
- (void)_processUserInfoDictionary;
- (id)_specifiersForAccount;
- (id)account;
- (id)accountDescription:(id)arg1;
- (id)accountEmail:(id)arg1;
- (void)cancelButtonTapped:(id)arg1;
- (void)doneButtonTapped:(id)arg1;
- (void)setAccount:(id)arg1;
- (id)specifiers;
- (void)viewWillAppear:(bool)arg1;

@end
