
@interface HistoryLibraryItemController : LibraryItemController <BookmarksPanelViewControllerDelegate> {
    SFHistoryViewController * _historyViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_showsProfile;
- (id)accessibilityIdentifier;
- (bool)panelViewControllerShouldTranslucentAppearance:(id)arg1;
- (bool)panelViewControllerShouldUseSearchControllerInNavigationItem:(id)arg1;
- (bool)selectionFollowsFocus;
- (void)updateListContentConfiguration:(id)arg1;
- (id)viewController;

@end
