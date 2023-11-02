
@protocol DebugHierarchyRequestObjectAction <DebugHierarchyRequestAction>

@required

- (void)performInContext:(DebugHierarchyRequestExecutionContext *)arg1 withObject:(id <DebugHierarchyObject>)arg2;
- (bool)targetsObjectIdentifiers:(id*)arg1;

@end
