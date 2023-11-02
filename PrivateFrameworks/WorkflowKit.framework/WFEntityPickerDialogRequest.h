
@interface WFEntityPickerDialogRequest : WFDialogRequest <NSSecureCoding, WFDialogRequestViewControllerSupport> {
    NSString * _actionIdentifier;
    NSArray * _items;
    NSString * _parameterKey;
}

@property (nonatomic, readonly, copy) NSString *actionIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *items;
@property (nonatomic, readonly, copy) NSString *parameterKey;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actionIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithActionIdentifier:(id)arg1 parameterKey:(id)arg2 items:(id)arg3 attribution:(id)arg4 prompt:(id)arg5;
- (id)initWithCoder:(id)arg1;
- (id)items;
- (id)parameterKey;

// Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI

- (Class)wf_dialogViewControllerClass;

@end
