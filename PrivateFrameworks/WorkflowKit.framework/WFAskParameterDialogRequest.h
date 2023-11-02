
@interface WFAskParameterDialogRequest : WFDialogRequest <NSSecureCoding, WFDialogRequestViewControllerSupport> {
    NSString * _actionIdentifier;
    WFDialogButton * _cancelButton;
    WFDialogButton * _doneButton;
    bool  _focusImmediatelyWhenPresented;
    NSString * _parameterKey;
    NSDictionary * _serializedParameterStates;
    long long  _style;
}

@property (nonatomic, readonly, copy) NSString *actionIdentifier;
@property (nonatomic, readonly, copy) WFDialogButton *cancelButton;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) WFDialogButton *doneButton;
@property (nonatomic, readonly) bool focusImmediatelyWhenPresented;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *parameterKey;
@property (nonatomic, readonly, copy) NSDictionary *serializedParameterStates;
@property (nonatomic, readonly) long long style;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

+ (long long)dialogComponentStyleForParameter:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actionIdentifier;
- (id)cancelButton;
- (id)description;
- (id)doneButton;
- (void)encodeWithCoder:(id)arg1;
- (bool)focusImmediatelyWhenPresented;
- (id)initWithActionIdentifier:(id)arg1 parameterKey:(id)arg2 serializedParameterStates:(id)arg3 style:(long long)arg4 attribution:(id)arg5 prompt:(id)arg6 doneButton:(id)arg7 focusImmediatelyWhenPresented:(bool)arg8;
- (id)initWithActionIdentifier:(id)arg1 parameterKey:(id)arg2 serializedParameterStates:(id)arg3 style:(long long)arg4 attribution:(id)arg5 prompt:(id)arg6 focusImmediatelyWhenPresented:(bool)arg7;
- (id)initWithCoder:(id)arg1;
- (id)parameterKey;
- (id)requestBySettingFocusImmediatelyWhenPresented:(bool)arg1;
- (id)serializedParameterStates;
- (long long)style;

// Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI

- (Class)wf_dialogViewControllerClass;

@end
