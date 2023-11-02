
@interface WFWorkflowLinkProvider : WFWorkflowItemProvider {
    NSString * _exclusiveActivityType;
}

@property (nonatomic, copy) NSString *exclusiveActivityType;

- (void).cxx_destruct;
- (id)exclusiveActivityType;
- (void)generateItemURL;
- (id)initWithWorkflow:(id)arg1 userInterface:(id)arg2;
- (id)item;
- (void)setExclusiveActivityType:(id)arg1;
- (id)shareShortcutEventForActivityType:(id)arg1;

@end
