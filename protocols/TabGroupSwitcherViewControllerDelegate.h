
@protocol TabGroupSwitcherViewControllerDelegate <NSObject>

@optional

- (void)closeAllTabsForTabGroupSwitcher:(TabGroupSwitcherViewController *)arg1;
- (void)dismissTabGroupSwitcher:(TabGroupSwitcherViewController *)arg1;
- (void)openNewTabForTabGroupSwitcher:(TabGroupSwitcherViewController *)arg1;
- (void)presentTabGroupSheetForTabGroupSwitcher:(TabGroupSwitcherViewController *)arg1;
- (bool)tabGroupSwitcherCanShowProfileInToolbar:(TabGroupSwitcherViewController *)arg1;

@end
