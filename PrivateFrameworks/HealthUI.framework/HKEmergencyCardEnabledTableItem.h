
@interface HKEmergencyCardEnabledTableItem : HKEmergencyCardTableItem <HKMedicalIDEditorSwitchDelegate> {
    HKMedicalIDEditorSwitchCell * _cell;
    UITableView * _tableView;
}

@property (nonatomic) UITableView *tableView;

- (void).cxx_destruct;
- (id)_editCell;
- (id)_viewCellForTableView:(id)arg1;
- (id)footerTextViewString;
- (bool)hasPresentableData;
- (id)initInEditMode:(bool)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })separatorInset;
- (void)setTableView:(id)arg1;
- (void)switchWasChanged:(bool)arg1;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2;
- (id)titleForFooter;
- (id)titleForHeader;

@end
