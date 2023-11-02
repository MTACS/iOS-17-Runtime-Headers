
@interface DebugHierarchyRequestActionExecutor : NSObject {
    DebugHierarchyRequestExecutionContext * _context;
    NSArray * _finalActions;
    NSArray * _initialActions;
    NSArray * _objectActions;
}

@property (retain) DebugHierarchyRequestExecutionContext *context;
@property (nonatomic, readonly) NSArray *finalActions;
@property (nonatomic, readonly) NSArray *initialActions;
@property (nonatomic, readonly) NSArray *objectActions;

+ (void)_executeObjectActions:(id)arg1 withObject:(id)arg2 inContext:(id)arg3;
+ (void)_executeStandaloneActions:(id)arg1 inContext:(id)arg2;
+ (id)actionExecutorWithContext:(id)arg1;
+ (id)finalActionsFromActions:(id)arg1;
+ (id)initialActionsFromActions:(id)arg1;
+ (id)objectTargetedActionsFromActions:(id)arg1;

- (void).cxx_destruct;
- (bool)allObjectActionsTargetIdentifiers:(id*)arg1;
- (id)context;
- (void)executeActionsWithObject:(id)arg1;
- (void)executeFinalStandaloneActions;
- (void)executeInitialStandaloneActions;
- (id)finalActions;
- (id)initWithContext:(id)arg1;
- (id)initialActions;
- (id)objectActions;
- (void)setContext:(id)arg1;

@end
