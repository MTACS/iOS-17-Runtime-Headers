
@interface WFSelectPhotoActionUIKitUserInterface : WFEmbeddableActionUserInterface <PHPickerViewControllerDelegate, UIAdaptivePresentationControllerDelegate, WFSelectPhotoActionUserInterface> {
    id /* block */  _completionHandler;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *userInterfaceType;

- (void).cxx_destruct;
- (void)cancelPresentationWithCompletionHandler:(id /* block */)arg1;
- (id /* block */)completionHandler;
- (void)finishWithOutput:(id)arg1 error:(id)arg2;
- (void)picker:(id)arg1 didFinishPicking:(id)arg2;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)showWithPhotoPickerTypes:(id)arg1 selectMultiple:(bool)arg2 completionHandler:(id /* block */)arg3;

@end
