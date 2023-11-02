
@interface WFSelectMusicActionUIKitUserInterface : WFEmbeddableActionUserInterface <MPMediaPickerControllerDelegate, WFSelectMusicActionUserInterface> {
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
- (void)mediaPicker:(id)arg1 didPickMediaItems:(id)arg2;
- (void)mediaPickerDidCancel:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)showWithSelectMultiple:(bool)arg1 completionHandler:(id /* block */)arg2;

@end
