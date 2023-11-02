
@protocol MPMediaPickerRemoteViewLoader <NSObject>

@required

- (MPMediaPickerController *)mediaPickerController;
- (UIViewController *)remoteViewController;
- (void)requestRemoteViewController;
- (void)setMediaPickerController:(MPMediaPickerController *)arg1;
- (void)synchronizeSettings;

@end
