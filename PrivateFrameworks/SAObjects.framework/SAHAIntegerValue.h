
@interface SAHAIntegerValue : SAHAAttributeValue

@property (nonatomic, readonly) NSString *description;
@property (nonatomic) long long value;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)integerValue;
+ (id)integerValueWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setValue:(long long)arg1;
- (long long)value;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

- (id)hm_shortDescription;

// Image: /System/Library/PrivateFrameworks/HomeAutomationInternal.framework/HomeAutomationInternal

- (id)description;

@end
