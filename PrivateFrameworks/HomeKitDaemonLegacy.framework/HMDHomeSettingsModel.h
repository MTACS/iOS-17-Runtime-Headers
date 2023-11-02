
@interface HMDHomeSettingsModel : HMDHomeSettingsBaseModel

@property (nonatomic, copy) NSNumber *automaticSoftwareUpdateEnabled;
@property (nonatomic, copy) NSNumber *automaticThirdPartyAccessorySoftwareUpdateEnabled;

+ (id)defaultModelForHomeUUID:(id)arg1;
+ (id)modelIDForHomeUUID:(id)arg1;
+ (id)modelNamespace;
+ (id)properties;

@end
