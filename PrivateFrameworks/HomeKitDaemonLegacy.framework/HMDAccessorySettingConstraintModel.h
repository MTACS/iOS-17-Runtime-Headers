
@interface HMDAccessorySettingConstraintModel : HMDBackingStoreModelObject

@property (nonatomic, copy) NSNumber *type;
@property (nonatomic, copy) NSData *value;

+ (id)properties;
+ (id)schemaHashRoot;

@end
