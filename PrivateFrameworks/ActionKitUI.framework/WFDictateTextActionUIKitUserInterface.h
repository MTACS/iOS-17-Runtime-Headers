
@interface WFDictateTextActionUIKitUserInterface : WFEmbeddableActionUserInterface <WFDictateTextActionUserInterface, WFDictateTextActionViewDelegate> {
    WFDictateTextActionView * _actionView;
    id /* block */  _completionHandler;
}

@property (nonatomic, retain) WFDictateTextActionView *actionView;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *userInterfaceType;

- (void).cxx_destruct;
- (void)actionDidBeginListening;
- (void)actionDidReceiveTranscription:(id)arg1;
- (id)actionView;
- (void)cancelPresentationWithCompletionHandler:(id /* block */)arg1;
- (id /* block */)completionHandler;
- (void)dictateTextActionViewDidTapStopButton:(id)arg1;
- (void)dismissWithCompletionHandler:(id /* block */)arg1;
- (void)finishWithError:(id)arg1;
- (bool)prefersModalPresentation;
- (void)setActionView:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)showWithCompletionHandler:(id /* block */)arg1;

@end
