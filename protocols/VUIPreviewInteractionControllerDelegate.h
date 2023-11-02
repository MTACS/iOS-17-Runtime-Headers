
@protocol VUIPreviewInteractionControllerDelegate <NSObject>

@required

- (void)interactionController:(VUIPreviewInteractionController *)arg1 didBeginForIndexPath:(NSIndexPath *)arg2;
- (void)interactionController:(VUIPreviewInteractionController *)arg1 didEndForIndexPath:(NSIndexPath *)arg2;
- (bool)interactionController:(VUIPreviewInteractionController *)arg1 shouldInteractionControllerBeginForIndexPath:(NSIndexPath *)arg2;

@end
