
@interface LNEntityValueType : LNValueType {
    NSString * _identifier;
}

@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *typeName;

// Image: /System/Library/PrivateFrameworks/LinkMetadata.framework/LinkMetadata

+ (id)objectClassesForCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithTypeName:(id)arg1;
- (bool)isEqual:(id)arg1;
- (Class)objectClass;
- (id)typeName;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (Class)wf_contentItemClassWithAppBundleIdentifier:(id)arg1;
- (id)wf_contentItemFromLinkValue:(id)arg1 appBundleIdentifier:(id)arg2 displayedBundleIdentifier:(id)arg3;
- (id)wf_titleWithCustomIntentSerializedRepresentation:(id)arg1;

@end
