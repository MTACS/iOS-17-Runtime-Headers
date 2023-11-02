
@protocol UIVideoEditorControllerDelegate <NSObject>

@optional

- (void)videoEditorController:(UIVideoEditorController *)arg1 didFailWithError:(NSError *)arg2;
- (void)videoEditorController:(UIVideoEditorController *)arg1 didSaveEditedVideoToPath:(NSString *)arg2;
- (void)videoEditorControllerDidCancel:(UIVideoEditorController *)arg1;

@end
