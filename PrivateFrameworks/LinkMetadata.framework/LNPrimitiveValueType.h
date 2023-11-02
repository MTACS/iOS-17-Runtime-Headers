
@interface LNPrimitiveValueType : LNValueType {
    long long  _typeIdentifier;
}

@property (nonatomic, readonly) long long typeIdentifier;
@property (nonatomic, readonly, copy) NSString *typeIdentifierAsString;

// Image: /System/Library/PrivateFrameworks/LinkMetadata.framework/LinkMetadata

+ (id)URLValueType;
+ (id)attributedStringValueType;
+ (id)boolValueType;
+ (id)dateComponentsValueType;
+ (id)dateValueType;
+ (id)doubleValueType;
+ (id)int16ValueType;
+ (id)int32ValueType;
+ (id)int64ValueType;
+ (id)int8ValueType;
+ (id)intValueType;
+ (id)objectClassesForCoding;
+ (id)placemarkValueType;
+ (id)stringValueType;
+ (id)supportedClassesByTypeIdentifier;
+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTypeIdentifier:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (Class)objectClass;
- (long long)typeIdentifier;
- (id)typeIdentifierAsString;

// Image: /System/Library/PrivateFrameworks/LinkServices.framework/LinkServices

- (id)cat_dialogType;
- (id)cat_keyPath;
- (id)cat_value:(id)arg1;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (Class)wf_contentItemClassWithAppBundleIdentifier:(id)arg1;

@end
