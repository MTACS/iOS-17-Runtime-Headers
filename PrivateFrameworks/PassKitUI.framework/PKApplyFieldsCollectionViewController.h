
@interface PKApplyFieldsCollectionViewController : PKApplyCollectionViewController <PKApplyCollectionViewSectionControllerDelegate, PKApplyInlineFooterSectionControllerDelegate> {
    bool  _hasFieldsSubmitted;
    PKApplyInlineFooterSectionController * _inlineFooterSectionController;
    bool  _needsToReachEndOfPage;
    PKApplyRadioPickerSectionController * _pickerSectionController;
    bool  _primaryButtonLoading;
    unsigned long long  _useInlinePrimaryButton;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasFieldsSubmitted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_determineNextEnablementWithPage:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (id)_recomputeSections;
- (void)_terminateFlow;
- (void)_updatePrimaryButton;
- (void)handleNextStep;
- (bool)hasFieldsSubmitted;
- (void)primaryButtonTapped;
- (void)pushViewController:(id)arg1 animated:(bool)arg2;
- (void)recomputeSectionsWithReload:(bool)arg1;
- (void)reloadDataAnimated:(bool)arg1;
- (void)showButtonSpinner:(bool)arg1;
- (void)submitFields;
- (void)verifyAndSubmitFields;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
