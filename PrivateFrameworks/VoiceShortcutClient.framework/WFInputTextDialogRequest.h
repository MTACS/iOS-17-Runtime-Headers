
@interface WFInputTextDialogRequest : WFDialogRequest <NSSecureCoding, WFDialogRequestViewControllerSupport> {
    WFDialogButton * _cancelButton;
    WFDialogButton * _doneButton;
    NSString * _message;
    WFTextFieldConfiguration * _textFieldConfiguration;
}

@property (nonatomic, readonly, copy) WFDialogButton *cancelButton;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) WFDialogButton *doneButton;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *message;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) WFTextFieldConfiguration *textFieldConfiguration;

// Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cancelButton;
- (id)description;
- (id)doneButton;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasMultilineTextEntry;
- (id)initWithCoder:(id)arg1;
- (id)initWithTextFieldConfiguration:(id)arg1 message:(id)arg2 attribution:(id)arg3 prompt:(id)arg4;
- (id)message;
- (id)textFieldConfiguration;

// Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI

- (Class)wf_dialogViewControllerClass;

@end
