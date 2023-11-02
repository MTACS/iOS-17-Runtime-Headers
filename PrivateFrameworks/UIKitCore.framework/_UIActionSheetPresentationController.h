
@interface _UIActionSheetPresentationController : UIPopoverPresentationController <_UIActionSheetCompactPresentationControllerDelegate> {
    bool  __shouldUseCompactPresentationControllerWhenPresentedInSheet;
    <UIActionSheetPresentationControllerDelegate> * _actionSheetDelegate;
    bool  _avoidsKeyboardDisabled;
    _UIActionSheetCompactPresentationController * _compactPresentationController;
    NSString * _dismissActionTitle;
    bool  _dismissActionUsesShorterHeightWhenCompactVertically;
}

@property (setter=_setShouldUseCompactPresentationControllerWhenPresentedInSheet:, nonatomic) bool _shouldUseCompactPresentationControllerWhenPresentedInSheet;
@property (nonatomic) <UIActionSheetPresentationControllerDelegate> *actionSheetDelegate;
@property (nonatomic) bool avoidsKeyboardDisabled;
@property (nonatomic, retain) _UIActionSheetCompactPresentationController *compactPresentationController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *dismissActionTitle;
@property (nonatomic) bool dismissActionUsesShorterHeightWhenCompactVertically;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_compactPresentationController;
- (id)_exceptionStringForNilSourceViewOrBarButtonItem;
- (long long)_presentationContextForViewController:(id)arg1;
- (id)_presentationControllerForTraitCollection:(id)arg1;
- (void)_setShouldUseCompactPresentationControllerWhenPresentedInSheet:(bool)arg1;
- (bool)_shouldPresentedViewControllerControlStatusBarAppearance;
- (bool)_shouldUseCompactPresentationControllerWhenPresentedInSheet;
- (id)_visualStyleForTraitCollection:(id)arg1;
- (void)actionSheetCompactPresentationControllerDidDismiss:(id)arg1;
- (bool)actionSheetCompactPresentationControllerShouldPresentInCurrentContext:(id)arg1;
- (id)actionSheetDelegate;
- (bool)avoidsKeyboardDisabled;
- (void)beginPseudoAlertPresentationMode;
- (id)compactPresentationController;
- (void)dealloc;
- (bool)dimmingViewWasTapped:(id)arg1 withDismissCompletion:(id /* block */)arg2;
- (id)dismissActionTitle;
- (bool)dismissActionUsesShorterHeightWhenCompactVertically;
- (void)endPseudoAlertPresentationMode;
- (void)setActionSheetDelegate:(id)arg1;
- (void)setAvoidsKeyboardDisabled:(bool)arg1;
- (void)setCompactPresentationController:(id)arg1;
- (void)setDismissActionTitle:(id)arg1;
- (void)setDismissActionUsesShorterHeightWhenCompactVertically:(bool)arg1;

@end
