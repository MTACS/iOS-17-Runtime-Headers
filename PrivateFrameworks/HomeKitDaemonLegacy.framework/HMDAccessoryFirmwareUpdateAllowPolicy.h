
@interface HMDAccessoryFirmwareUpdateAllowPolicy : HMDAccessoryFirmwareUpdatePolicy <HMFLogging>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logCategory;

@end
