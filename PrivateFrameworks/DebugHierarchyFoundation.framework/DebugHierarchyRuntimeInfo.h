
@interface DebugHierarchyRuntimeInfo : NSObject {
    NSMutableDictionary * _typeMap;
}

@property (retain) NSMutableDictionary *typeMap;

+ (id)runtimeInfoWithSerializedRepresentation:(id)arg1;

- (void).cxx_destruct;
- (id)_describeTreeWithRoot:(id)arg1 depth:(unsigned long long)arg2 description:(id)arg3;
- (void)_recursivelyIndexRuntimeType:(id)arg1;
- (void)_recursivelyMergeInRuntimeType:(id)arg1;
- (void)_reindexAllTypes;
- (id)_topLevelTypes;
- (void)addType:(id)arg1 toParentType:(id)arg2;
- (void)clearData;
- (id)debugDescription;
- (id)init;
- (id)initWithSerializedRepresentation:(id)arg1;
- (void)mergeWith:(id)arg1;
- (id)serializedRepresentation;
- (void)setTypeMap:(id)arg1;
- (id)typeMap;
- (id)typeOfObject:(id)arg1;
- (id)typeWithName:(id)arg1;

@end
