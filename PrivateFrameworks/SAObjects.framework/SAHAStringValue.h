
@interface SAHAStringValue : SAHAAttributeValue

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, copy) NSString *value;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)stringValue;
+ (id)stringValueWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setValue:(id)arg1;
- (id)value;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

- (id)hm_shortDescription;

// Image: /System/Library/PrivateFrameworks/HomeAutomationInternal.framework/HomeAutomationInternal

- (id)description;

@end
