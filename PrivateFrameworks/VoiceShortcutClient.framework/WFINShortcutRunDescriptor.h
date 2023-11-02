
@interface WFINShortcutRunDescriptor : WFWorkflowRunDescriptor {
    INShortcut * _shortcut;
}

@property (nonatomic, readonly) INShortcut *shortcut;

// Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithShortcut:(id)arg1;
- (id)kind;
- (id)shortcut;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (void)createWorkflowWithEnvironment:(long long)arg1 database:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)donateRunInteractionWithDatabase:(id)arg1 workflowReference:(id)arg2 completionHandler:(id /* block */)arg3;

@end
