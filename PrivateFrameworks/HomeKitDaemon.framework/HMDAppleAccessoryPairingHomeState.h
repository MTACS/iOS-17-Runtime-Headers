
@interface HMDAppleAccessoryPairingHomeState : HMFObject <NSSecureCoding> {
    HMDUnassociatedAppleMediaAccessory * _accessory;
    HMBCloudZoneID * _cloudZoneID;
    NSString * _configurationAppID;
    HMDDevice * _device;
    NSUUID * _deviceIdentifier;
    NSUUID * _homeUUID;
    HMSoftwareUpdateDescriptor * _lastPostedSoftwareUpdateDescriptor;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    unsigned long long  _state;
}

@property (nonatomic, readonly) HMDUnassociatedAppleMediaAccessory *accessory;
@property (nonatomic, readonly) HMBCloudZoneID *cloudZoneID;
@property (nonatomic, retain) NSString *configurationAppID;
@property (nonatomic, retain) HMDDevice *device;
@property (nonatomic, retain) NSUUID *deviceIdentifier;
@property (nonatomic, retain) NSUUID *homeUUID;
@property (nonatomic, retain) HMSoftwareUpdateDescriptor *lastPostedSoftwareUpdateDescriptor;
@property (nonatomic) unsigned long long state;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessory;
- (id)cloudZoneID;
- (id)configurationAppID;
- (id)device;
- (id)deviceIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)homeUUID;
- (id)initWithCloudZoneID:(id)arg1 accessory:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)lastPostedSoftwareUpdateDescriptor;
- (void)setConfigurationAppID:(id)arg1;
- (void)setDevice:(id)arg1;
- (void)setDeviceIdentifier:(id)arg1;
- (void)setHomeUUID:(id)arg1;
- (void)setLastPostedSoftwareUpdateDescriptor:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (unsigned long long)state;

@end
