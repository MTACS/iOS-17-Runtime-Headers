
@interface LNIntentsValueType : LNValueType {
    long long  _typeIdentifier;
}

@property (nonatomic, readonly) long long typeIdentifier;
@property (nonatomic, readonly, copy) NSString *typeIdentifierAsString;

// Image: /System/Library/PrivateFrameworks/LinkMetadata.framework/LinkMetadata

+ (id)applicationValueType;
+ (id)calendarEventValueType;
+ (id)currencyAmountValueType;
+ (id)environmentValueType;
+ (id)fileValueType;
+ (id)mediaItemValueType;
+ (id)mediaSearchValueType;
+ (id)messageConversationValueType;
+ (id)noteValueType;
+ (id)notificationValueType;
+ (id)objectClassesForCoding;
+ (id)paymentMethodValueType;
+ (id)personValueType;
+ (id)supportedClassesByTypeIdentifier;
+ (bool)supportsSecureCoding;
+ (id)taskListValueType;
+ (id)taskValueType;
+ (id)timerValueType;

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
- (id)wf_contentItemFromLinkValue:(id)arg1 appBundleIdentifier:(id)arg2 displayedBundleIdentifier:(id)arg3;
- (id)wf_titleWithCustomIntentSerializedRepresentation:(id)arg1;

@end
