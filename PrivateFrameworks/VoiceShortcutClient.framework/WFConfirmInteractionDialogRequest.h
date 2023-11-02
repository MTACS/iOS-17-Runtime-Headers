
@interface WFConfirmInteractionDialogRequest : WFDialogRequest <NSSecureCoding, WFDialogRequestViewControllerSupport> {
    WFDialogButton * _cancelButton;
    WFDialogButton * _confirmButton;
    INInteraction * _interaction;
}

@property (nonatomic, readonly, copy) WFDialogButton *cancelButton;
@property (nonatomic, readonly, copy) WFDialogButton *confirmButton;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) INInteraction *interaction;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cancelButton;
- (id)confirmButton;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInteraction:(id)arg1 prompt:(id)arg2;
- (id)interaction;

// Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI

- (Class)wf_dialogViewControllerClass;

@end
