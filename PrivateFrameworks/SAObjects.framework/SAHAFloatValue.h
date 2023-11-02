
@interface SAHAFloatValue : SAHAAttributeValue

@property (nonatomic, readonly) NSString *description;
@property (nonatomic) float value;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)floatValue;
+ (id)floatValueWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setValue:(float)arg1;
- (float)value;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

- (id)hm_shortDescription;

// Image: /System/Library/PrivateFrameworks/HomeAutomationInternal.framework/HomeAutomationInternal

- (id)description;

@end
