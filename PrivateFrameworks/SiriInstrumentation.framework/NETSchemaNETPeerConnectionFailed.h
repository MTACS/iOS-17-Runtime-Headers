
@interface NETSchemaNETPeerConnectionFailed : SISchemaInstrumentationMessage {
    NSArray * _connectedBtDevices;
    struct { 
        unsigned int isCloudConnected : 1; 
        unsigned int isConnected : 1; 
        unsigned int hasDevice : 1; 
        unsigned int timeSinceLastNearbyChangeInSeconds : 1; 
        unsigned int isNearby : 1; 
        unsigned int isPreferringBtClassic : 1; 
    }  _has;
    bool  _hasDevice;
    bool  _isCloudConnected;
    bool  _isConnected;
    bool  _isNearby;
    bool  _isPreferringBtClassic;
    double  _timeSinceLastNearbyChangeInSeconds;
}

@property (nonatomic, copy) NSArray *connectedBtDevices;
@property (nonatomic) bool hasDevice;
@property (nonatomic) bool hasHasDevice;
@property (nonatomic) bool hasIsCloudConnected;
@property (nonatomic) bool hasIsConnected;
@property (nonatomic) bool hasIsNearby;
@property (nonatomic) bool hasIsPreferringBtClassic;
@property (nonatomic) bool hasTimeSinceLastNearbyChangeInSeconds;
@property (nonatomic) bool isCloudConnected;
@property (nonatomic) bool isConnected;
@property (nonatomic) bool isNearby;
@property (nonatomic) bool isPreferringBtClassic;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) double timeSinceLastNearbyChangeInSeconds;

- (void).cxx_destruct;
- (void)addConnectedBtDevices:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearConnectedBtDevices;
- (id)connectedBtDevices;
- (id)connectedBtDevicesAtIndex:(unsigned long long)arg1;
- (unsigned long long)connectedBtDevicesCount;
- (void)deleteConnectedBtDevices;
- (void)deleteHasDevice;
- (void)deleteIsCloudConnected;
- (void)deleteIsConnected;
- (void)deleteIsNearby;
- (void)deleteIsPreferringBtClassic;
- (void)deleteTimeSinceLastNearbyChangeInSeconds;
- (id)dictionaryRepresentation;
- (bool)hasDevice;
- (bool)hasHasDevice;
- (bool)hasIsCloudConnected;
- (bool)hasIsConnected;
- (bool)hasIsNearby;
- (bool)hasIsPreferringBtClassic;
- (bool)hasTimeSinceLastNearbyChangeInSeconds;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isCloudConnected;
- (bool)isConnected;
- (bool)isEqual:(id)arg1;
- (bool)isNearby;
- (bool)isPreferringBtClassic;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setConnectedBtDevices:(id)arg1;
- (void)setHasDevice:(bool)arg1;
- (void)setHasHasDevice:(bool)arg1;
- (void)setHasIsCloudConnected:(bool)arg1;
- (void)setHasIsConnected:(bool)arg1;
- (void)setHasIsNearby:(bool)arg1;
- (void)setHasIsPreferringBtClassic:(bool)arg1;
- (void)setHasTimeSinceLastNearbyChangeInSeconds:(bool)arg1;
- (void)setIsCloudConnected:(bool)arg1;
- (void)setIsConnected:(bool)arg1;
- (void)setIsNearby:(bool)arg1;
- (void)setIsPreferringBtClassic:(bool)arg1;
- (void)setTimeSinceLastNearbyChangeInSeconds:(double)arg1;
- (id)suppressMessageUnderConditions;
- (double)timeSinceLastNearbyChangeInSeconds;
- (void)writeTo:(id)arg1;

@end
