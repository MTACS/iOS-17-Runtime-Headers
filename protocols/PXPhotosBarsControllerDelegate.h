
@protocol PXPhotosBarsControllerDelegate <PXBarsControllerDelegate>

@required

- (void)photosBarsController:(PXPhotosBarsController *)arg1 didRequestDismissWithSender:(id)arg2;
- (void)photosBarsControllerDidUpdateBars:(PXPhotosBarsController *)arg1;
- (void)photosBarsControllerDidUpdateNavigationItemAppearance:(PXPhotosBarsController *)arg1;
- (<PXPresentationEnvironment> *)presentationEnvironmentForPhotosBarsController:(PXPhotosBarsController *)arg1 withSourceItem:(id <UIPopoverPresentationControllerSourceItem>)arg2;

@end
