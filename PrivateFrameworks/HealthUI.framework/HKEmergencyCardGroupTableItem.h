
@interface HKEmergencyCardGroupTableItem : HKEmergencyCardTableItem {
    NSArray * _allSubItems;
    NSMutableArray * _cumulativeRowOffsets;
    NSArray * _subitems;
    NSString * _titleForHeader;
}

@property (nonatomic, retain) NSArray *subitems;
@property (nonatomic, retain) NSString *titleForHeader;

- (void).cxx_destruct;
- (void)_getSubitem:(id*)arg1 andSubitemRow:(long long*)arg2 forTableViewRow:(long long)arg3;
- (bool)canEditRowAtIndex:(long long)arg1;
- (void)commitEditing;
- (long long)commitEditingStyle:(long long)arg1 forRowAtIndex:(long long)arg2;
- (void)didCommitEditingStyle:(long long)arg1 forRowAtIndex:(long long)arg2;
- (long long)editingStyleForRowAtIndex:(long long)arg1;
- (bool)hasPresentableData;
- (long long)numberOfRows;
- (void)setData:(id)arg1;
- (void)setOwningViewController:(id)arg1;
- (void)setProfileFirstName:(id)arg1;
- (void)setSubitems:(id)arg1;
- (void)setTitleForHeader:(id)arg1;
- (bool)shouldHighlightRowAtIndex:(long long)arg1;
- (id)subitems;
- (id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndex:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndex:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndex:(long long)arg2;
- (id)titleForHeader;

@end
