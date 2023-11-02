
@interface CNUIGroupContext : NSObject {
    NSDictionary * _addedGroupsByContainerDict;
    NSArray * _removedGroups;
}

@property (nonatomic, readonly) NSDictionary *addedGroupsByContainerDict;
@property (nonatomic, readonly) NSArray *removedGroups;

- (void).cxx_destruct;
- (id)addedGroupsByContainerDict;
- (id)initWithAddedGroupsByContainerDict:(id)arg1 removedGroups:(id)arg2;
- (id)removedGroups;

@end
