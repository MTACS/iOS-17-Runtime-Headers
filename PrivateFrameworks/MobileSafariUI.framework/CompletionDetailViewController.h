
@interface CompletionDetailViewController : UINavigationController <UIAdaptivePresentationControllerDelegate> {
    <CompletionDetailViewControllerDelegate> * _completionDetailViewControllerDelegate;
    UIViewController * _currentStoreSheet;
}

@property (nonatomic) <CompletionDetailViewControllerDelegate> *completionDetailViewControllerDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_didDismissCompletionDetailSheet;
- (void)_dismissCompletionDetailSheet;
- (void)_willDismissCompletionDetailSheet;
- (id)completionDetailViewControllerDelegate;
- (id)initWithRootViewController:(id)arg1;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)presentationControllerWillDismiss:(id)arg1;
- (void)setCompletionDetailViewControllerDelegate:(id)arg1;

@end
