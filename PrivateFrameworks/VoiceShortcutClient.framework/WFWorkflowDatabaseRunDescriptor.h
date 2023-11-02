
@interface WFWorkflowDatabaseRunDescriptor : WFWorkflowRunDescriptor {
    NSString * _identifier;
    NSString * _name;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *name;

// Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2;
- (id)initWithName:(id)arg1;
- (id)kind;
- (id)name;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (void)createWorkflowWithEnvironment:(long long)arg1 database:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)donateRunInteractionWithDatabase:(id)arg1 workflowReference:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)workflowReferenceWithDatabase:(id)arg1 error:(id*)arg2;

@end
