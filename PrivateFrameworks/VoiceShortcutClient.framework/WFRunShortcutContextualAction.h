
@interface WFRunShortcutContextualAction : WFTopHitItemContextualAction

@property (nonatomic, readonly) WFWorkflowDescriptor *workflow;

- (id)initWithDescriptor:(id)arg1 serializedRepresentation:(id)arg2 namedQueryInfo:(id)arg3;
- (bool)showsUserInterfaceWhenRunning;
- (id)uniqueIdentifier;
- (id)workflow;

@end
