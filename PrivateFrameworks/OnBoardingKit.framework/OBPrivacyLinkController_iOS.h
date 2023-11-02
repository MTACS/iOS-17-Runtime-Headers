
@interface OBPrivacyLinkController_iOS : OBPrivacyLinkController {
    OBPrivacyLinkButton * _linkButton;
    bool  bundleTitlesMatch;
    bool  bundlesIncludePII;
}

@property (readonly) UIImageView *iconView;
@property (readonly) UITextView *textView;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)iconView;
- (id)initWithBundleIdentifiers:(id)arg1;
- (id)initWithPrivacyBundle:(id)arg1;
- (void)loadView;
- (void)processBundlesForTitleInformation;
- (void)setCustomTintColor:(id)arg1;
- (void)setLinkEnabled:(bool)arg1;
- (void)setUnderlineLinks:(bool)arg1;
- (id)textView;

@end
