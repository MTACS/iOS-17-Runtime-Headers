
@interface AAUIChooseContactController : NSObject <CNAutocompleteSearchControllerDelegate, CNContactPickerDelegate> {
    CNAutocompleteSearchController * _autocompleteSearchController;
    AAContactsManager * _contactsManager;
    <AAUIChooseContactControllerDelegate> * _delegate;
    NSMutableDictionary * _handleToRecipient;
    NSMutableDictionary * _idsReachabilityForRecipientHandle;
    NSMutableDictionary * _idsReachabilityForUnifiedOrGroupRecipientHandle;
    NSObject<OS_dispatch_queue> * _idsStatusAccessQueue;
}

@property (nonatomic, readonly) UIViewController *chooseContactViewController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AAUIChooseContactControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_idsReachabilityDictionaryForRecipient:(id)arg1;
- (bool)_isHandleReachable:(id)arg1;
- (void)_prepareNextButton;
- (void)_selectionCompleted;
- (void)_setupViewController;
- (id)chooseContactViewController;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;
- (id)delegate;
- (void)didTapTextViewAccessoryButtonForSearchController:(id)arg1;
- (void)fetchIDSStatusForRecipient:(id)arg1;
- (id)init;
- (id)searchController:(id)arg1 composeRecipientForAddress:(id)arg2;
- (void)searchController:(id)arg1 didAddRecipient:(id)arg2;
- (void)searchController:(id)arg1 didRemoveRecipient:(id)arg2;
- (unsigned long long)searchController:(id)arg1 presentationOptionsForRecipient:(id)arg2;
- (id)searchController:(id)arg1 tintColorForRecipient:(id)arg2;
- (void)setDelegate:(id)arg1;

@end
