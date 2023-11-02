
@interface WFTakeVideoActionUIKitUserInterface : WFEmbeddableActionUserInterface <UIImagePickerControllerDelegate, UINavigationControllerDelegate, WFTakeVideoActionUserInterface> {
    id /* block */  _completionHandler;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *userInterfaceType;

+ (long long)cameraDeviceFromString:(id)arg1;
+ (long long)qualityFromString:(id)arg1;

- (void).cxx_destruct;
- (void)cancelPresentationWithCompletionHandler:(id /* block */)arg1;
- (id /* block */)completionHandler;
- (void)finishWithOutput:(id)arg1 error:(id)arg2;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)showWithQuality:(id)arg1 device:(id)arg2 startImmediately:(bool)arg3 completionHandler:(id /* block */)arg4;

@end
