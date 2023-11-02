
@interface HMDUserAccessCodeModel : HMDBackingStoreModelObject

@property (retain) NSUUID *changedByUserUUID;
@property (copy) NSString *value;

+ (id)modelUUIDWithUUID:(id)arg1;
+ (id)properties;

- (id)initWithUserUUID:(id)arg1;

@end
