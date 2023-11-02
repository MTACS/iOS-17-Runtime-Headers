
@interface WFContextualActionRunRequest : WFWorkflowRunRequest <NSSecureCoding> {
    WFContextualAction * _action;
    WFContextualActionContext * _actionContext;
    WFContentCollection * _input;
}

@property (nonatomic, readonly) WFContextualAction *action;
@property (nonatomic, readonly) WFContextualActionContext *actionContext;
@property (nonatomic, retain) WFContentCollection *input;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)action;
- (id)actionContext;
- (void)encodeWithCoder:(id)arg1;
- (void)getInputWithCompletionHandler:(id /* block */)arg1;
- (id)initWithAction:(id)arg1 actionContext:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)input;
- (id)queueIdentifier;
- (void)setInput:(id)arg1;

@end
