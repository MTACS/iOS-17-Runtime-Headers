
@interface HKEmergencyCardLastUpdatedTableItem : HKEmergencyCardTableItem {
    bool  _editable;
}

- (bool)hasPresentableData;
- (id)initInEditMode:(bool)arg1 editable:(bool)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2;

@end
