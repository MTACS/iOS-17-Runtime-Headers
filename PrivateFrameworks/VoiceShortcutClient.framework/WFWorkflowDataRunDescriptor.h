
@interface WFWorkflowDataRunDescriptor : WFWorkflowRunDescriptor {
    NSData * _workflowData;
}

@property (nonatomic, readonly, copy) NSData *workflowData;

// Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithWorkflowData:(id)arg1;
- (id)kind;
- (id)workflowData;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (void)createWorkflowWithEnvironment:(long long)arg1 database:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)workflowFileDataWithDatabase:(id)arg1 error:(id*)arg2;

@end
