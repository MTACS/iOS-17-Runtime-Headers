
@interface WFShowAlertDialogRequest : WFDialogRequest <NSSecureCoding, WFDialogRequestViewControllerSupport> {
    WFDialogButton * _cancelButton;
    NSString * _message;
    WFDialogButton * _okButton;
}

@property (nonatomic, readonly, copy) WFDialogButton *cancelButton;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *message;
@property (nonatomic, readonly, copy) WFDialogButton *okButton;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cancelButton;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPrompt:(id)arg1 message:(id)arg2 cancelButton:(id)arg3 attribution:(id)arg4;
- (id)initWithPrompt:(id)arg1 message:(id)arg2 okButton:(id)arg3 cancelButton:(id)arg4 attribution:(id)arg5;
- (id)message;
- (id)okButton;

// Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI

- (Class)wf_dialogViewControllerClass;

@end
