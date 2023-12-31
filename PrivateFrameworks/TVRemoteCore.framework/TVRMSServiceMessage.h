
@interface TVRMSServiceMessage : PBCodable <NSCopying> {
    NSString * _displayName;
    struct { 
        unsigned int port : 1; 
        unsigned int serviceDiscoverySource : 1; 
        unsigned int serviceLegacyFlags : 1; 
        unsigned int serviceType : 1; 
    }  _has;
    NSString * _homeSharingGroupKey;
    NSString * _hostName;
    NSString * _networkName;
    int  _port;
    int  _serviceDiscoverySource;
    int  _serviceLegacyFlags;
    int  _serviceType;
}

@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, readonly) bool hasDisplayName;
@property (nonatomic, readonly) bool hasHomeSharingGroupKey;
@property (nonatomic, readonly) bool hasHostName;
@property (nonatomic, readonly) bool hasNetworkName;
@property (nonatomic) bool hasPort;
@property (nonatomic) bool hasServiceDiscoverySource;
@property (nonatomic) bool hasServiceLegacyFlags;
@property (nonatomic) bool hasServiceType;
@property (nonatomic, retain) NSString *homeSharingGroupKey;
@property (nonatomic, retain) NSString *hostName;
@property (nonatomic, retain) NSString *networkName;
@property (nonatomic) int port;
@property (nonatomic) int serviceDiscoverySource;
@property (nonatomic) int serviceLegacyFlags;
@property (nonatomic) int serviceType;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayName;
- (bool)hasDisplayName;
- (bool)hasHomeSharingGroupKey;
- (bool)hasHostName;
- (bool)hasNetworkName;
- (bool)hasPort;
- (bool)hasServiceDiscoverySource;
- (bool)hasServiceLegacyFlags;
- (bool)hasServiceType;
- (unsigned long long)hash;
- (id)homeSharingGroupKey;
- (id)hostName;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)networkName;
- (int)port;
- (bool)readFrom:(id)arg1;
- (int)serviceDiscoverySource;
- (int)serviceLegacyFlags;
- (int)serviceType;
- (void)setDisplayName:(id)arg1;
- (void)setHasPort:(bool)arg1;
- (void)setHasServiceDiscoverySource:(bool)arg1;
- (void)setHasServiceLegacyFlags:(bool)arg1;
- (void)setHasServiceType:(bool)arg1;
- (void)setHomeSharingGroupKey:(id)arg1;
- (void)setHostName:(id)arg1;
- (void)setNetworkName:(id)arg1;
- (void)setPort:(int)arg1;
- (void)setServiceDiscoverySource:(int)arg1;
- (void)setServiceLegacyFlags:(int)arg1;
- (void)setServiceType:(int)arg1;
- (void)writeTo:(id)arg1;

@end
