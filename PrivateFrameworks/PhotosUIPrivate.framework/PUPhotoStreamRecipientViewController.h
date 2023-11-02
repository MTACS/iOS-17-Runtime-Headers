
@interface PUPhotoStreamRecipientViewController : UIViewController <CNAutocompleteResultsTableViewControllerDelegate, CNAutocompleteSearchConsumer, CNComposeRecipientTextViewDelegate, CNContactPickerDelegate, IDSBatchIDQueryControllerDelegate, UIPopoverPresentationControllerDelegate> {
    double  _bottomTableOffset;
    CNContactPickerViewController * _contactPickerPresentedController;
    CNContactStore * _contactStore;
    NSNumber * _currentSearchTaskID;
    id  _delegate;
    IDSBatchIDQueryController * _idsBatchIDQueryController;
    double  _lastHeight;
    UIScrollView * _recipientContainerView;
    CNComposeRecipientTextView * _recipientView;
    struct CGSize { 
        double width; 
        double height; 
    }  _recipientViewSize;
    CNAutocompleteSearchManager * _searchManager;
    CNAutocompleteResultsTableViewController * _searchResultsTableViewController;
    NSMutableSet * _validPhoneNumbers;
}

@property (nonatomic) double bottomTableOffset;
@property (nonatomic, readonly) CNContactStore *contactStore;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *recipients;
@property (readonly) Class superclass;

+ (void)recordRecentInvitationRecipient:(id)arg1 displayName:(id)arg2 date:(id)arg3;

- (void).cxx_destruct;
- (void)_addRecipientForContact:(id)arg1 address:(id)arg2 kind:(unsigned long long)arg3;
- (void)_dismissContactPicker;
- (void)_searchForRecipientWithText:(id)arg1;
- (id)_searchManager;
- (id)_selectedNormalizedPhoneForRecipient:(id)arg1;
- (void)_setSearchResults:(id)arg1;
- (void)autocompleteResultsController:(id)arg1 didRequestInfoAboutRecipient:(id)arg2;
- (void)autocompleteResultsController:(id)arg1 didSelectRecipient:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)autocompleteResultsController:(id)arg1 tintColorForRecipient:(id)arg2 completion:(id /* block */)arg3;
- (void)batchQueryController:(id)arg1 updatedDestinationsStatus:(id)arg2 onService:(id)arg3 error:(id)arg4;
- (double)bottomTableOffset;
- (id)composeRecipientView:(id)arg1 composeRecipientForAddress:(id)arg2;
- (void)composeRecipientView:(id)arg1 didAddRecipient:(id)arg2;
- (void)composeRecipientView:(id)arg1 didChangeSize:(struct CGSize { double x1; double x2; })arg2;
- (void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2;
- (void)composeRecipientView:(id)arg1 didRemoveRecipient:(id)arg2;
- (void)composeRecipientView:(id)arg1 disambiguateRecipientForAtom:(id)arg2;
- (void)composeRecipientView:(id)arg1 showPersonCardForAtom:(id)arg2;
- (void)composeRecipientView:(id)arg1 textDidChange:(id)arg2;
- (void)composeRecipientViewDidFinishPickingRecipient:(id)arg1;
- (void)composeRecipientViewRequestAddRecipient:(id)arg1;
- (void)consumeAutocompleteSearchResults:(id)arg1 taskID:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (id)contactStore;
- (void)dealloc;
- (id)delegate;
- (void)finishedSearchingForAutocompleteResults;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)makeRecipientViewFirstResponder;
- (void)makeRecipientViewResignFirstResponder;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)prepareForPopoverPresentation:(id)arg1;
- (id)recipients;
- (void)setBottomTableOffset:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
