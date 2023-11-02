
@interface WFWorkflowRunDescriptor : NSObject <NSSecureCoding>

@property (nonatomic, readonly) NSString *kind;

// Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)kind;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (void)createWorkflowWithEnvironment:(long long)arg1 database:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)donateRunInteractionWithDatabase:(id)arg1 workflowReference:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)workflowReferenceWithDatabase:(id)arg1 error:(id*)arg2;

@end
