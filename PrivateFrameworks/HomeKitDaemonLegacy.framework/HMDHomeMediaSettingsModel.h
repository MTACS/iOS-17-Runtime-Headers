
@interface HMDHomeMediaSettingsModel : HMDHomeSettingsBaseModel

@property (nonatomic, copy) NSString *mediaPassword;
@property (nonatomic, copy) NSNumber *mediaPeerToPeerEnabled;
@property (nonatomic, copy) NSNumber *minimumMediaUserPrivilege;

+ (id)defaultModelForHomeUUID:(id)arg1;
+ (id)modelIDForHomeUUID:(id)arg1;
+ (id)modelNamespace;
+ (id)properties;

@end
