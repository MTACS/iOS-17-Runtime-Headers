
@protocol SBIconViewShortcutsDelegate <NSObject>

@optional

- (NSURL *)applicationBundleURLForShortcutsWithIconView:(SBIconView *)arg1;
- (UIView *)containerViewForPresentingContextMenuForIconView:(SBIconView *)arg1;
- (NSArray *)iconView:(SBIconView *)arg1 applicationShortcutItemsWithProposedItems:(NSArray *)arg2;
- (bool)iconView:(SBIconView *)arg1 shouldActivateApplicationShortcutItem:(SBSApplicationShortcutItem *)arg2 atIndex:(unsigned long long)arg3;
- (void)iconView:(SBIconView *)arg1 willUseContextMenuStyle:(_UIContextMenuStyle *)arg2;
- (void)iconViewShortcutsPresentationDidCancel:(SBIconView *)arg1;
- (void)iconViewShortcutsPresentationDidFinish:(SBIconView *)arg1;
- (void)iconViewShortcutsPresentationWillBegin:(SBIconView *)arg1;
- (void)iconViewShortcutsPresentationWillFinish:(SBIconView *)arg1;
- (bool)iconViewShouldBeginShortcutsPresentation:(SBIconView *)arg1;
- (bool)iconViewShouldIncludeUninstallShortcutItem:(SBIconView *)arg1;
- (SBHRecentsDocumentExtensionProvider *)recentDocumentExtensionProviderForIconView:(SBIconView *)arg1;
- (unsigned long long)supportedMultitaskingShortcutActionsForIconView:(SBIconView *)arg1;

@end
