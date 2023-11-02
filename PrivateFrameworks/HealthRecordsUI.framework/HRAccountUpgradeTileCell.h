
@interface HRAccountUpgradeTileCell : UITableViewCell {
    void accounts;
    void cancellable;
    void profile;
    void tileView;
    void viewController;
}

@property (nonatomic, readonly) bool hasUpgradableAccounts;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (bool)hasUpgradableAccounts;
- (id)initWithCoder:(id)arg1;
- (id)initWithProfile:(id)arg1 presentingViewController:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)reloadDataSource;

@end
