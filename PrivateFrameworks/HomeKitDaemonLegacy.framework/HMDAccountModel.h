
@interface HMDAccountModel : HMDBackingStoreModelObject

@property (nonatomic, copy) HMDAccountIdentifier *identifier;

+ (id)properties;
+ (id)schemaHashRoot;

@end
