
@interface WFWorkflowRunEvent : WFDatabaseObjectDescriptor {
    NSDate * _date;
    long long  _outcome;
    NSString * _source;
    NSString * _triggerID;
    WFWorkflowReference * _workflow;
}

@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) long long outcome;
@property (nonatomic, readonly) NSString *source;
@property (nonatomic, readonly, copy) NSString *triggerID;
@property (nonatomic, readonly) WFWorkflowReference *workflow;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)date;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 workflow:(id)arg2 source:(id)arg3 date:(id)arg4 triggerID:(id)arg5 outcome:(long long)arg6;
- (long long)outcome;
- (id)source;
- (id)triggerID;
- (id)workflow;

// Image: /System/Library/PrivateFrameworks/WorkflowUICore.framework/WorkflowUICore

- (id)displayName;

@end
