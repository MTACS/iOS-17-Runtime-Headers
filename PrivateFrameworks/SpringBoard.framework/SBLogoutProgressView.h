
@interface SBLogoutProgressView : UIView {
    UIImageView * _blameAppIconView;
    UILabel * _blameAppNameLabel;
    UIView * _blameContainerView;
    UILabel * _goodbyeLabel;
    NSLayoutConstraint * _goodbyeLabelConstraint;
    _UILegibilitySettings * _legibilitySettings;
    NSArray * _pendingApplications;
    UIView * _savingDocumentsActivityAndLabelContainerView;
    UIActivityIndicatorView * _savingDocumentsActivityIndicator;
    UILabel * _savingDocumentsLabel;
    UILabel * _savingDocumentsMoreLabel;
    NSLayoutConstraint * _savingDocumentsMoreLabelConstraint;
    SBWindowSceneStatusBarSettingsAssertion * _statusBarSettingsAssertion;
    NSLayoutConstraint * _userAvatarVerticalConstraint;
    UIImageView * _userAvatarView;
    CNContact * _userContact;
}

@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, copy) NSArray *pendingApplications;
@property (getter=isProgressVisible, nonatomic) bool progressVisible;
@property (nonatomic, retain) CNContact *userContact;

- (void).cxx_destruct;
- (double)_goodbyeLabelBaselineOffset;
- (double)_moreDocumentsLabelBaselineOffset;
- (void)_updateBlame;
- (void)_updateGoodbye;
- (void)_updateLegibility;
- (void)_updateUserAvatar;
- (void)_updateUserAvatarLegibility;
- (void)_updateViewData;
- (double)_userAvatarVerticalOffsetFromCenter;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isProgressVisible;
- (id)legibilitySettings;
- (id)pendingApplications;
- (void)setLegibilitySettings:(id)arg1;
- (void)setPendingApplications:(id)arg1;
- (void)setProgressVisible:(bool)arg1;
- (void)setUserContact:(id)arg1;
- (void)updateConstraints;
- (id)userContact;

@end
