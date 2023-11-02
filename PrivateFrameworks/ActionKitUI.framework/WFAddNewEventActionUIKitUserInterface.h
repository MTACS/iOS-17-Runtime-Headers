
@interface WFAddNewEventActionUIKitUserInterface : WFEmbeddableActionUserInterface <EKEventEditViewDelegate, WFAddNewEventActionUserInterface> {
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
- (void)eventEditViewController:(id)arg1 didCompleteWithAction:(long long)arg2;
- (void)finishWithEventIdentifier:(id)arg1 error:(id)arg2;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)showWithEventParameters:(id)arg1 completionHandler:(id /* block */)arg2;

@end
