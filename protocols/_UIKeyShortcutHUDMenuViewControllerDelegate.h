
@protocol _UIKeyShortcutHUDMenuViewControllerDelegate <NSObject>

@required

- (void)menuViewController:(_UIKeyShortcutHUDMenuViewController *)arg1 didScrollToCategory:(_UIKeyShortcutHUDMenu *)arg2 withCategoryIndex:(long long)arg3;
- (void)menuViewController:(_UIKeyShortcutHUDMenuViewController *)arg1 didSelectShortcut:(_UIKeyShortcutHUDShortcut *)arg2;
- (bool)menuViewController:(_UIKeyShortcutHUDMenuViewController *)arg1 shouldPersistSelectionForShortcut:(_UIKeyShortcutHUDShortcut *)arg2;

@end
