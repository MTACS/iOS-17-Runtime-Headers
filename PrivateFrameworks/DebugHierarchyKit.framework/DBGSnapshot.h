
@interface DBGSnapshot : NSObject {
    NSString * _identifier;
    NSMapTable * _identifierToNodeMap;
    NSMutableArray * _rootLevelGroups;
    DBGSnapshotManager * _snapshotManager;
}

@property (readonly) NSString *identifier;
@property (readonly) NSMapTable *identifierToNodeMap;
@property (retain) NSMutableArray *rootLevelGroups;
@property (readonly) NSArray *rootLevelSnapshotGroups;
@property DBGSnapshotManager *snapshotManager;

- (void).cxx_destruct;
- (id)_recursivelyDescribeGroup:(id)arg1 withIndentation:(unsigned long long)arg2 isAdditonalGroup:(bool)arg3 includeProperties:(bool)arg4;
- (id)_recursivelyDescribeNode:(id)arg1 withIndentation:(unsigned long long)arg2 includeProperties:(bool)arg3;
- (void)addRootLevelGroup:(id)arg1;
- (void)clearData;
- (id)debugDescription;
- (id)identifier;
- (id)identifierToNodeMap;
- (id)init;
- (id)nodesKindOfRuntimeClass:(id)arg1;
- (id)nodesMatchingPredicate:(id)arg1;
- (id)recursiveDescriptionIncludingProperties:(bool)arg1;
- (id)rootLevelGroups;
- (id)rootLevelSnapshotGroupWithIdentifier:(id)arg1;
- (id)rootLevelSnapshotGroups;
- (void)setRootLevelGroups:(id)arg1;
- (void)setSnapshotManager:(id)arg1;
- (id)snapshotManager;

@end
