
@interface WFSmartPromptDialogRequest : WFDialogRequest <NSSecureCoding, WFDialogRequestViewControllerSupport> {
    WFDialogButton * _allowAlwaysButton;
    WFDialogButton * _allowOnceButton;
    NSData * _archivedSourceContentCollection;
    WFContentCollection * _cachedSourceContentCollection;
    WFSmartPromptConfiguration * _configuration;
    WFDialogButton * _denyButton;
    WFDialogButton * _previewButton;
    NSString * _secondaryText;
}

@property (nonatomic, readonly, copy) WFDialogButton *allowAlwaysButton;
@property (nonatomic, readonly, copy) WFDialogButton *allowOnceButton;
@property (nonatomic, copy) NSData *archivedSourceContentCollection;
@property (nonatomic, retain) WFContentCollection *cachedSourceContentCollection;
@property (nonatomic, readonly, copy) WFSmartPromptConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, copy) WFDialogButton *denyButton;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) WFDialogButton *previewButton;
@property (nonatomic, readonly, copy) NSString *secondaryText;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allowAlwaysButton;
- (id)allowOnceButton;
- (id)archivedSourceContentCollection;
- (id)cachedSourceContentCollection;
- (id)configuration;
- (id)denyButton;
- (void)encodeWithCoder:(id)arg1;
- (void)getContentCollectionWithCompletionHandler:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1 attribution:(id)arg2;
- (id)previewButton;
- (id)secondaryText;
- (void)setArchivedSourceContentCollection:(id)arg1;
- (void)setCachedSourceContentCollection:(id)arg1;
- (bool)shouldCenterPrompt;

// Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI

- (Class)wf_dialogViewControllerClass;

@end
