
@interface HMDCUWiFiDeviceWrapper : NSObject <HMDWACDevice, HMFLogging> {
    CUWiFiDevice * _cuWiFiDevice;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    CUWACSession * _wacSession;
    NSString * deviceID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *deviceID;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) bool isConfigured;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *ssid;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsAirPlay2;
@property (nonatomic, readonly) id underlyingDevice;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)cancelConfigurationWithCompletionHandler:(id /* block */)arg1;
- (id)description;
- (id)deviceID;
- (id)identifier;
- (id)initWithCUWiFiDevice:(id)arg1 dispatchQueue:(id)arg2;
- (bool)isConfigured;
- (id)logIdentifier;
- (id)name;
- (id)ssid;
- (void)startConfigurationWithCompletionHandler:(id /* block */)arg1;
- (bool)supportsAirPlay2;
- (id)underlyingDevice;

@end
