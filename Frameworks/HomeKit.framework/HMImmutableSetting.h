
@interface HMImmutableSetting : NSObject <HMFObject, HMMessageEncoding> {
    NSString * _keyPath;
    bool  _readOnly;
}

@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *keyPath;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (getter=isReadOnly, readonly) bool readOnly;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)shortDescription;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)description;
- (unsigned long long)hash;
- (id)initWithKeyPath:(id)arg1 readOnly:(bool)arg2;
- (id)initWithPayload:(id)arg1;
- (id)initWithProtoPayload:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isReadOnly;
- (id)keyPath;
- (id)payloadCopy;
- (id)privateDescription;
- (id)protoPayload;
- (id)settingValue;
- (id)settingWithSettingValue:(id)arg1;
- (id)shortDescription;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)homeKitAccessorySettingValueForRawValue:(id)arg1;
- (id)value;

@end
