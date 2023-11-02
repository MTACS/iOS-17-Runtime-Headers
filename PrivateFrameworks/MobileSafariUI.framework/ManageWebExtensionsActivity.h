
@interface ManageWebExtensionsActivity : UIActivity <WBSExtensionsControllerObserver> {
    UIViewController * _activityViewController;
    <_SFBrowserDocument> * _browserDocument;
    NSString * _numberOfNewlyInstalledExtensions;
    UIActivityViewController * _parentActivityViewController;
}

@property (nonatomic, retain) <_SFBrowserDocument> *browserDocument;
@property (nonatomic) UIActivityViewController *parentActivityViewController;

- (void).cxx_destruct;
- (id)_activityBadgeColor;
- (id)_activityBadgeText;
- (id)_activityBadgeTextColor;
- (void)_formatBadgeText;
- (void)_reloadBadgeCount;
- (id)_systemImageName;
- (id)activityTitle;
- (id)activityType;
- (id)activityViewController;
- (id)browserDocument;
- (bool)canPerformWithActivityItems:(id)arg1;
- (void)dealloc;
- (void)extensionsControllerExtensionListDidChange:(id)arg1;
- (id)init;
- (id)parentActivityViewController;
- (void)setBrowserDocument:(id)arg1;
- (void)setParentActivityViewController:(id)arg1;

@end
