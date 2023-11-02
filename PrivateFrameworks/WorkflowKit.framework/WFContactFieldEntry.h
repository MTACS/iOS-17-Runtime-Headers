
@interface WFContactFieldEntry : NSObject <NSSecureCoding, WFNaming, WFParameterState> {
    WFContact * _contact;
    NSString * _customHandle;
    WFEmailAddress * _emailAddress;
    WFMessageGroup * _messageGroup;
    WFPhoneNumber * _phoneNumber;
    long long  _type;
}

@property (nonatomic, readonly) WFContact *contact;
@property (nonatomic, readonly) NSString *customHandle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) WFEmailAddress *emailAddress;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WFMessageGroup *messageGroup;
@property (nonatomic, readonly) WFPhoneNumber *phoneNumber;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly, copy) NSString *wfName;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

+ (id)processingValueClasses;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contact;
- (id)containedVariables;
- (id)contentItem;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customHandle;
- (id)description;
- (id)emailAddress;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithContact:(id)arg1;
- (id)initWithCustomHandle:(id)arg1;
- (id)initWithEmailAddress:(id)arg1;
- (id)initWithHandleString:(id)arg1;
- (id)initWithHandleString:(id)arg1 allowsCustomHandles:(bool)arg2;
- (id)initWithMessageGroup:(id)arg1;
- (id)initWithPhoneNumber:(id)arg1;
- (id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)messageGroup;
- (id)phoneNumber;
- (void)processWithContext:(id)arg1 userInputRequiredHandler:(id /* block */)arg2 valueHandler:(id /* block */)arg3;
- (id)serializedRepresentation;
- (long long)type;
- (id)underlyingObject;
- (id)wfName;

// Image: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor

- (id)composeRecipient;

@end
