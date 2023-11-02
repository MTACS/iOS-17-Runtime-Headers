
@interface AAUIImagePickerAlertController : UIViewController <UIAdaptivePresentationControllerDelegate, UIDocumentPickerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate> {
    id /* block */  _selectionHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ selectionHandler;
@property (readonly) Class superclass;

+ (id)alertControllerWithSelectionHandler:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)_callSelectionHandlerWithImage:(id)arg1 cropRect:(id)arg2;
- (void)_dismissViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)_presentDocumentPickerAnimated:(bool)arg1;
- (void)_presentImagePickerAnimated:(bool)arg1;
- (void)_presentImagePickerWithSourceType:(long long)arg1 animated:(bool)arg2;
- (void)_presentImageSourcePickerAnimated:(bool)arg1;
- (id)_propertiesForImagePickerController:(id)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2;
- (void)documentPickerWasCancelled:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (long long)modalPresentationStyle;
- (void)presentationControllerDidDismiss:(id)arg1;
- (id /* block */)selectionHandler;
- (void)setSelectionHandler:(id /* block */)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;

@end
