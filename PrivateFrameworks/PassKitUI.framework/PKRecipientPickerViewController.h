
@interface PKRecipientPickerViewController : UIViewController <CNAutocompleteResultsTableViewControllerDelegate, CNAutocompleteSearchConsumer, CNAutocompleteUIFetchDelegate, CNAvatarViewDelegate, CNComposeRecipientTextViewDelegate, CNContactPickerDelegate, PKDashboardTransactionFetcherDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    NSArray * _autocompleteResults;
    PKContactFormatValidator * _contactFormatValidator;
    PKContactResolver * _contactResolver;
    UIView * _containerView;
    NSString * _currentRecipientText;
    NSNumber * _currentTaskID;
    PKFamilyMemberCollection * _familyCollection;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _keyboardFrame;
    bool  _keyboardVisible;
    PKPeerPaymentController * _peerPaymentController;
    long long  _peerPaymentSendFlowType;
    bool  _performingAction;
    CNComposeRecipientTextView * _recipientTextView;
    CNAutocompleteResultsTableViewController * _resultsViewController;
    PKDashboardTitleHeaderView * _sampleHeaderView;
    PKThumbnailCollectionViewCell * _sampleThumbnailCell;
    CNAutocompleteSearchManager * _searchManager;
    NSArray * _suggestedFamilyRecipients;
    NSArray * _suggestedRecipients;
    UICollectionView * _suggestionsView;
    NSString * _title;
    PKDashboardTransactionFetcher * _transactionFetcher;
    PKTransactionSourceCollection * _transactionSourceCollection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addRecipient:(id)arg1;
- (void)_addRecipientFromContactProperty:(id)arg1;
- (void)_cancelButtonTapped:(id)arg1;
- (void)_clearRecipientTextView;
- (unsigned long long)_composeAddressKindFromCounterpartHandle:(id)arg1;
- (id)_composeRecipientForContact:(id)arg1;
- (void)_configureCell:(id)arg1 withContact:(id)arg2;
- (void)_configureHeaderView:(id)arg1 inSection:(unsigned long long)arg2;
- (void)_generateSuggestions;
- (bool)_hasHeaderForSection:(unsigned long long)arg1;
- (bool)_isRecipientTextViewEmpty;
- (void)_keyboardWillChange:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)_nextBarButtonPressed:(id)arg1;
- (void)_removeAllRecipients;
- (bool)_showFamilySuggestions;
- (void)_showNextScreenWithRecipient:(id)arg1;
- (bool)_showRecentSuggestions;
- (void)_updateLayoutForKeyboardAction:(id /* block */)arg1;
- (void)_updateNextBarButtonItem;
- (void)autocompleteResultsController:(id)arg1 didRequestInfoAboutRecipient:(id)arg2;
- (void)autocompleteResultsController:(id)arg1 didSelectRecipient:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)autocompleteResultsController:(id)arg1 tintColorForRecipient:(id)arg2 completion:(id /* block */)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)composeHeaderView:(id)arg1 didChangeSize:(struct CGSize { double x1; double x2; })arg2;
- (void)composeRecipientView:(id)arg1 didAddRecipient:(id)arg2;
- (void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2;
- (void)composeRecipientView:(id)arg1 didRemoveRecipient:(id)arg2;
- (void)composeRecipientView:(id)arg1 didReplaceRecipients:(id)arg2 withRecipients:(id)arg3;
- (void)composeRecipientView:(id)arg1 textDidChange:(id)arg2;
- (void)composeRecipientViewDidFinishPickingRecipient:(id)arg1;
- (void)composeRecipientViewRequestAddRecipient:(id)arg1;
- (void)consumeAutocompleteSearchResults:(id)arg1 taskID:(id)arg2;
- (void)consumeCorecipientSearchResults:(id)arg1 taskID:(id)arg2;
- (void)consumeResults:(id)arg1 taskID:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;
- (void)dealloc;
- (void)finishedSearchingForAutocompleteResults;
- (void)finishedTaskWithID:(id)arg1;
- (bool)getSupplementalGroupsForSearchQuery:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithTransactionSourceCollection:(id)arg1 familyCollection:(id)arg2 peerPaymentSendFlowType:(long long)arg3;
- (id)initWithTransactionSourceCollection:(id)arg1 peerPaymentSendFlowType:(long long)arg2;
- (void)loadView;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (struct { bool x1; long long x2; })pkui_navigationStatusBarStyleDescriptor;
- (id)presentingViewControllerForAvatarView:(id)arg1;
- (void)setPerformingAction:(bool)arg1;
- (void)setUpNavigationBar;
- (void)transactionsChanged:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;

@end
