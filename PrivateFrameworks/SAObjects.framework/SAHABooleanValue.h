
@interface SAHABooleanValue : SAHAAttributeValue

@property (nonatomic, readonly) NSString *description;
@property (nonatomic) bool value;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)booleanValue;
+ (id)booleanValueWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setValue:(bool)arg1;
- (bool)value;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

- (id)hm_shortDescription;

// Image: /System/Library/PrivateFrameworks/HomeAutomationInternal.framework/HomeAutomationInternal

- (id)description;

@end
