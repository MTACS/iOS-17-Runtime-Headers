
@interface UIKeyboardHiddenViewController : UIViewController <UIInputViewControllerNeedSceneSize, UIViewControllerTransitioningDelegate> {
    _SFPasswordViewController * _autofillVC;
    bool  _presentedAutofill;
    bool  _processingSceneDidChange;
}

@property (nonatomic, retain) _SFPasswordViewController *autofillVC;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool presentedAutofill;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_deviceWillLock:(id)arg1;
- (bool)_formSheetObeysContentContainerSize;
- (void)_localAuthenticationUIDismissed;
- (void)_localAuthenticationUIPresented;
- (void)_sceneDidChange;
- (id)autofillVC;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)passwordViewControllerDidFinish:(id)arg1;
- (void)presentAutofillVCWithAnimation:(bool)arg1;
- (void)presentSelfWithAnimation:(bool)arg1;
- (void)presentViewController:(bool)arg1;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (bool)presentedAutofill;
- (void)setAutofillVC:(id)arg1;
- (void)setPresentedAutofill:(bool)arg1;
- (bool)shouldPresentAsPopover;
- (struct CGSize { double x1; double x2; })sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { double x1; double x2; })arg2;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
