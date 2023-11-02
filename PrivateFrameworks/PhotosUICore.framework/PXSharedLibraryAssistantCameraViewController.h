
@interface PXSharedLibraryAssistantCameraViewController : OBWelcomeController <PXAssistantViewController> {
    id /* block */  _completionHandler;
    UITextView * _textView;
    <PXAssistantViewControllerDelegate> * assistantViewControllerDelegate;
}

@property (nonatomic) <PXAssistantViewControllerDelegate> *assistantViewControllerDelegate;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_completeWithAutoSharedEnabled:(bool)arg1;
- (void)_updateTextView;
- (id)assistantViewControllerDelegate;
- (id /* block */)completionHandler;
- (id)init;
- (void)primaryButtonTapped:(id)arg1;
- (void)secondaryButtonTapped:(id)arg1;
- (void)setAssistantViewControllerDelegate:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;

@end
