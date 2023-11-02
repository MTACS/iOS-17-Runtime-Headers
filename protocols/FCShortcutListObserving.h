
@protocol FCShortcutListObserving <NSObject>

@required

- (void)shortcutList:(FCShortcutList *)arg1 didAddShortcuts:(NSArray *)arg2 changedShortcuts:(NSArray *)arg3 removedShortcuts:(NSArray *)arg4;

@end
