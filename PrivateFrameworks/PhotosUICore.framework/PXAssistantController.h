
@interface PXAssistantController : UIViewController <PXAssistantViewControllerDelegate, PXChangeObserver, UIAdaptivePresentationControllerDelegate> {
    bool  _completed;
    <PXAssistantContext> * _context;
    <PXAssistantControllerDelegate> * _delegate;
    UINavigationController * _navigationController;
    PXAssistantStepContext * _stepContext;
    bool  _useTransparentBarAppearance;
    NSMapTable * _viewControllerToStepContext;
}

@property (nonatomic) bool completed;
@property (nonatomic, readonly) <PXAssistantContext> *context;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXAssistantControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelBarButtonItemAction:(id)arg1;
- (void)_cancelBarButtonItemDestructiveAction:(id)arg1;
- (void)_completeAssistantWithError:(id)arg1;
- (void)_completeBarButtonItemAction:(id)arg1;
- (void)_confirmCancellationOfAssistantWithDestruction;
- (id)_nextViewControllerFromViewController:(id)arg1;
- (void)_presentInitialViewControllers;
- (void)_setStepContext:(id)arg1;
- (void)_setUseTransparentBarAppearance:(bool)arg1;
- (void)_stepForwardBarButtonItemAction:(id)arg1;
- (void)_stepForwardInAssistantAnimated:(bool)arg1 currentViewController:(id)arg2;
- (void)_updateBarAppearance;
- (void)_updateNextStepContext:(id)arg1;
- (void)_updateViewController:(id)arg1 forChangesWithDescriptor:(unsigned long long)arg2;
- (void)assistantForAssistantViewController:(id)arg1 failedWithError:(id)arg2;
- (void)assistantViewController:(id)arg1 dismissViewControllerAnimated:(bool)arg2;
- (void)assistantViewController:(id)arg1 presentAlertWithConfiguration:(id)arg2 animated:(bool)arg3;
- (void)assistantViewController:(id)arg1 presentViewController:(id)arg2 animated:(bool)arg3;
- (void)assistantViewController:(id)arg1 pushViewController:(id)arg2 animated:(bool)arg3;
- (void)cancelAssistantForAssistantViewController:(id)arg1;
- (void)cancelAssistantWithDestruction:(bool)arg1;
- (void)completeAssistantForAssistantViewController:(id)arg1;
- (void)completeAssistantWithError:(id)arg1;
- (bool)completed;
- (id)context;
- (id)delegate;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithContext:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initialStepContexts;
- (void)loadView;
- (id)nextStepContextForStepContextIdentifier:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)presentationControllerDidAttemptToDismiss:(id)arg1;
- (void)presentationControllerDidDismiss:(id)arg1;
- (bool)presentationControllerShouldDismiss:(id)arg1;
- (void)setCompleted:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (bool)shouldConfirmCancellationOfAssistantForStepContextWithIdentifier:(id)arg1;
- (void)stepContextWithIdentifier:(id)arg1 confirmCancellationWithAlertProperties:(id /* block */)arg2;
- (void)stepForwardInAssistantForAssistantViewController:(id)arg1;
- (void)stepForwardInAssistantForAssistantViewControllerAsCurrentViewController:(id)arg1;

@end
