
@interface FIUIHealthSettingsDataSource : NSObject <UITableViewDataSource> {
    FIUIHealthSettingsTableViewCell * _biologicalSexCell;
    FIUIHealthSettingsTableViewCell * _birthDateCell;
    FIUIHealthSettingsBirthDatePickerController * _birthDatePickerController;
    <FIUIHealthSettingsDataSourceDelegate> * _delegate;
    FIUIHealthSettingsTableViewCell * _heightCell;
    FIUIHealthSettingsHeightPickerController * _heightPickerController;
    FIActivitySettingsController * _preEditSettingsController;
    FIActivitySettingsController * _settingsController;
    FIUIHealthSettingsSexPickerController * _sexPickerController;
    bool  _showWheelchair;
    FIUIHealthSettingsTableViewCell * _weightCell;
    FIUIHealthSettingsWeightPickerController * _weightPickerController;
    FIUIHealthSettingsTableViewCell * _wheelchairUseCell;
}

@property (nonatomic, retain) FIUIHealthSettingsBirthDatePickerController *birthDatePickerController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FIUIHealthSettingsDataSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) FIActivitySettingsController *editedSettingsController;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) FIUIHealthSettingsHeightPickerController *heightPickerController;
@property (nonatomic, retain) FIActivitySettingsController *settingsController;
@property (nonatomic, retain) FIUIHealthSettingsSexPickerController *sexPickerController;
@property (readonly) Class superclass;
@property (nonatomic, retain) FIUIHealthSettingsWeightPickerController *weightPickerController;

- (void).cxx_destruct;
- (void)_updateBiologicalSexCell;
- (void)_updateBirthDateCell;
- (void)_updateCells;
- (void)_updateHeightCell;
- (void)_updateWeightCell;
- (id)biologicalSexCell;
- (id)birthDateCell;
- (id)birthDatePickerController;
- (void)cellDidBecomeFirstResponder:(id)arg1;
- (void)cellDidResignFirstResponder:(id)arg1;
- (id)delegate;
- (id)editedSettingsController;
- (void)endEditingAndDiscardChanges:(bool)arg1;
- (id)heightCell;
- (id)heightPickerController;
- (id)initWithActivitySettingsController:(id)arg1 showWheelchair:(bool)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setBirthDatePickerController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHeightPickerController:(id)arg1;
- (void)setSettingsController:(id)arg1;
- (void)setSexPickerController:(id)arg1;
- (void)setWeightPickerController:(id)arg1;
- (id)settingsController;
- (id)sexPickerController;
- (bool)shouldHighlightRowAtIndexPath:(id)arg1;
- (void)startEditing;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)weightCell;
- (id)weightPickerController;
- (void)wheelchairSwitchDidChange:(id)arg1;
- (id)wheelchairUseCell;

@end
