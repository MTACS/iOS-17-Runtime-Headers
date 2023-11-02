
@interface WFOverlayImageActionUIKitUserInterface : WFEmbeddableActionUserInterface <WFOverlayImageActionUserInterface> {
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
- (void)finishWithFileRepresentations:(id)arg1 error:(id)arg2;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)showWithOverlayImage:(id)arg1 images:(id)arg2 completionHandler:(id /* block */)arg3;

@end
