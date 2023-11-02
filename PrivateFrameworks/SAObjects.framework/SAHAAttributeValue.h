
@interface SAHAAttributeValue : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *units;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)attributeValue;
+ (id)attributeValueWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setUnits:(id)arg1;
- (id)units;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

- (id)hm_shortDescription;

@end
