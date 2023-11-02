
@interface HMDAirPlay2Preference : HMFPreference <HMFObject> {
    HMFSystemPreference * _airPlayPreference;
    HMFSystemPreference * _homeKitPreference;
}

@property (readonly) HMFSystemPreference *airPlayPreference;
@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) HMFSystemPreference *homeKitPreference;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;

+ (void)loadEnableAirPlay2Accessories;

- (void).cxx_destruct;
- (id)airPlayPreference;
- (bool)boolValue;
- (id)homeKitPreference;
- (id)initWithKey:(id)arg1 options:(unsigned long long)arg2 defaultValue:(id)arg3;
- (id)numberValue;
- (id)propertyDescription;
- (id)stringValue;

@end
