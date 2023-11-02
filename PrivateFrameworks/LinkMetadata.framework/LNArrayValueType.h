
@interface LNArrayValueType : LNValueType {
    long long  _capabilities;
    LNValueType * _memberValueType;
}

@property (nonatomic, readonly) long long capabilities;
@property (nonatomic, readonly, copy) LNValueType *memberValueType;

// Image: /System/Library/PrivateFrameworks/LinkMetadata.framework/LinkMetadata

+ (id)objectClassesForCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)capabilities;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateValuesOfValueType:(id)arg1 value:(id)arg2 block:(id /* block */)arg3;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithMemberValueType:(id)arg1;
- (id)initWithMemberValueType:(id)arg1 capabilities:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)memberValueType;
- (Class)objectClass;
- (bool)objectIsMemberOfType:(id)arg1;

// Image: /System/Library/PrivateFrameworks/LinkServices.framework/LinkServices

- (id)cat_dialogType;
- (id)cat_keyPath;
- (id)cat_value:(id)arg1;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (id)wf_contentCollectionFromLinkValue:(id)arg1 appBundleIdentifier:(id)arg2 displayedBundleIdentifier:(id)arg3;
- (Class)wf_contentItemClassWithAppBundleIdentifier:(id)arg1;

@end
