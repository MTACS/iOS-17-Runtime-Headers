
@interface WFContentCoercionSearch : NSObject {
    NSMutableArray * _agenda;
    NSArray * _goalItemClasses;
    WFType * _goalType;
    WFCoercionOptions * _options;
    WFContentCoercionNode * _startNode;
    NSMutableOrderedSet * _visitedStates;
}

@property (nonatomic, readonly) NSMutableArray *agenda;
@property (nonatomic, readonly) NSArray *goalItemClasses;
@property (nonatomic, readonly) WFType *goalType;
@property (nonatomic, readonly) WFCoercionOptions *options;
@property (nonatomic, readonly) WFContentCoercionNode *startNode;
@property (nonatomic, readonly) NSMutableOrderedSet *visitedStates;

+ (id)searchForCoercingItem:(id)arg1 toItemClass:(Class)arg2 options:(id)arg3;
+ (id)searchForCoercingItem:(id)arg1 toItemClasses:(id)arg2 options:(id)arg3;
+ (id)searchForCoercingItem:(id)arg1 toType:(id)arg2 options:(id)arg3;

- (void).cxx_destruct;
- (id)agenda;
- (id)badCoercionError;
- (id)continueCoercionWithContentItems:(id)arg1 error:(id*)arg2;
- (void)continueCoercionWithContentItems:(id)arg1 error:(id)arg2 handler:(id /* block */)arg3;
- (id)goalItemClasses;
- (bool)goalTest:(id)arg1;
- (id)goalType;
- (id)initWithStartNode:(id)arg1 goalItemClasses:(id)arg2 goalType:(id)arg3 options:(id)arg4;
- (bool)isCoercionPathAllowedForNode:(id)arg1;
- (id)nextPathNode;
- (id)options;
- (void)runCoercion:(id /* block */)arg1;
- (id)runCoercionSynchronouslyWithError:(id*)arg1;
- (id)startNode;
- (id)visitedStates;

@end
