
@interface _SFWebExtensionActivity : UIActivity {
    SFWebExtensionPageMenuController * _pageMenuController;
    UIActivityViewController * _parentViewController;
    <WBSWebExtensionTab> * _tab;
    WBSWebExtensionData * _webExtension;
}

@property (nonatomic) UIActivityViewController *parentViewController;

- (void).cxx_destruct;
- (id)_activityBadgeColor;
- (id)_activityBadgeText;
- (id)_activityBadgeTextColor;
- (id)_activityImage;
- (id)_activityStatusImage;
- (id)_activityStatusTintColor;
- (bool)_isDisabled;
- (bool)_isEnabled;
- (bool)_managesOwnPresentation;
- (void)_reloadActivity;
- (void)_reloadActivitySoon;
- (bool)_wantsOriginalImageColor;
- (id)activityTitle;
- (id)activityType;
- (bool)canPerformWithActivityItems:(id)arg1;
- (id)initWithPageMenuController:(id)arg1 webExtension:(id)arg2 tab:(id)arg3;
- (id)parentViewController;
- (void)performActivity;
- (void)setParentViewController:(id)arg1;

@end
