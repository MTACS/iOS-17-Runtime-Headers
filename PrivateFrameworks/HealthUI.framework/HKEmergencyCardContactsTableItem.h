
@interface HKEmergencyCardContactsTableItem : HKEmergencyCardTableItem <HKEmergencyContactRelationshipPickerDelegate, HKMedicalIDEditorCellEditDelegate, HKMedicalIDEmergencyContactFlowDelegate> {
    HKMedicalIDEmergencyContactFlow * _contactPicker;
    <HKEmergencyCardContactUpdateDelegate> * _delegate;
    UITableViewCell * _lastDequeuedAddContactCell;
    _HKEmergencyContact * _selectedContact;
}

@property (nonatomic) <HKEmergencyCardContactUpdateDelegate> *delegate;

- (void).cxx_destruct;
- (void)_addEmergencyContactToData:(id)arg1;
- (id)_dequeueAndConfigureContactEditCellForIndex:(long long)arg1 inTableView:(id)arg2;
- (id)_dequeueAndConfigureContactViewCellForIndex:(long long)arg1 inTableView:(id)arg2;
- (id)_footerAttributedText;
- (id)_footerAttributedTextForPrimaryProfile;
- (id)_footerAttributedTextForSecondaryProfile;
- (id)_footerTextForSecondaryProfile;
- (id)_footerTextWithGivenName:(id)arg1;
- (void)_presentEmergencyContactPickerIfPossible;
- (void)_setupContactPickingFlow;
- (void)callEmergencyContact:(id)arg1;
- (bool)canEditRowAtIndex:(long long)arg1;
- (long long)commitEditingStyle:(long long)arg1 forRowAtIndex:(long long)arg2;
- (long long)contactIndexForRowIndex:(long long)arg1;
- (id)delegate;
- (long long)editingStyleForRowAtIndex:(long long)arg1;
- (void)emergencyContactFlow:(id)arg1 didSelectContact:(id)arg2;
- (void)emergencyContactFlowDidCancel:(id)arg1;
- (void)emergencyContactRelationshipPicker:(id)arg1 didChooseRelationshipNamed:(id)arg2;
- (void)emergencyContactRelationshipPickerDidCancel:(id)arg1;
- (bool)hasPresentableData;
- (id)initInEditMode:(bool)arg1;
- (long long)itemTypeForRowIndex:(long long)arg1;
- (void)medicalIDEditorCellDidChangeValue:(id)arg1;
- (void)medicalIDEditorCellDidTapLabel:(id)arg1;
- (long long)numberOfRows;
- (bool)refreshFromData:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (bool)shouldHighlightRowAtIndex:(long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndex:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndex:(long long)arg2;
- (id)title;
- (id)titleForFooter;
- (id)titleForHeader;
- (id)viewOnlyTitle;

@end
