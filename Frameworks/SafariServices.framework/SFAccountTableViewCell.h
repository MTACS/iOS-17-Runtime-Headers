
@interface SFAccountTableViewCell : UITableViewCell <SFAccountTableViewCell> {
    SFAccountIconSharingBadgeImageCoordinator * _badgeImageCoordinator;
    <SFAccountTableViewCellDelegate> * _delegate;
    UIView * _monogramBackgroundView;
    UILabel * _monogramLabel;
    WBSSavedAccount * _savedAccount;
    NSString * _searchPattern;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SFAccountTableViewCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isIconMonogram;
@property (nonatomic, readonly) bool safari_hasOneTimeCodeGenerator;
@property (nonatomic, readonly) bool safari_hasWebsite;
@property (nonatomic, readonly) WBSSavedAccount *savedAccount;
@property (nonatomic, readonly) NSString *searchPattern;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateAccessibilityIdentifiers;
- (void)_updateSharedAccountBadgeImageViewIfNecessary;
- (id)delegate;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isIconMonogram;
- (void)layoutSubviews;
- (void)safari_copyOneTimeCode;
- (void)safari_copyPassword;
- (void)safari_copyUserName;
- (void)safari_copyWebsite;
- (bool)safari_hasOneTimeCodeGenerator;
- (bool)safari_hasWebsite;
- (id)savedAccount;
- (id)searchPattern;
- (void)setDelegate:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setSavedAccount:(id)arg1 searchPattern:(id)arg2 emphasizeUserName:(bool)arg3;
- (void)setSavedAccount:(id)arg1 searchPattern:(id)arg2 emphasizeUserName:(bool)arg3 savedAccountHasSameUsernameAndHighLevelDomainPairAsOtherSharedSavedAccount:(bool)arg4;
- (void)setSavedAccount:(id)arg1 withWarnings:(id)arg2 savedAccountIsOnlySavedAccountForHighLevelDomain:(bool)arg3;
- (void)showPlaceholderImageForDomain:(id)arg1 backgroundColor:(id)arg2;

@end
