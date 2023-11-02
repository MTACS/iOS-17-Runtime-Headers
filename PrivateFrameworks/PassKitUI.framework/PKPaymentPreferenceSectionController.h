
@interface PKPaymentPreferenceSectionController : PKDynamicListSectionController <PKTextFieldCollectionViewListCellDelegate> {
    <PKPaymentPreferenceSectionControllerDelegate> * _delegate;
    unsigned long long  _editingRow;
    id /* block */  _handler;
    bool  _isEditingFieldThatWasOriginallyInvalid;
    NSMutableArray * _items;
    PKPaymentPreferenceSectionController * _linkedSectionController;
    UICollectionViewCellRegistration * _listRegistration;
    PKPaymentPreference * _preference;
    long long  _style;
    UICollectionViewCellRegistration * _textFieldRegistration;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPaymentPreferenceSectionControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) id /* block */ handler;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *items;
@property (nonatomic) PKPaymentPreferenceSectionController *linkedSectionController;
@property (nonatomic, readonly) PKPaymentPreference *preference;
@property (nonatomic, readonly) long long style;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_preferenceIsHideMyEmail:(id)arg1;
- (bool)_showErrorForTextField:(id)arg1;
- (void)_updateSelectedIndexIfNeededFromNewItemIndex:(long long)arg1;
- (id)addPreferenceItems;
- (id)appendNewItemForEditing;
- (id)appendNewSubPreference;
- (id)cellRegistrationForItem:(id)arg1;
- (void)configureFooterView:(id)arg1 forSectionIdentifier:(id)arg2;
- (void)configureSupplementaryRegistration:(id)arg1 elementKind:(id)arg2 sectionIdentifier:(id)arg3;
- (id)delegate;
- (void)deleteItem:(id)arg1 forRow:(unsigned long long)arg2;
- (void)didSelectItem:(id)arg1;
- (void)editItem:(id)arg1 forRow:(unsigned long long)arg2;
- (bool)editedTextFieldHasError:(id)arg1;
- (id)footerContentForSectionIdentifier:(id)arg1;
- (Class)footerViewClassForSectionIdentifier:(id)arg1;
- (id /* block */)handler;
- (id)initWithPreference:(id)arg1 style:(long long)arg2 preferencesChangedHandler:(id /* block */)arg3;
- (id)items;
- (id)linkedSectionController;
- (id)newOptionItemForSubPreference:(id)arg1;
- (id)newOptionItemForSubPreference:(id)arg1 hasErrorHandler:(id /* block */)arg2;
- (id)preference;
- (id)sectionIdentifier;
- (void)setDelegate:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setLinkedSectionController:(id)arg1;
- (void)setSelectedIndex:(unsigned long long)arg1;
- (id)snapshotWithPreviousSnapshot:(id)arg1 forSectionIdentifier:(id)arg2;
- (long long)style;
- (Class)supplementaryRegistrationClassForKind:(id)arg1 sectionIdentifier:(id)arg2;
- (void)textFieldDidBeginEditing:(id)arg1 forListCell:(id)arg2;
- (void)textFieldDidEndEditing:(id)arg1 forListCell:(id)arg2;
- (bool)textFieldShouldReturn:(id)arg1 forListCell:(id)arg2;

@end
