
@interface WFShazamMediaActionUIKitUserInterface : WFEmbeddableActionUserInterface <WFShazamMediaActionUserInterface> {
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
- (void)finishWithError:(id)arg1;
- (bool)prefersModalPresentation;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)showWithCompletionHandler:(id /* block */)arg1;

@end
