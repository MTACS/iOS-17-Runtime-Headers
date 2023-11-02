
@interface LNEntity : NSObject <BSXPCSecureCoding, NSCopying, NSSecureCoding> {
    LNEntityIdentifier * _identifier;
    NSString * _managedAccountIdentifier;
    NSArray * _properties;
    NSString * _prototypeMangledTypeName;
    bool  _transient;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) LNEntityIdentifier *identifier;
@property (nonatomic, readonly, copy) NSString *managedAccountIdentifier;
@property (nonatomic, readonly, copy) NSArray *properties;
@property (nonatomic, readonly, copy) NSString *prototypeMangledTypeName;
@property (readonly) Class superclass;
@property (getter=isTransient, nonatomic, readonly) bool transient;

// Image: /System/Library/PrivateFrameworks/LinkMetadata.framework/LinkMetadata

+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 managedAccountIdentifier:(id)arg2;
- (id)initWithIdentifier:(id)arg1 properties:(id)arg2;
- (id)initWithIdentifier:(id)arg1 properties:(id)arg2 managedAccountIdentifier:(id)arg3;
- (id)initWithTransient:(bool)arg1 identifier:(id)arg2 properties:(id)arg3 managedAccountIdentifier:(id)arg4;
- (id)initWithTransient:(bool)arg1 identifier:(id)arg2 properties:(id)arg3 prototypeMangledTypeName:(id)arg4 managedAccountIdentifier:(id)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isTransient;
- (id)managedAccountIdentifier;
- (id)properties;
- (id)prototypeMangledTypeName;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

+ (id)valueFromSerializedRepresentation:(id)arg1 metadata:(id)arg2 variableProvider:(id)arg3 parameter:(id)arg4;

- (id)wfSerializedRepresentation;

@end
