
@interface PaperKit.ToolPickerController : NSObject <AXSSImageDescriptionViewControllerDelegate, UIPopoverPresentationControllerDelegate, _UIStickerPickerViewControllerDelegate> {
    void $__lazy_storage_$_shapeButtonListViewController;
    void $__lazy_storage_$_textToolListViewController;
    void delegate;
    void imageDescriptionVC;
    void stickerPickerVC;
}

- (void).cxx_destruct;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (void)dealloc;
- (void)imageDescriptionViewControllerDidCancel:(id)arg1;
- (void)imageDescriptionViewControllerDidDismiss:(id)arg1;
- (void)imageDescriptionViewControllerDidSave:(id)arg1;
- (id)init;
- (void)insertStickerFromItemProvider:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)stickerPickerViewControllerDidDismiss;
- (void)stickerPickerViewControllerDidLoad;
- (void)toolPickerDidHideNotification:(id)arg1;
- (void)toolPickerWillShowNotification:(id)arg1;

@end
