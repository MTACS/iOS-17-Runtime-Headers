
@interface HMDMediaSystemModel : HMDBackingStoreModelObject

@property (nonatomic, copy) NSString *configuredName;
@property (nonatomic, copy) NSArray *mediaSystemComponents;
@property (nonatomic, retain) NSString *name;

+ (id)properties;
+ (id)schemaHashRoot;

- (id)dependentUUIDs;

@end
