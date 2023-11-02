
@interface HMDCapabilitiesController : NSObject <HMFLogging> {
    NSUUID * _accessoryUUID;
    HMAccessoryCapabilities * _currentAccessoryCapabilitiesInternal;
    HMResidentCapabilities * _currentResidentCapabilitiesInternal;
    <HMDCapabilitiesControllerDataSource> * _dataSource;
    NSUUID * _homeUUID;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (bool)areCurrentAccessoryCapabilitiesPresentAndDifferent:(id)arg1;
- (bool)areCurrentResidentCapabilitiesPresentAndDifferent:(id)arg1;
- (id)currentAccessoryCapabilities;
- (void)currentAccessoryDidBecomeAvailable;
- (id)currentResidentCapabilities;
- (void)didFinishConfiguringHomes;
- (void)didRemoveCurrentAccessory:(id)arg1;
- (id)encodedCurrentAccessoryCapabilities;
- (id)encodedCurrentResidentCapabilities;
- (id)initWithQueue:(id)arg1 dataSource:(id)arg2;
- (id)logIdentifier;
- (void)updateCurrentAccessoryCapabilities;

@end
