
@interface WFTrimVideoActionUIKitUserInterface : WFEmbeddableActionUserInterface <UINavigationControllerDelegate, UIPopoverPresentationControllerDelegate, UIVideoEditorControllerDelegate, WFTrimVideoActionUserInterface> {
    id /* block */  _completionHandler;
    WFFileRepresentation * _copiedFile;
    bool  _hasSaved;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, retain) WFFileRepresentation *copiedFile;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasSaved;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *userInterfaceType;

- (void).cxx_destruct;
- (void)cancelPresentationWithCompletionHandler:(id /* block */)arg1;
- (id /* block */)completionHandler;
- (id)copiedFile;
- (id)copyFileToDealWithBadUIVideoEditorControllerSandboxHandling:(id)arg1;
- (void)dismissEditor:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (bool)hasSaved;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setCopiedFile:(id)arg1;
- (void)setHasSaved:(bool)arg1;
- (void)showWithVideo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)videoEditorController:(id)arg1 didFailWithError:(id)arg2;
- (void)videoEditorController:(id)arg1 didSaveEditedVideoToPath:(id)arg2;
- (void)videoEditorControllerDidCancel:(id)arg1;

@end
