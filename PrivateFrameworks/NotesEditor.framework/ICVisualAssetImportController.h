
@interface ICVisualAssetImportController : NSObject {
    void captureController;
    void doNotAdvanceInsertionPointAfterInsertingAttachment;
    void noteEditorViewController;
    void paperImageInsertionController;
}

- (void).cxx_destruct;
- (void)addImageData:(id)arg1 typeIdentifier:(id)arg2;
- (void)addImageData:(id)arg1 typeIdentifier:(id)arg2 forceAddToPaper:(bool)arg3;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNoteEditorViewController:(id)arg1;
- (void)presentVisualAssetCaptureControllerWithDisableAutorotate:(bool)arg1;
- (void)presentVisualAssetPickerController;

@end
