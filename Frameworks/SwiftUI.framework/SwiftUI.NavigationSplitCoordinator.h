
@interface SwiftUI.NavigationSplitCoordinator : _TtGC7SwiftUI16SplitCoordinatorVS_7AnyView_ <UISplitViewControllerDelegate, UISplitViewControllerDelegatePrivate> {
    void columnVisibility;
    void compactCoordinator;
    void content;
    void detail;
    void expandedStackCoordinators;
    void lastStateSeed;
    void navigationAuthority;
    void parameters;
    void previousBridgedState;
    void sidebar;
    void splitViewController;
    void wasCollapsed;
}

- (void).cxx_destruct;
- (id)init;
- (long long)splitViewController:(id)arg1 displayModeForExpandingToProposedDisplayMode:(long long)arg2;
- (long long)splitViewController:(id)arg1 topColumnForCollapsingToProposedTopColumn:(long long)arg2;

@end
