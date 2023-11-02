
@interface HKEmergencyCardDeletionTableItem : HKEmergencyCardTableItem {
    UITableViewCell * _cell;
    <HKEmergencyCardDeletionDelegate> * _deletionDelegate;
}

@property (nonatomic) <HKEmergencyCardDeletionDelegate> *deletionDelegate;

- (void).cxx_destruct;
- (id)deletionDelegate;
- (id)initInEditMode:(bool)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })separatorInset;
- (void)setDeletionDelegate:(id)arg1;
- (bool)shouldHighlightRowAtIndex:(long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndex:(long long)arg2;
- (id)title;

@end
