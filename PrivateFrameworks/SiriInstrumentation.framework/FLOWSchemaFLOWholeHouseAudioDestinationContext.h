
@interface FLOWSchemaFLOWholeHouseAudioDestinationContext : SISchemaInstrumentationMessage {
    unsigned int  _deviceSuccessCount;
    unsigned int  _eligibleDeviceCount;
    struct { 
        unsigned int eligibleDeviceCount : 1; 
        unsigned int deviceSuccessCount : 1; 
    }  _has;
}

@property (nonatomic) unsigned int deviceSuccessCount;
@property (nonatomic) unsigned int eligibleDeviceCount;
@property (nonatomic) bool hasDeviceSuccessCount;
@property (nonatomic) bool hasEligibleDeviceCount;
@property (nonatomic, readonly) NSData *jsonData;

- (void)deleteDeviceSuccessCount;
- (void)deleteEligibleDeviceCount;
- (unsigned int)deviceSuccessCount;
- (id)dictionaryRepresentation;
- (unsigned int)eligibleDeviceCount;
- (bool)hasDeviceSuccessCount;
- (bool)hasEligibleDeviceCount;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setDeviceSuccessCount:(unsigned int)arg1;
- (void)setEligibleDeviceCount:(unsigned int)arg1;
- (void)setHasDeviceSuccessCount:(bool)arg1;
- (void)setHasEligibleDeviceCount:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
