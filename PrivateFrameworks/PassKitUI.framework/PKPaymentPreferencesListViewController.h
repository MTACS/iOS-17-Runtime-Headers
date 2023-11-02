
@interface PKPaymentPreferencesListViewController : PKDynamicCollectionViewController <CNContactPickerDelegate, PKAddressEditorViewControllerDelegate, PKAddressSearcherViewControllerDelegate, PKPaymentPreferenceContactSectionControllerDelegate, PKPaymentPreferenceSectionControllerDelegate> {
    PKContactFormatValidator * _contactFormatValidator;
    PKPaymentPreferenceContactSectionController * _editingContactSectionController;
    PKPaymentPreferenceOptionListItem * _editingItem;
    id /* block */  _handler;
    bool  _preferenceHasSeparateAddItemsSection;
    NSArray * _preferences;
    long long  _style;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool preferenceHasSeparateAddItemsSection;
@property (nonatomic, retain) NSArray *preferences;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_endCurrentInlineEditing;
- (void)_handleSelectedContact:(id)arg1;
- (void)_keyboardDidShow:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_reloadEditedSection:(id)arg1;
- (id)_requiredKeysForContactPreference:(id)arg1;
- (void)_resetEditingContact:(id)arg1 withCell:(id)arg2 forRow:(unsigned long long)arg3;
- (void)_setupSectionControllers;
- (void)_updateContactAtIndex:(unsigned long long)arg1 withCell:(id)arg2;
- (void)_updateNavigationBarButtons;
- (void)addressEditorViewController:(id)arg1 selectedContact:(id)arg2;
- (void)addressEditorViewControllerDidCancel:(id)arg1;
- (void)addressSearcherViewController:(id)arg1 selectedContact:(id)arg2;
- (void)addressSearcherViewControllerDidCancel:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (bool)collectionViewIsEditingForSectionController:(id)arg1;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;
- (id)initWithPreferences:(id)arg1 title:(id)arg2 style:(long long)arg3 handler:(id /* block */)arg4 contactFormatValidator:(id)arg5;
- (bool)preferenceHasSeparateAddItemsSection;
- (id)preferences;
- (void)presentHideMyEmailAlertController;
- (void)presentMeCardAlertControllerWithContact:(id)arg1 contactKey:(id)arg2 handler:(id /* block */)arg3;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setEditing:(bool)arg1 animated:(bool)arg2 forSectionController:(id)arg3;
- (void)setPreferenceHasSeparateAddItemsSection:(bool)arg1;
- (void)setPreferences:(id)arg1;
- (void)showAddressEditorForContactItem:(id)arg1 inSectionController:(id)arg2;
- (void)showAddressPickerForPreference:(id)arg1 inSectionController:(id)arg2;
- (void)showContactsPickerForPreference:(id)arg1 inSectionController:(id)arg2;
- (void)startInlineEditingForContactItem:(id)arg1 inSectionController:(id)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
