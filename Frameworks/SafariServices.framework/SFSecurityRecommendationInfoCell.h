
@interface SFSecurityRecommendationInfoCell : UITableViewCell <SFAccountTableViewCell> {
    SFAccountIconSharingBadgeImageCoordinator * _badgeImageCoordinator;
    UIImageView * _completedUpgradeCheckmarkView;
    NSArray * _completedUpgradeCheckmarkViewConstraints;
    unsigned long long  _configuration;
    <SFSecurityRecommendationInfoCellDelegate> * _delegate;
    UIButton * _hideButton;
    NSArray * _hideButtonConstraints;
    UIImageView * _iconView;
    UIView * _monogramBackgroundView;
    UILabel * _monogramLabel;
    WBSSavedAccount * _savedAccount;
    NSLayoutConstraint * _standardTitleTrailingConstraint;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SFSecurityRecommendationInfoCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *icon;
@property (nonatomic, readonly) WBSSavedAccount *savedAccount;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, retain) UILabel *subtitleLabel;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (void)_createHideButton;
- (void)_hideButtonPressed:(id)arg1;
- (struct CGSize { double x1; double x2; })_hideButtonViewSize;
- (double)_iconWidth;
- (void)_updateSharedAccountBadgeImageViewIfNecessary;
- (id)delegate;
- (id)icon;
- (id)initWithConfiguration:(unsigned long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (id)savedAccount;
- (void)setDelegate:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setSavedAccount:(id)arg1;
- (void)setShowsHideButton:(bool)arg1;
- (void)setShowsUpgradeCompletionCheckmark:(bool)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)showCheckmarkForDetailView;
- (void)showPlaceholderImageForDomain:(id)arg1 backgroundColor:(id)arg2;
- (id)subtitle;
- (id)subtitleLabel;
- (id)title;
- (id)titleLabel;

@end
