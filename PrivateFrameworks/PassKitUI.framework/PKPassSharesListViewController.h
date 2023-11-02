
@interface PKPassSharesListViewController : PKDynamicCollectionViewController <PKPassSharesListSectionControllerDelegate, PKShareSecureElementPassViewControllerDelegate> {
    PKShareAuthorizationSession * _authorizer;
    PKSharedPassSharesController * _sharesController;
    PKPassSharesListSectionController * _sharesSectionController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_donePressed;
- (void)_setIsLoading:(bool)arg1;
- (void)_showDisplayableError:(id)arg1;
- (id)initWithSharesController:(id)arg1;
- (void)loadView;
- (void)passSharesListSectionController:(id)arg1 didSelectShare:(id)arg2;
- (void)passSharesListSectionController:(id)arg1 presentAlert:(id)arg2;
- (void)passSharesListSectionController:(id)arg1 setIsLoading:(bool)arg2;
- (void)passSharesListSectionControllerDidFinishRevokingShares:(id)arg1;
- (void)passSharesListSectionControllerDidSelectAddShare:(id)arg1;
- (void)reloadDataAnimated:(bool)arg1;
- (void)shareSecureElementPassViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)viewWillAppear:(bool)arg1;

@end
