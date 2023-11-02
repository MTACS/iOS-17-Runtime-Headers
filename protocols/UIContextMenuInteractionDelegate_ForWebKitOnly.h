
@protocol UIContextMenuInteractionDelegate_ForWebKitOnly <UIContextMenuInteractionDelegate>

@optional

- (void)_contextMenuInteraction:(void *)arg1 configurationForMenuAtLocation:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: UIContextMenuInteraction *, struct CGPoint { double x1; double x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIContextMenuConfiguration *, void*
- (NSArray *)_contextMenuInteraction:(UIContextMenuInteraction *)arg1 overrideSuggestedActionsForConfiguration:(UIContextMenuConfiguration *)arg2;

@end
