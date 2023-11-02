
@interface WFFileAccessDialogRequest : WFDialogRequest <NSSecureCoding, WFDialogRequestViewControllerSupport> {
    NSArray * _URLs;
    WFDialogButton * _cancelButton;
    NSString * _message;
    WFDialogButton * _okButton;
    NSString * _workflowID;
}

@property (nonatomic, readonly, copy) NSArray *URLs;
@property (nonatomic, readonly, copy) WFDialogButton *cancelButton;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *message;
@property (nonatomic, readonly, copy) WFDialogButton *okButton;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *workflowID;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URLs;
- (id)cancelButton;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPrompt:(id)arg1 message:(id)arg2 okButton:(id)arg3 cancelButton:(id)arg4 attribution:(id)arg5 workflowID:(id)arg6 URLs:(id)arg7;
- (id)message;
- (id)okButton;
- (bool)shouldCenterPrompt;
- (id)workflowID;

// Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI

- (Class)wf_dialogViewControllerClass;

@end
