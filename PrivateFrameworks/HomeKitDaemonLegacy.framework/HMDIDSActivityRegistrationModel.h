
@interface HMDIDSActivityRegistrationModel : HMBModel

@property (nonatomic, retain) NSArray *subActivities;
@property (nonatomic, retain) NSUUID *subjectDeviceIdentifier;

+ (id)hmbProperties;
+ (id)hmbQueries;
+ (id)registeredDevicesQuery;

@end
