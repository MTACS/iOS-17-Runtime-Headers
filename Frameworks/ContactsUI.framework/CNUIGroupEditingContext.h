
@interface CNUIGroupEditingContext : NSObject {
    NSArray * _addedGroups;
    NSArray * _originalGroups;
    NSArray * _removedGroups;
}

@property (nonatomic, retain) NSArray *addedGroups;
@property (nonatomic, readonly) NSArray *groupsToDisplayForEditing;
@property (nonatomic, readonly) NSArray *originalGroups;
@property (nonatomic, retain) NSArray *removedGroups;

- (void).cxx_destruct;
- (void)addGroup:(id)arg1;
- (id)addedGroups;
- (bool)group:(id)arg1 isInGroupArray:(id)arg2;
- (id)groupsToDisplayForEditing;
- (id)init;
- (id)initWithOriginalGroups:(id)arg1;
- (id)originalGroups;
- (void)removeGroup:(id)arg1;
- (id)removedGroups;
- (void)setAddedGroups:(id)arg1;
- (void)setRemovedGroups:(id)arg1;

@end
