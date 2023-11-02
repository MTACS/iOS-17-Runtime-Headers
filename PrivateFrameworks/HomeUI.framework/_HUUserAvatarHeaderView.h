
@interface _HUUserAvatarHeaderView : UITableViewHeaderFooterView {
    ACAccountStore * _accountStore;
    HUContactView * _contactView;
    NSArray * _layoutConstraints;
    <HUMediaAccountDelegate> * _mediaAccountDelegate;
    NAFuture * _mediaAccountFuture;
    HUMultiUserTokenFixTableView * _multiUserTokenFixHeaderView;
    HUSplitAccountHeaderTableView * _splitAccountHeaderView;
}

@property (nonatomic, retain) ACAccountStore *accountStore;
@property (nonatomic, readonly) HUContactView *contactView;
@property (nonatomic, retain) NSArray *layoutConstraints;
@property (nonatomic) <HUMediaAccountDelegate> *mediaAccountDelegate;
@property (nonatomic, retain) NAFuture *mediaAccountFuture;
@property (nonatomic, retain) NSAttributedString *message;
@property (nonatomic, retain) HUMultiUserTokenFixTableView *multiUserTokenFixHeaderView;
@property (nonatomic, retain) HUSplitAccountHeaderTableView *splitAccountHeaderView;

- (void).cxx_destruct;
- (id)_keyDescriptors;
- (id)accountStore;
- (id)contactView;
- (void)dealloc;
- (void)dismissMultiUserTokenFixUI;
- (void)dismissSplitAccountView;
- (id)initWithUser:(id)arg1 home:(id)arg2 delegate:(id)arg3;
- (id)layoutConstraints;
- (id)mediaAccountDelegate;
- (id)mediaAccountFuture;
- (id)message;
- (id)multiUserTokenFixHeaderView;
- (void)presentMultiUserTokenFixUIForMediaAccount:(id)arg1 inHome:(id)arg2;
- (void)setAccountStore:(id)arg1;
- (void)setAccounts:(id)arg1 forHome:(id)arg2;
- (void)setLayoutConstraints:(id)arg1;
- (void)setMediaAccountDelegate:(id)arg1;
- (void)setMediaAccountFuture:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setMultiUserTokenFixHeaderView:(id)arg1;
- (void)setSplitAccountHeaderView:(id)arg1;
- (void)showSplitAccountViewIfNeeded;
- (id)splitAccountHeaderView;

@end
