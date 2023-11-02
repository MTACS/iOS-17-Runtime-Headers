
@interface NSExtensionItem : NSObject <NSCopying, NSSecureCoding, WFNaming> {
    NSMutableDictionary * _userInfo;
}

@property (setter=ak_setContext:, nonatomic, retain) AKAppleIDAuthenticationContext *ak_context;
@property (nonatomic, copy) NSArray *attachments;
@property (nonatomic, copy) NSAttributedString *attributedContentText;
@property (nonatomic, copy) NSAttributedString *attributedTitle;
@property (nonatomic, copy) NSDictionary *userInfo;
@property (nonatomic, readonly, copy) NSString *wfName;
@property (setter=wf_setActionInterfaceRequest:, nonatomic, copy) WFUIKitActionInterfaceRequest *wf_actionInterfaceRequest;
@property (setter=wf_setParameterEditingRequest:, nonatomic, copy) WFUIKitParameterEditingRequest *wf_parameterEditingRequest;
@property (setter=wf_setParameterEditingResponse:, nonatomic, copy) WFUIKitParameterEditingResponse *wf_parameterEditingResponse;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (bool)supportsSecureCoding;

- (id)_matchingDictionaryRepresentation;
- (id)attachments;
- (id)attributedContentText;
- (id)attributedTitle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setAttachments:(id)arg1;
- (void)setAttributedContentText:(id)arg1;
- (void)setAttributedTitle:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;

// Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit

+ (id)itemWithTitle:(id)arg1 attachmentItem:(id)arg2;

// Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit

+ (id)extensionItemWithAppleIDAuthenticationContext:(id)arg1;

- (id)ak_context;
- (void)ak_setContext:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit

- (id)wfName;

// Image: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor

- (id)wf_actionInterfaceRequest;
- (id)wf_parameterEditingRequest;
- (id)wf_parameterEditingResponse;
- (void)wf_setActionInterfaceRequest:(id)arg1;
- (void)wf_setParameterEditingRequest:(id)arg1;
- (void)wf_setParameterEditingResponse:(id)arg1;

@end
