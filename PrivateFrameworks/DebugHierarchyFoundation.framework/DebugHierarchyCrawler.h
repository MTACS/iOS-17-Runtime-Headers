
@interface DebugHierarchyCrawler : NSObject {
    DebugHierarchyRequestActionExecutor * _actionExecutor;
    NSMapTable * _knownObjectsMap;
    DebugHierarchyRequestExecutionContext * _requestContext;
}

@property (retain) DebugHierarchyRequestActionExecutor *actionExecutor;
@property (nonatomic, retain) NSMapTable *knownObjectsMap;
@property (nonatomic, readonly) DebugHierarchyCrawlerOptions *options;
@property (nonatomic, retain) DebugHierarchyRequestExecutionContext *requestContext;

+ (id)crawlerWithRequestContext:(id)arg1 knownObjectsMap:(id)arg2;

- (void).cxx_destruct;
- (id)_entryPointClasses;
- (id)actionExecutor;
- (void)crawlDebugHierarchyObject:(id)arg1 inGroupWithID:(id)arg2 asDirectChild:(bool)arg3 belowParent:(id)arg4 withParentDefinedVisibility:(long long)arg5;
- (void)crawlEntryPointClasses;
- (void)crawlTopLevelGroups;
- (void)enumerateDebugHierarchyObjects:(id)arg1 inGroupWithID:(id)arg2 options:(id)arg3 asDirectChildren:(bool)arg4 belowParent:(id)arg5;
- (id)initWithRequestContext:(id)arg1 knownObjectsMap:(id)arg2;
- (id)knownObjectsMap;
- (id)options;
- (id)requestContext;
- (void)run;
- (void)setActionExecutor:(id)arg1;
- (void)setKnownObjectsMap:(id)arg1;
- (void)setRequestContext:(id)arg1;

@end
