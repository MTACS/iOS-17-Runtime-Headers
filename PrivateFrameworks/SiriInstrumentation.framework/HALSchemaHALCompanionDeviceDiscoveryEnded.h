
@interface HALSchemaHALCompanionDeviceDiscoveryEnded : SISchemaInstrumentationMessage {
    int  _deviceProximity;
    int  _discoveryType;
    struct { 
        unsigned int discoveryType : 1; 
        unsigned int isMeDevice : 1; 
        unsigned int hasOtheriOSActiveDevices : 1; 
        unsigned int hasNullPeerIdentityServicesId : 1; 
        unsigned int deviceProximity : 1; 
    }  _has;
    bool  _hasNullPeerIdentityServicesId;
    bool  _hasOtheriOSActiveDevices;
    bool  _isMeDevice;
}

@property (nonatomic) int deviceProximity;
@property (nonatomic) int discoveryType;
@property (nonatomic) bool hasDeviceProximity;
@property (nonatomic) bool hasDiscoveryType;
@property (nonatomic) bool hasHasNullPeerIdentityServicesId;
@property (nonatomic) bool hasHasOtheriOSActiveDevices;
@property (nonatomic) bool hasIsMeDevice;
@property (nonatomic) bool hasNullPeerIdentityServicesId;
@property (nonatomic) bool hasOtheriOSActiveDevices;
@property (nonatomic) bool isMeDevice;
@property (nonatomic, readonly) NSData *jsonData;

- (void)deleteDeviceProximity;
- (void)deleteDiscoveryType;
- (void)deleteHasNullPeerIdentityServicesId;
- (void)deleteHasOtheriOSActiveDevices;
- (void)deleteIsMeDevice;
- (int)deviceProximity;
- (id)dictionaryRepresentation;
- (int)discoveryType;
- (bool)hasDeviceProximity;
- (bool)hasDiscoveryType;
- (bool)hasHasNullPeerIdentityServicesId;
- (bool)hasHasOtheriOSActiveDevices;
- (bool)hasIsMeDevice;
- (bool)hasNullPeerIdentityServicesId;
- (bool)hasOtheriOSActiveDevices;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isMeDevice;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setDeviceProximity:(int)arg1;
- (void)setDiscoveryType:(int)arg1;
- (void)setHasDeviceProximity:(bool)arg1;
- (void)setHasDiscoveryType:(bool)arg1;
- (void)setHasHasNullPeerIdentityServicesId:(bool)arg1;
- (void)setHasHasOtheriOSActiveDevices:(bool)arg1;
- (void)setHasIsMeDevice:(bool)arg1;
- (void)setHasNullPeerIdentityServicesId:(bool)arg1;
- (void)setHasOtheriOSActiveDevices:(bool)arg1;
- (void)setIsMeDevice:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
