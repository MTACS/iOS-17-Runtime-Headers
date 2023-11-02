
@interface DebugHierarchyRequestExecutionContext : NSObject {
    DebugHierarchyRuntimeInfo * _contextRuntimeInfo;
    NSMutableDictionary * _identifierToObjectDescriptionMap;
    NSMutableDictionary * _metaData;
    DebugHierarchyRequest * _request;
    NSMutableDictionary * _topLevelGroups;
    NSMutableDictionary * _topLevelPropertyDescriptions;
}

@property (nonatomic, retain) DebugHierarchyRuntimeInfo *contextRuntimeInfo;
@property (nonatomic, retain) NSMutableDictionary *identifierToObjectDescriptionMap;
@property (nonatomic, retain) NSMutableDictionary *metaData;
@property (nonatomic, retain) DebugHierarchyRequest *request;
@property (nonatomic, retain) NSMutableDictionary *topLevelGroups;
@property (nonatomic, retain) NSMutableDictionary *topLevelPropertyDescriptions;

+ (id)contextWithRequest:(id)arg1;

- (void).cxx_destruct;
- (void)_addDebugHierarchyObject:(id)arg1 withDict:(id)arg2 toTopLevelGroupWithID:(id)arg3;
- (void)_addDebugHierarchyObjectDict:(id)arg1 toGroupWithID:(id)arg2 asDirectChild:(bool)arg3 belowParent:(id)arg4;
- (void)_collectRuntimeInformationForObjectType:(id)arg1;
- (void)addDebugHierarchyObject:(id)arg1 withVisibility:(long long)arg2 fetchStatus:(long long)arg3 toGroupWithID:(id)arg4 asDirectChild:(bool)arg5 belowParent:(id)arg6;
- (void)addProperties:(id)arg1 toObject:(id)arg2;
- (void)addReferencedDebugHierarchyObject:(id)arg1 withVisibility:(long long)arg2 toGroupWithID:(id)arg3 asDirectChild:(bool)arg4 belowParent:(id)arg5;
- (id)contextRuntimeInfo;
- (id)globalRuntimeInfo;
- (bool)hasAlreadyFetchedDebugHierarchyObject:(id)arg1;
- (id)identifierToObjectDescriptionMap;
- (id)initWithRequest:(id)arg1;
- (void)logRequestErrorWithTitle:(id)arg1 message:(id)arg2 fromMethod:(const char *)arg3;
- (id)metaData;
- (id)recursiveDescription;
- (id)request;
- (id)requestResponse;
- (id)runtimeTypeWithName:(id)arg1;
- (void)setContextRuntimeInfo:(id)arg1;
- (void)setIdentifierToObjectDescriptionMap:(id)arg1;
- (void)setMetaData:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)setTopLevelGroups:(id)arg1;
- (void)setTopLevelPropertyDescriptions:(id)arg1;
- (id)topLevelGroups;
- (id)topLevelPropertyDescriptions;

@end
