
@interface DBGSnapshotNode : NSObject {
    NSArray * _additionalGroups;
    DBGSnapshotGroup * _childGroup;
    NSString * _identifier;
    NSMutableDictionary * _mutableProperties;
    DBGSnapshotNode * _parentNode;
    NSPointerArray * _propertyObservers;
    DebugHierarchyRuntimeType * _runtimeType;
    DBGSnapshot * _snapshot;
    long long  _visibility;
}

@property (retain) NSArray *additionalGroups;
@property (retain) DBGSnapshotGroup *childGroup;
@property (readonly) NSString *displayName;
@property (retain) NSString *identifier;
@property (retain) NSMutableDictionary *mutableProperties;
@property DBGSnapshotNode *parentNode;
@property (retain) NSPointerArray *propertyObservers;
@property (retain) DebugHierarchyRuntimeType *runtimeType;
@property DBGSnapshot *snapshot;
@property long long visibility;

+ (id)nodeWithIdentifier:(id)arg1;
+ (id)nodeWithUniqueIdentifier;

- (void).cxx_destruct;
- (id)_describeTreeWithRoot:(id)arg1 depth:(unsigned long long)arg2;
- (void)addAdditonalGroup:(id)arg1;
- (void)addProperties:(id)arg1;
- (void)addProperty:(id)arg1;
- (void)addPropertyObserver:(id)arg1;
- (id)additionalGroups;
- (id)allProperties;
- (id)childGroup;
- (id)debugDescription;
- (id)debugDescriptionWithIndentationDepth:(unsigned long long)arg1 prefix:(id)arg2 includeProperties:(bool)arg3;
- (void)didUpdateProperty:(id)arg1;
- (id)displayName;
- (id)groupWithID:(id)arg1;
- (bool)hasPropertyWithName:(id)arg1;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (id)mutableProperties;
- (id)parentNode;
- (id)propertiesMatchingPredicate:(id)arg1;
- (id)propertyObservers;
- (id)propertyWithName:(id)arg1;
- (void)removePropertyObserver:(id)arg1;
- (id)rootLevelGroup;
- (id)runtimeType;
- (void)setAdditionalGroups:(id)arg1;
- (void)setChildGroup:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMutableProperties:(id)arg1;
- (void)setParentNode:(id)arg1;
- (void)setPropertyObservers:(id)arg1;
- (void)setRuntimeType:(id)arg1;
- (void)setSnapshot:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)setVisibility:(long long)arg1;
- (id)snapshot;
- (id)valueForUndefinedKey:(id)arg1;
- (long long)visibility;

@end
