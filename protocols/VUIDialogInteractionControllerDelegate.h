
@protocol VUIDialogInteractionControllerDelegate <NSObject>

@required

- (void)dialogInteractionController:(VUIDialogInteractionController *)arg1 interactionDidBeginForIndexPath:(NSIndexPath *)arg2;
- (void)dialogInteractionController:(VUIDialogInteractionController *)arg1 interactionDidEndForIndexPath:(NSIndexPath *)arg2;
- (bool)dialogInteractionController:(VUIDialogInteractionController *)arg1 shouldBeginInteractionForIndexPath:(NSIndexPath *)arg2;

@end
