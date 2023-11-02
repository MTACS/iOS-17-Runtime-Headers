
@interface HMDAccessorySettingModel : HMDBackingStoreModelObject

@property (nonatomic, copy) NSNumber *configurationVersion;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSNumber *properties;
@property (nonatomic, copy) NSNumber *type;
@property (nonatomic, copy) NSData *value;

+ (id)properties;
+ (id)schemaHashRoot;

@end
