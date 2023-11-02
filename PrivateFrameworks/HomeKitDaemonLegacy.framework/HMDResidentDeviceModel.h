
@interface HMDResidentDeviceModel : HMDBackingStoreModelObject

@property (nonatomic, retain) NSString *changeToken;
@property (nonatomic, retain) NSNumber *confirmed;
@property (nonatomic, retain) HMDDevice *device;
@property (nonatomic, retain) NSString *deviceUUID;
@property (nonatomic, retain) NSNumber *enabled;

+ (id)properties;

@end
