
@protocol _UIKeyShortcutHUDViewControllerDelegate

@required

- (void)keyShortcutHUDViewController:(_UIKeyShortcutHUDViewController *)arg1 didSelectShortcut:(_UIKeyShortcutHUDShortcut *)arg2;
- (void)keyShortcutHUDViewControllerDidBeginTypeAheadSearch:(_UIKeyShortcutHUDViewController *)arg1;
- (void)keyShortcutHUDViewControllerDidRequestDismissal:(_UIKeyShortcutHUDViewController *)arg1;

@end
