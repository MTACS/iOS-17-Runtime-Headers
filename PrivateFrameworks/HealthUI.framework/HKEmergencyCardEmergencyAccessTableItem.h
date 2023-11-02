
@interface HKEmergencyCardEmergencyAccessTableItem : HKEmergencyCardGroupTableItem <HKMedicalIDEditorCellEditDelegate> {
    HKEmergencyCardFooterTableItem * _enabledFooterItem;
    HKEmergencyCardEnabledTableItem * _enabledTableItem;
    UITableViewCell * _lastDequeuedAddContactCell;
    HKEmergencyCardFooterTableItem * _shareInfoFooterItem;
    HKEmergencyCardShareInfoTableItem * _shareInfoTableItem;
    bool  _showsEmergencyAccessState;
    bool  _showsShowWhenLockedState;
}

@property (nonatomic) bool showsEmergencyAccessState;
@property (nonatomic) bool showsShowWhenLockedState;

- (void).cxx_destruct;
- (bool)hasPresentableData;
- (id)initInEditMode:(bool)arg1 shouldShowLocked:(bool)arg2 shouldShareInfo:(bool)arg3;
- (void)medicalIDEditorCellDidChangeValue:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })separatorInset;
- (void)setIsSecondaryProfile:(bool)arg1;
- (void)setShowsEmergencyAccessState:(bool)arg1;
- (void)setShowsShowWhenLockedState:(bool)arg1;
- (bool)showsEmergencyAccessState;
- (bool)showsShowWhenLockedState;
- (id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndex:(long long)arg2;
- (id)titleForHeader;
- (id)viewOnlyTitle;

@end
