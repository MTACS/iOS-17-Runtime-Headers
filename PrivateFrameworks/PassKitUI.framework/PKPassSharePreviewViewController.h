
@interface PKPassSharePreviewViewController : PKPaymentSetupOptionsViewController <CNAutocompleteSearchControllerDelegate, CNContactPickerDelegate, PKSharePreviewAdditionalSecuritySectionControllerDelegate, PKSharePreviewOverviewSectionControllerDelegate, UISheetPresentationControllerDelegate> {
    PKSharePreviewAdditionalSecuritySectionController * _additionalSecuritySectionController;
    CNAutocompleteSearchController * _contactSearchController;
    PKPassShareInitiationContext * _context;
    <PKPassSharePreviewViewControllerDelegate> * _delegate;
    PKPassEntitlementsComposer * _entitlementComposer;
    PKSharePreviewOverviewSectionController * _overviewSectionController;
    PKPassSnapshotter * _passSnapshotter;
    PKSharedPassSharesController * _sharesController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelPressed;
- (void)_closeContactPicker;
- (void)_continueButtonPressed;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (void)contextDidChange;
- (void)didTapTextViewAccessoryButtonForSearchController:(id)arg1 anchoredToView:(id)arg2;
- (id)initWithSharesController:(id)arg1 context:(id)arg2 delegate:(id)arg3;
- (void)loadView;
- (bool)presentationControllerShouldDismiss:(id)arg1;
- (id)searchController:(id)arg1 composeRecipientForAddress:(id)arg2;
- (void)searchController:(id)arg1 didAddRecipient:(id)arg2;
- (void)setShowHeaderSpinner:(bool)arg1;
- (void)sharePreviewSectionControllerDidSelectEntitlements:(id)arg1;
- (void)sharePreviewSectionControllerDidSelectShowContactPicker:(id)arg1;
- (void)sharePreviewSectionControllerDidUpdateEntitlements:(id)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
