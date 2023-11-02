
@interface NRDeviceOperationalProperties : NRDeviceProperties {
    NSArray * _allowedLinkSubtypes;
    NSArray * _allowedLinkTypes;
    bool  _allowsDirectToCloud;
    bool  _allowsPermittedClientsOnly;
    unsigned long long  _bluetoothEndpointType;
    unsigned long long  _bluetoothRole;
    bool  _handlesLinkRecommendations;
    bool  _isReachableOverWiFi;
    bool  _providesPhoneCallRelaySupport;
    unsigned long long  _proxyCapability;
    bool  _proxyProviderRequiresWiFi;
    bool  _requiresReachability;
    unsigned short  _version;
}

@property (nonatomic, retain) NSArray *allowedLinkSubtypes;
@property (nonatomic, retain) NSArray *allowedLinkTypes;
@property (nonatomic) bool allowsDirectToCloud;
@property (nonatomic) bool allowsPermittedClientsOnly;
@property (nonatomic) unsigned long long bluetoothEndpointType;
@property (nonatomic) unsigned long long bluetoothRole;
@property (nonatomic) bool handlesLinkRecommendations;
@property (nonatomic) bool isReachableOverWiFi;
@property (nonatomic) bool providesPhoneCallRelaySupport;
@property (nonatomic) unsigned long long proxyCapability;
@property (nonatomic) bool proxyProviderRequiresWiFi;
@property (nonatomic) bool requiresReachability;
@property (nonatomic) unsigned short version;

+ (id)copyPropertiesForDefaultPairedPhone;
+ (id)copyPropertiesForDefaultPairedWatch;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allowedLinkSubtypes;
- (id)allowedLinkTypes;
- (bool)allowsDirectToCloud;
- (bool)allowsPermittedClientsOnly;
- (unsigned long long)bluetoothEndpointType;
- (unsigned long long)bluetoothRole;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)handlesLinkRecommendations;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isReachableOverWiFi;
- (void)mergeProperties:(id)arg1;
- (bool)providesPhoneCallRelaySupport;
- (unsigned long long)proxyCapability;
- (bool)proxyProviderRequiresWiFi;
- (bool)requiresReachability;
- (void)resolve;
- (void)setAllowedLinkSubtypes:(id)arg1;
- (void)setAllowedLinkTypes:(id)arg1;
- (void)setAllowsDirectToCloud:(bool)arg1;
- (void)setAllowsPermittedClientsOnly:(bool)arg1;
- (void)setBluetoothEndpointType:(unsigned long long)arg1;
- (void)setBluetoothRole:(unsigned long long)arg1;
- (void)setHandlesLinkRecommendations:(bool)arg1;
- (void)setIsReachableOverWiFi:(bool)arg1;
- (void)setProvidesPhoneCallRelaySupport:(bool)arg1;
- (void)setProxyCapability:(unsigned long long)arg1;
- (void)setProxyProviderRequiresWiFi:(bool)arg1;
- (void)setRequiresReachability:(bool)arg1;
- (void)setVersion:(unsigned short)arg1;
- (unsigned short)version;

@end
