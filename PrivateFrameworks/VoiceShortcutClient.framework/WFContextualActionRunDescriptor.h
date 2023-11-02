
@interface WFContextualActionRunDescriptor : WFWorkflowRunDescriptor {
    WFContextualAction * _action;
    WFContextualActionContext * _context;
}

@property (nonatomic, readonly) WFContextualAction *action;
@property (nonatomic, readonly) WFContextualActionContext *context;

// Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)action;
- (id)context;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAction:(id)arg1 context:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)kind;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (void)createWorkflowWithEnvironment:(long long)arg1 database:(id)arg2 completionHandler:(id /* block */)arg3;

@end
