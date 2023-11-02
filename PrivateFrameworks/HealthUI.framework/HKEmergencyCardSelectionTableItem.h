
@interface HKEmergencyCardSelectionTableItem : HKEmergencyCardTableItem {
    UITableViewCell * _cell;
    <HKEmergencyCardSelectionTableItemDelegate> * _selectionDelegate;
}

@property (nonatomic) <HKEmergencyCardSelectionTableItemDelegate> *selectionDelegate;

- (void).cxx_destruct;
- (bool)hasPresentableData;
- (id)selectionDelegate;
- (void)setSelectionDelegate:(id)arg1;
- (bool)shouldHighlightRowAtIndex:(long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndex:(long long)arg2;
- (id)title;

@end
