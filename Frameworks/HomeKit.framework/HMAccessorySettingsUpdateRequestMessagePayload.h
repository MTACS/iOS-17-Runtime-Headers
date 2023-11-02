
@interface HMAccessorySettingsUpdateRequestMessagePayload : NSObject <HMFLogging, HMFObject, HMMessageEncoding> {
    NSUUID * _accessoryUUID;
    NSString * _keyPath;
    HMImmutableSettingValue * _settingValue;
}

@property (readonly, copy) NSUUID *accessoryUUID;
@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *keyPath;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly) HMImmutableSettingValue *settingValue;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)shortDescription;

- (void).cxx_destruct;
- (id)accessoryUUID;
- (id)attributeDescriptions;
- (id)description;
- (unsigned long long)hash;
- (id)initWithAccessoryUUID:(id)arg1 keyPath:(id)arg2 settingValue:(id)arg3;
- (id)initWithPayload:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)keyPath;
- (id)payloadCopy;
- (id)privateDescription;
- (id)settingValue;
- (id)shortDescription;

@end
