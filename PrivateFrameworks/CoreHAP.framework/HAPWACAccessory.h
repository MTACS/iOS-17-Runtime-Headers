
@interface HAPWACAccessory : HMFObject {
    unsigned long long  _authFeatures;
    NSData * _bssid;
    CUWiFiDevice * _cuWiFiDevice;
    NSString * _deviceId;
    double  _discoveryTime;
    bool  _homeKitPaired;
    NSUUID * _identifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _manufacturer;
    NSString * _model;
    NSString * _name;
    bool  _pairSetupWAC;
    NSDictionary * _rawScanResult;
    bool  _requiresOwnershipToken;
    NSNumber * _rssi;
    NSData * _setupHash;
    NSString * _ssid;
    unsigned long long  _supportedWiFiBands;
    bool  _supportsAirPlay;
    unsigned long long  _version;
    NSNumber * _wacCategory;
}

@property (nonatomic, readonly) unsigned long long authFeatures;
@property (nonatomic, readonly) NSData *bssid;
@property (nonatomic, readonly) CUWiFiDevice *cuWiFiDevice;
@property (nonatomic, readonly) NSString *deviceId;
@property (nonatomic) double discoveryTime;
@property (nonatomic, readonly) bool homeKitPaired;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) bool isAirPlayAccessory;
@property (nonatomic, readonly) bool isHomeKitAccessory;
@property (nonatomic, readonly) NSString *manufacturer;
@property (nonatomic, readonly) NSString *model;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) bool pairSetupWAC;
@property (nonatomic, readonly) NSDictionary *rawScanResult;
@property (nonatomic, readonly) bool requiresOwnershipToken;
@property (nonatomic, readonly) NSNumber *rssi;
@property (nonatomic, readonly) NSData *setupHash;
@property (nonatomic, readonly) NSString *ssid;
@property (nonatomic, readonly) unsigned long long supportedWiFiBands;
@property (nonatomic, readonly) bool supportsAirPlay;
@property (nonatomic, readonly) bool supportsCertAuth;
@property (nonatomic, readonly) bool supportsLegacyWAC;
@property (nonatomic, readonly) bool supportsTokenAuth;
@property (nonatomic, readonly) bool supportsWAC2;
@property (nonatomic, readonly) unsigned long long version;
@property (nonatomic, readonly) NSNumber *wacCategory;

- (void).cxx_destruct;
- (void)__setupSupportedFlags:(unsigned int)arg1;
- (unsigned long long)authFeatures;
- (id)bssid;
- (id)cuWiFiDevice;
- (id)description;
- (id)deviceId;
- (double)discoveryTime;
- (bool)homeKitPaired;
- (id)identifier;
- (id)initWithName:(id)arg1 identifier:(id)arg2 category:(id)arg3 ssid:(id)arg4 deviceId:(id)arg5 flags:(unsigned int)arg6;
- (id)initWithWiFiDevice:(id)arg1;
- (bool)isAirPlayAccessory;
- (bool)isHomeKitAccessory;
- (id)manufacturer;
- (id)model;
- (id)name;
- (bool)pairSetupWAC;
- (id)rawScanResult;
- (bool)requiresOwnershipToken;
- (id)rssi;
- (void)setDiscoveryTime:(double)arg1;
- (id)setupHash;
- (id)ssid;
- (unsigned long long)supportedWiFiBands;
- (bool)supportsAirPlay;
- (bool)supportsCertAuth;
- (bool)supportsLegacyWAC;
- (bool)supportsTokenAuth;
- (bool)supportsWAC2;
- (void)updateWithHAPWACAccessory:(id)arg1;
- (unsigned long long)version;
- (id)wacCategory;

@end
