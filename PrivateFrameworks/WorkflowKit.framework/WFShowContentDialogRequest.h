
@interface WFShowContentDialogRequest : WFDialogRequest <NSSecureCoding, WFDialogRequestViewControllerSupport> {
    NSData * _archivedContentCollection;
    WFContentCollection * _cachedContentCollection;
    WFDialogButton * _cancelButton;
    WFDialogButton * _doneButton;
}

@property (nonatomic, copy) NSData *archivedContentCollection;
@property (nonatomic, retain) WFContentCollection *cachedContentCollection;
@property (nonatomic, readonly, copy) WFDialogButton *cancelButton;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) WFDialogButton *doneButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)archivedContentCollection;
- (id)cachedContentCollection;
- (id)cancelButton;
- (id)description;
- (id)doneButton;
- (void)encodeWithCoder:(id)arg1;
- (void)getContentCollectionWithCompletionHandler:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentCollection:(id)arg1 attribution:(id)arg2 prompt:(id)arg3;
- (void)setArchivedContentCollection:(id)arg1;
- (void)setCachedContentCollection:(id)arg1;

// Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI

- (Class)wf_dialogViewControllerClass;

@end
