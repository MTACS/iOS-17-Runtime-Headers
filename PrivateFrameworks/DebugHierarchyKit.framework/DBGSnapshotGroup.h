
@interface DBGSnapshotGroup : NSObject {
    NSString * _defaultDisplayName;
    long long  _fetchStatus;
    NSString * _groupingIdentifier;
    NSPointerArray * _objects;
    DBGSnapshotNode * _parentNode;
    DBGSnapshot * _snapshot;
}

@property (readonly) NSArray *allObjects;
@property (retain) NSString *defaultDisplayName;
@property long long fetchStatus;
@property (readonly) NSString *groupingIdentifier;
@property (readonly) NSPointerArray *objects;
@property DBGSnapshotNode *parentNode;
@property DBGSnapshot *snapshot;

+ (id)strongObjectsGroupWithIdentifier:(id)arg1;
+ (id)weakObjectsGroupWithIdentifier:(id)arg1;

- (void).cxx_destruct;
- (void)addObject:(id)arg1;
- (id)allObjects;
- (id)debugDescription;
- (id)defaultDisplayName;
- (id)displayName;
- (long long)fetchStatus;
- (id)groupingIdentifier;
- (id)initWithIdentifier:(id)arg1 usingStrongChildNodeReferences:(bool)arg2;
- (id)objects;
- (id)parentNode;
- (id)rootLevelGroup;
- (void)setDefaultDisplayName:(id)arg1;
- (void)setFetchStatus:(long long)arg1;
- (void)setParentNode:(id)arg1;
- (void)setSnapshot:(id)arg1;
- (id)snapshot;

@end
