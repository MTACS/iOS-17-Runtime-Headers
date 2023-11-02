
@interface CNPRUISPosterEditingViewController : UIViewController <PRUISPosterEditingViewControllerDelegate> {
    <CNPRUISPosterEditingViewControllerDelegate> * _delegate;
    PRUISPosterEditingViewController * _wrappedPosterEditingViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNPRUISPosterEditingViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool showsContentWhenReady;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (void)editingViewController:(id)arg1 didFinishWithConfiguration:(id)arg2;
- (void)editingViewControllerDidFinishShowingContent:(id)arg1;
- (id)initWithExistingConfiguration:(id)arg1 context:(id)arg2;
- (id)initWithExtensionIdentifier:(id)arg1 configuration:(id)arg2 context:(id)arg3;
- (bool)prefersStatusBarHidden;
- (void)presentationDidFinishAnimated:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setShowsContentWhenReady:(bool)arg1;
- (bool)showsContentWhenReady;

@end
