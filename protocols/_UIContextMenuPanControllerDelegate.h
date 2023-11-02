
@protocol _UIContextMenuPanControllerDelegate <NSObject>

@required

- (void)platterPanControllerDidSwipeDown:(_UIContextMenuPanController *)arg1;
- (void)platterPanControllerDidTearOff:(_UIContextMenuPanController *)arg1;
- (void)platterPanInteractionBegan:(_UIContextMenuPanController *)arg1 allowSwipeToDismiss:(bool*)arg2;
- (void)platterPanInteractionEnded:(_UIContextMenuPanController *)arg1;

@end
