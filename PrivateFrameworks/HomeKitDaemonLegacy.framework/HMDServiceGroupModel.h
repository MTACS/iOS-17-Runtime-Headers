
@interface HMDServiceGroupModel : HMDBackingStoreModelObject

@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSArray *services;

+ (id)properties;

- (id)dependentUUIDs;

@end
