
@interface WFLinkResultDialogRequest : WFLinkSnippetDialogRequest <NSSecureCoding, WFDialogRequestViewControllerSupport> {
    CATResult * _catResult;
    WFDialogButton * _doneButton;
    LNSuccessResult * _result;
}

@property (nonatomic, retain) CATResult *catResult;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) WFDialogButton *doneButton;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) LNSuccessResult *result;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)catResult;
- (id)doneButton;
- (void)encodeWithCoder:(id)arg1;
- (void)getCATResultWithCompletionHandler:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSuccessResult:(id)arg1 attribution:(id)arg2;
- (id)result;
- (void)setCatResult:(id)arg1;

// Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI

- (Class)wf_dialogViewControllerClass;

@end
