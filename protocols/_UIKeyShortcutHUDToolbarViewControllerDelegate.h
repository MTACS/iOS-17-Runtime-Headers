
@protocol _UIKeyShortcutHUDToolbarViewControllerDelegate

@required

- (void)toolbarViewController:(_UIKeyShortcutHUDToolbarViewController *)arg1 didSelectCategory:(_UIKeyShortcutHUDMenu *)arg2 categoryIndex:(long long)arg3 animated:(bool)arg4;
- (void)toolbarViewController:(_UIKeyShortcutHUDToolbarViewController *)arg1 didUpdateSearchText:(NSString *)arg2;
- (void)toolbarViewControllerDidPressCancelSearchButton:(_UIKeyShortcutHUDToolbarViewController *)arg1;
- (void)toolbarViewControllerDidPressSearchButton:(_UIKeyShortcutHUDToolbarViewController *)arg1;

@end
