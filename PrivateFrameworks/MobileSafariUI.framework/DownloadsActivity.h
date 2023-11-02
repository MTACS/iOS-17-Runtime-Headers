
@interface DownloadsActivity : TabDocumentActivity {
    UINavigationController * _navigationController;
    ActionPanel * _parentViewController;
}

@property ActionPanel *parentViewController;

- (void).cxx_destruct;
- (id)_activityBadgeColor;
- (id)_activityBadgeText;
- (id)_activityBadgeTextColor;
- (void)_downloadsDidChange;
- (id)_embeddedActivityViewController;
- (id)_navigationController;
- (id)_systemImageName;
- (long long)actionType;
- (id)activityTitle;
- (id)activityType;
- (bool)canPerformOnNewTabPage;
- (bool)canPerformWithTabDocument:(id)arg1;
- (id)init;
- (id)parentViewController;
- (void)performActivityWithTabDocument:(id)arg1;
- (void)setParentViewController:(id)arg1;

@end
