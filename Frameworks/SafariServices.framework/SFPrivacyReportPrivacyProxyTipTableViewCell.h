
@interface SFPrivacyReportPrivacyProxyTipTableViewCell : UITableViewCell {
    <SFPrivacyReportPrivacyProxyTipTableViewCellDelegate> * _delegate;
    NSLayoutConstraint * _insetLeading;
    NSLayoutConstraint * _insetTrailing;
    bool  _usesInsetStyle;
}

@property (nonatomic) <SFPrivacyReportPrivacyProxyTipTableViewCellDelegate> *delegate;
@property (nonatomic) bool usesInsetStyle;

- (void).cxx_destruct;
- (void)_createContentViews;
- (void)_dismiss:(id)arg1;
- (void)_notifyDelegateOfStateChange;
- (void)_openICloudPrivateRelaySettingsToLearnMore:(id)arg1;
- (void)_setPrivacyProxyStateToTrackers:(id)arg1;
- (void)_setPrivacyProxyStateToTrackersAndWebsites:(id)arg1;
- (void)_turnOnCrossSiteTrackingProtectionIfNeeded;
- (id)delegate;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)setDelegate:(id)arg1;
- (void)setUsesInsetStyle:(bool)arg1;
- (bool)usesInsetStyle;

@end
