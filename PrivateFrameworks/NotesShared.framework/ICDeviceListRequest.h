
@interface ICDeviceListRequest : NSObject {
    ACAccount * _account;
    NSArray * _devices;
    bool  _didGetICloudDeviceList;
    NSString * _model;
    NSString * _modelDisplayName;
    NSString * _name;
    NSString * _softwareVersion;
    NSObject<OS_dispatch_semaphore> * _workSemaphore;
}

@property (nonatomic, retain) ACAccount *account;
@property (retain) NSArray *devices;
@property bool didGetICloudDeviceList;
@property (nonatomic, copy) NSString *model;
@property (nonatomic, copy) NSString *modelDisplayName;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *softwareVersion;
@property (retain) NSObject<OS_dispatch_semaphore> *workSemaphore;

+ (id)combineICloudDevices:(id)arg1 withCloudKitDevices:(id)arg2;
+ (id)filteredDevices:(id)arg1;
+ (id)setOfDeviceNamesFromDevices:(id)arg1;

- (void).cxx_destruct;
- (id)account;
- (bool)anyDeviceNeedsUpgrade;
- (bool)anyDeviceNotUpgradable;
- (bool)anyOSXDeviceNotUpgraded;
- (id)devices;
- (bool)didGetICloudDeviceList;
- (void)fetchCloudKitDevicesWithCompletionBlock:(id /* block */)arg1;
- (void)fetchICloudDevicesWithCompletionBlock:(id /* block */)arg1;
- (void)fetchWithCompletionBlock:(id /* block */)arg1;
- (id)init;
- (id)initWithAccount:(id)arg1;
- (id)model;
- (id)modelDisplayName;
- (id)name;
- (void)setAccount:(id)arg1;
- (void)setDevices:(id)arg1;
- (void)setDidGetICloudDeviceList:(bool)arg1;
- (void)setModel:(id)arg1;
- (void)setModelDisplayName:(id)arg1;
- (void)setName:(id)arg1;
- (void)setSoftwareVersion:(id)arg1;
- (void)setWorkSemaphore:(id)arg1;
- (id)softwareVersion;
- (bool)waitForFetchWithTimeout:(double)arg1;
- (id)workSemaphore;

@end
