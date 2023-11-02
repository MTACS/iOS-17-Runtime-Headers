
@interface DebugHierarchyRequestExecutor : NSObject {
    DebugHierarchyRequestActionExecutor * _actionExecutor;
    DebugHierarchyRequestExecutionContext * _requestContext;
}

@property (nonatomic, retain) DebugHierarchyRequestActionExecutor *actionExecutor;
@property (nonatomic, retain) DebugHierarchyRequestExecutionContext *requestContext;

+ (id)executorWithRequest:(id)arg1;

- (void).cxx_destruct;
- (void)_executeRequestActionsWithCrawler;
- (void)_executeRequestActionsWithKnownObjects;
- (id)_performanceMetricsDictionaryRequestActionDuration:(double)arg1;
- (id)_v1CompatibleRequestResponseFromResponse:(id)arg1;
- (void)_v1MakePropertyDescriptionCompatible:(id)arg1 withRuntimeType:(id)arg2;
- (void)_v1RecursivelyMakePropertyDescriptionCompatibleWithGroup:(id)arg1;
- (id)actionExecutor;
- (id)initWithRequest:(id)arg1;
- (id)requestContext;
- (id)runWithError:(id*)arg1;
- (void)setActionExecutor:(id)arg1;
- (void)setRequestContext:(id)arg1;

@end
