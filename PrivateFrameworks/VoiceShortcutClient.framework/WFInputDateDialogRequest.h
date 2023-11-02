
@interface WFInputDateDialogRequest : WFDialogRequest <NSSecureCoding, WFDialogRequestViewControllerSupport> {
    WFDialogButton * _cancelButton;
    WFDatePickerConfiguration * _configuration;
    WFDialogButton * _doneButton;
    NSString * _message;
}

@property (nonatomic, readonly, copy) WFDialogButton *cancelButton;
@property (nonatomic, readonly, copy) WFDatePickerConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) WFDialogButton *doneButton;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *message;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cancelButton;
- (id)configuration;
- (id)description;
- (id)doneButton;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDatePickerConfiguration:(id)arg1 message:(id)arg2 attribution:(id)arg3 prompt:(id)arg4;
- (id)message;

// Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI

- (Class)wf_dialogViewControllerClass;

@end
