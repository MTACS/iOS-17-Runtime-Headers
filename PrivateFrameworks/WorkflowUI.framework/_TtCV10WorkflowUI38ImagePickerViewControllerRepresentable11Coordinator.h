
@interface _TtCV10WorkflowUI38ImagePickerViewControllerRepresentable11Coordinator : NSObject <UIDocumentPickerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate> {
    void _imageData;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  dismiss;
}

- (void).cxx_destruct;
- (void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (id)init;

@end
