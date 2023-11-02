
@protocol SBFloatingDockSuggestionsViewProviding <SBIconViewQuerying, SBIconLocationPresenting>

@required

- (void)dockFolderDidEndTransitioning;
- (void)dockFolderWillBeginTransitioning;
- (void)dockViewDidBecomeVisible;
- (void)dockViewDidResignVisible;
- (void)dockViewWillBecomeVisible;
- (void)dockViewWillResignVisible;
- (SBFloatingDockViewController *)floatingDockViewController;
- (SBDockIconListView *)listView;
- (void)setFloatingDockViewController:(SBFloatingDockViewController *)arg1;

@end
