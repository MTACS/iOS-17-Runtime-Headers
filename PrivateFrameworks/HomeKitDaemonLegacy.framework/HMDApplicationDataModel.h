
@interface HMDApplicationDataModel : HMDBackingStoreModelObject

@property (nonatomic, retain) NSDictionary *appDataDictionary;

+ (id)properties;
+ (id)schemaHashRoot;

@end
