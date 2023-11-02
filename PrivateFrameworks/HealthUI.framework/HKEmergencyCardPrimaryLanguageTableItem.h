
@interface HKEmergencyCardPrimaryLanguageTableItem : HKEmergencyCardTableItem <HKMedicalIDEditorCellEditDelegate, HKSpokenLanguagesViewControllerDelegate> {
    NSArray * _allSpokenLanguages;
    HKSpokenLanguage * _currentLanguage;
    <HKEmergencyCardPrimaryLanguageUpdateDelegate> * _delegate;
    _HKMedicalIDMultilineStringCell * _displayCell;
    HKMedicalIDEditorLanguageCell * _editableCell;
    bool  _isEditing;
    NSArray * _mostLikelyLanguages;
}

@property (nonatomic) <HKEmergencyCardPrimaryLanguageUpdateDelegate> *delegate;

- (void).cxx_destruct;
- (id)_createEditableCell;
- (id)attributedStringForCurrentLanguage;
- (bool)canEditRowAtIndex:(long long)arg1;
- (long long)commitEditingStyle:(long long)arg1 forRowAtIndex:(long long)arg2;
- (id)delegate;
- (void)didCancelLanguageSelection;
- (void)didCommitEditingStyle:(long long)arg1 forRowAtIndex:(long long)arg2;
- (void)didSelectCellWithLanguage:(id)arg1;
- (long long)editingStyleForRowAtIndex:(long long)arg1;
- (bool)hasPresentableData;
- (id)initInEditMode:(bool)arg1;
- (void)medicalIDEditorCellDidChangeValue:(id)arg1;
- (void)presentSpokenLanguageController;
- (void)setCurrentLanguage:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (bool)shouldHighlightRowAtIndex:(long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndex:(long long)arg2;
- (id)title;

@end
