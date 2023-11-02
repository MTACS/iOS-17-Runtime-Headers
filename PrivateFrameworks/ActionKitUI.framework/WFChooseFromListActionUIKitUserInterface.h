
@interface WFChooseFromListActionUIKitUserInterface : WFEmbeddableActionUserInterface <UIPopoverPresentationControllerDelegate, WFChooseFromListActionUserInterface, WFChooseImageViewControllerDelegate> {
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
- (void)chooseImageController:(id)arg1 didSelectItems:(id)arg2;
- (void)chooseImageControllerDidCancel:(id)arg1;
- (id /* block */)completionHandler;
- (void)finishWithContent:(id)arg1 error:(id)arg2;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)showImagesWithPrompt:(id)arg1 canSelectAll:(bool)arg2 canSelectMultiple:(bool)arg3 inputItems:(id)arg4 completionHandler:(id /* block */)arg5;

@end
