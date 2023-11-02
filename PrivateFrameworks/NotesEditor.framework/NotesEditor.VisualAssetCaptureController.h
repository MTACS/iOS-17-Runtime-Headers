
@interface NotesEditor.VisualAssetCaptureController : NSObject <UIImagePickerControllerDelegate, UINavigationControllerDelegate> {
    void delegate;
    void note;
}

- (void).cxx_destruct;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (id)init;

@end
