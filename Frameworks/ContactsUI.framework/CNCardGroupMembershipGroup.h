
@interface CNCardGroupMembershipGroup : CNCardGroup {
    NSArray * _groupsToDisplayForEditing;
    NSArray * _parentGroups;
}

@property (nonatomic, retain) NSArray *groupsToDisplayForEditing;
@property (nonatomic, retain) NSArray *parentGroups;

- (void).cxx_destruct;
- (id)displayItems;
- (id)editingItems;
- (id)groupItemsToDisplayForEditing;
- (id)groupsToDisplayForEditing;
- (id)parentGroupItems;
- (id)parentGroups;
- (void)setGroupsToDisplayForEditing:(id)arg1;
- (void)setParentGroups:(id)arg1;
- (id)title;

@end
