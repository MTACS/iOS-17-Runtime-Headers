
@interface HMDAccessoryNetworkProtectionGroupModel : HMDBackingStoreModelObject

@property (nonatomic, copy) NSNumber *category;
@property (nonatomic, copy) NSString *manufacturer;
@property (nonatomic, copy) NSNumber *targetProtectionMode;

+ (id)modelIDForHome:(id)arg1 manufacturer:(id)arg2 category:(id)arg3;
+ (id)modelNamespace;
+ (id)properties;
+ (id)shortDescription;

- (id)attributeDescriptions;
- (id)description;
- (id)privateDescription;
- (id)shortDescription;

@end
