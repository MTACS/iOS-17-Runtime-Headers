
@interface FAProfileViewTableViewDecorator : FATableViewDecorator {
    FAFamilyMember * _familyMember;
    FAProfilePictureStore * _pictureStore;
    NSMutableDictionary * _profileViewForCells;
    RUITableView * _remoteTableViewController;
}

+ (bool)_shouldShowInSection:(id)arg1;
+ (bool)shouldShowInPage:(id)arg1;

- (void).cxx_destruct;
- (void)_addProfileViewToCell:(id)arg1;
- (id)_getOrCreateProfileViewForCell:(id)arg1;
- (id)_keyForCell:(id)arg1;
- (id)_profileViewForCell:(id)arg1;
- (void)_removeProfileViewFromCell:(id)arg1;
- (id)initWithTableView:(id)arg1 ruiTableView:(id)arg2 forPerson:(id)arg3 pictureStore:(id)arg4;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;

@end
