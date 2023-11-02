
@interface WFHandleInteractionDialogRequest : WFDialogRequest <NSSecureCoding, WFDialogRequestViewControllerSupport> {
    WFDialogButton * _doneButton;
    INInteraction * _interaction;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) WFDialogButton *doneButton;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) INInteraction *interaction;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)doneButton;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInteraction:(id)arg1 attribution:(id)arg2;
- (id)initWithInteraction:(id)arg1 prompt:(id)arg2;
- (id)interaction;

// Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI

- (Class)wf_dialogViewControllerClass;

@end
