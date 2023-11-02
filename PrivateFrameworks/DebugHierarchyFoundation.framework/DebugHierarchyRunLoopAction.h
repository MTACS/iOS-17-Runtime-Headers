
@interface DebugHierarchyRunLoopAction : DebugHierarchyAbstractRequestAction <DebugHierarchyRequestStandaloneAction>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)performInContext:(id)arg1;

@end
