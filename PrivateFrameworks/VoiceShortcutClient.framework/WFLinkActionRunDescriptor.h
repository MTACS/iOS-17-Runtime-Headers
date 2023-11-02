
@interface WFLinkActionRunDescriptor : WFWorkflowRunDescriptor {
    LNAction * _action;
    LNFullyQualifiedActionIdentifier * _identifier;
    bool  _isAutoShortcut;
    LNActionMetadata * _metadata;
    NSString * _name;
}

@property (nonatomic, readonly) LNAction *action;
@property (nonatomic, readonly) LNFullyQualifiedActionIdentifier *identifier;
@property (nonatomic, readonly) bool isAutoShortcut;
@property (nonatomic, readonly) LNActionMetadata *metadata;
@property (nonatomic, readonly) NSString *name;

// Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)action;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 action:(id)arg2 metadata:(id)arg3;
- (id)initWithIdentifier:(id)arg1 action:(id)arg2 metadata:(id)arg3 isAutoShortcut:(bool)arg4;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 action:(id)arg3 metadata:(id)arg4 isAutoShortcut:(bool)arg5;
- (bool)isAutoShortcut;
- (id)kind;
- (id)metadata;
- (id)name;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (void)createWorkflowWithEnvironment:(long long)arg1 database:(id)arg2 completionHandler:(id /* block */)arg3;

@end
