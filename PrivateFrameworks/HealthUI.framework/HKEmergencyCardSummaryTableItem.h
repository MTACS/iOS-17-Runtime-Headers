
@interface HKEmergencyCardSummaryTableItem : HKEmergencyCardTableItem {
    HKMedicalIDPersonSummaryCell * _cell;
}

- (void).cxx_destruct;
- (id)_cell;
- (bool)hasPresentableData;
- (id)initInEditMode:(bool)arg1;
- (void)localeDidChange:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })separatorInset;
- (void)setData:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2;
- (void)timeZoneDidChange:(id)arg1;

@end
