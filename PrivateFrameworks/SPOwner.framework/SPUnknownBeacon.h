
@interface SPUnknownBeacon : NSObject <NSCopying, NSSecureCoding> {
    NSData * _advertisement;
    long long  _alertState;
    NSUUID * _beaconIdentifier;
    NSArray * _beaconLocations;
    unsigned long long  _capabilities;
    bool  _connected;
    SPHandle * _handle;
    NSUUID * _identifier;
    NSDate * _ignoresUntilDate;
    bool  _isAppleAudioAccessory;
    bool  _isIgnored;
    SPDiscoveredAccessoryMetadata * _metadata;
    NSString * _name;
    long long  _observationType;
    SPDiscoveredAccessoryProductInformation * _productInformation;
    NSDictionary * _taskInformation;
    NSDate * _triggerDate;
    NSString * _type;
}

@property (nonatomic, copy) NSData *advertisement;
@property (nonatomic) long long alertState;
@property (nonatomic, copy) NSUUID *beaconIdentifier;
@property (nonatomic, copy) NSArray *beaconLocations;
@property (nonatomic) unsigned long long capabilities;
@property (nonatomic) bool connected;
@property (nonatomic, copy) SPHandle *handle;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSDate *ignoresUntilDate;
@property (nonatomic) bool isAppleAudioAccessory;
@property (nonatomic) bool isIgnored;
@property (nonatomic, copy) SPDiscoveredAccessoryMetadata *metadata;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) long long observationType;
@property (nonatomic, copy) SPDiscoveredAccessoryProductInformation *productInformation;
@property (nonatomic, copy) NSDictionary *taskInformation;
@property (nonatomic, copy) NSDate *triggerDate;
@property (nonatomic, copy) NSString *type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)advertisement;
- (long long)alertState;
- (id)beaconIdentifier;
- (id)beaconLocations;
- (unsigned long long)capabilities;
- (bool)connected;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)handle;
- (unsigned long long)hash;
- (id)identifier;
- (id)ignoresUntilDate;
- (id)initWithCoder:(id)arg1;
- (bool)isAppleAudioAccessory;
- (bool)isEqual:(id)arg1;
- (bool)isIgnored;
- (id)metadata;
- (id)name;
- (long long)observationType;
- (id)productInformation;
- (void)setAdvertisement:(id)arg1;
- (void)setAlertState:(long long)arg1;
- (void)setBeaconIdentifier:(id)arg1;
- (void)setBeaconLocations:(id)arg1;
- (void)setCapabilities:(unsigned long long)arg1;
- (void)setConnected:(bool)arg1;
- (void)setHandle:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIgnoresUntilDate:(id)arg1;
- (void)setIsAppleAudioAccessory:(bool)arg1;
- (void)setIsIgnored:(bool)arg1;
- (void)setMetadata:(id)arg1;
- (void)setName:(id)arg1;
- (void)setObservationType:(long long)arg1;
- (void)setProductInformation:(id)arg1;
- (void)setTaskInformation:(id)arg1;
- (void)setTriggerDate:(id)arg1;
- (void)setType:(id)arg1;
- (id)taskInformation;
- (id)triggerDate;
- (id)type;

@end
