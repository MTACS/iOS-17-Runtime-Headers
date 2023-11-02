
@interface WFLinkConfirmationDialogRequest : WFLinkSnippetDialogRequest <NSSecureCoding, WFDialogRequestViewControllerSupport> {
    WFDialogButton * _noButton;
    NSString * _title;
    WFDialogButton * _yesButton;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) WFDialogButton *noButton;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly, copy) WFDialogButton *yesButton;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithActionMetadata:(id)arg1 showPrompt:(bool)arg2 dialogString:(id)arg3 viewSnippet:(id)arg4 yesText:(id)arg5 noText:(id)arg6 attribution:(id)arg7;
- (id)initWithActionParameterMetadata:(id)arg1 dialogString:(id)arg2 viewSnippet:(id)arg3 attribution:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 viewSnippet:(id)arg2 yesText:(id)arg3 noText:(id)arg4 attribution:(id)arg5;
- (id)noButton;
- (id)title;
- (id)yesButton;

// Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI

- (Class)wf_dialogViewControllerClass;

@end
