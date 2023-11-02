
@protocol SBHWidgetContextMenuControlling <NSObject>

@required

- (NSArray *)applicationShortcutItems;
- (void)didSelectApplicationShortcutItem:(SBSApplicationShortcutItem *)arg1;
- (bool)isShowingContextMenu;
- (void)setShowingContextMenu:(bool)arg1;
- (void)willShowContextMenuAtLocation:(struct CGPoint { double x1; double x2; })arg1;

@end
