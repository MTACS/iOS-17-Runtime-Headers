
@interface PKPassShareDetailsViewController : PKPaymentSetupOptionsViewController <PKPassSharesListSectionControllerDelegate, PKSharePreviewAdditionalSecuritySectionControllerDelegate, PKSharePreviewOverviewSectionControllerDelegate> {
    PKSharePreviewAdditionalSecuritySectionController * _additionalSecuritySectionController;
    PKShareAuthorizationSession * _authorizer;
    PKPassEntitlementsComposer * _entitlementComposer;
    PKPassEntitlementSelectionSectionController * _entitlementSectionController;
    PKSharePreviewOverviewSectionController * _overviewSectionController;
    UIBarButtonItem * _saveButton;
    PKPassShare * _senderShare;
    PKPassShare * _share;
    PKSharedPassSharesController * _sharesController;
    PKPassSharesListSectionController * _sharesSectionController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_donePressed;
- (void)_saveTapped;
- (void)_setIsLoading:(bool)arg1;
- (void)_setRecipient:(id)arg1;
- (void)_setSender:(id)arg1;
- (void)_showDisplayableError:(id)arg1;
- (void)_updateShareToShare:(id)arg1;
- (id)avatarView;
- (id)initWithShare:(id)arg1 sharesController:(id)arg2 authorizer:(id)arg3;
- (void)loadView;
- (void)passSharesListSectionController:(id)arg1 didSelectShare:(id)arg2;
- (void)passSharesListSectionController:(id)arg1 presentAlert:(id)arg2;
- (void)passSharesListSectionController:(id)arg1 setIsLoading:(bool)arg2;
- (void)passSharesListSectionControllerDidFinishRevokingShares:(id)arg1;
- (void)passSharesListSectionControllerDidSelectAddShare:(id)arg1;
- (void)sharePreviewSectionControllerDidSelectEntitlements:(id)arg1;
- (void)sharePreviewSectionControllerDidUpdateEntitlements:(id)arg1;
- (void)showSaveButtonIfNecessary;
- (void)viewWillAppear:(bool)arg1;

@end
