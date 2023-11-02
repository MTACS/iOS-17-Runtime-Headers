
@interface LNLinkEnumerationValueType : LNValueType {
    NSString * _enumerationIdentifier;
}

@property (nonatomic, readonly, copy) NSString *enumerationIdentifier;

// Image: /System/Library/PrivateFrameworks/LinkMetadata.framework/LinkMetadata

+ (id)objectClassesForCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)enumerationIdentifier;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithEnumerationIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (Class)objectClass;
- (id)typeIdentifierAsString;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (Class)wf_contentItemClassWithAppBundleIdentifier:(id)arg1;
- (id)wf_contentItemFromLinkValue:(id)arg1 appBundleIdentifier:(id)arg2 displayedBundleIdentifier:(id)arg3;
- (Class)wf_objectClass;

@end
