
@interface WFSingleStepHomeScreenShortcutCompletionDialogRequest : WFDialogRequest <NSSecureCoding, WFDialogRequestViewControllerSupport> {
    NSString * _applicationBundleIdentifier;
    bool  _requiresRunningShortcut;
}

@property (nonatomic, readonly) NSString *applicationBundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)applicationBundleIdentifier;
- (id)initWithShortcutName:(id)arg1 applicationBundleIdentifier:(id)arg2;
- (bool)requiresRunningShortcut;
- (void)setRequiresRunningShortcut:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI

- (Class)wf_dialogViewControllerClass;

@end
