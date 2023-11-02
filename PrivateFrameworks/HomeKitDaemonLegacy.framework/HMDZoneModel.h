
@interface HMDZoneModel : HMDBackingStoreModelObject

@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSArray *roomUUIDs;

+ (id)properties;

- (id)dependentUUIDs;

@end
