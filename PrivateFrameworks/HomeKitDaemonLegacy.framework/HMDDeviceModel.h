
@interface HMDDeviceModel : HMDBackingStoreModelObject

@property (nonatomic, readonly) NSArray *deviceHandles;
@property (nonatomic, copy) NSArray *handles;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) HMFProductInfo *productInfo;
@property (nonatomic, copy) HMDRPIdentity *rpIdentity;
@property (nonatomic, copy) HMDHomeKitVersion *version;

+ (id)properties;
+ (id)schemaHashRoot;

- (id)deviceHandles;
- (bool)diff:(id)arg1 differingFields:(id*)arg2;

@end
