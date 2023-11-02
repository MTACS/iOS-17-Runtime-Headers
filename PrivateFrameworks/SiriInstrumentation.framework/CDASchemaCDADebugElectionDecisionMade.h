
@interface CDASchemaCDADebugElectionDecisionMade : SISchemaInstrumentationMessage {
    NSArray * _advertisementDatas;
    unsigned int  _deviceGroup;
    struct { 
        unsigned int isCrossDeviceArbitrationAllowed : 1; 
        unsigned int deviceGroup : 1; 
    }  _has;
    bool  _isCrossDeviceArbitrationAllowed;
}

@property (nonatomic, copy) NSArray *advertisementDatas;
@property (nonatomic) unsigned int deviceGroup;
@property (nonatomic) bool hasDeviceGroup;
@property (nonatomic) bool hasIsCrossDeviceArbitrationAllowed;
@property (nonatomic) bool isCrossDeviceArbitrationAllowed;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (void)addAdvertisementData:(id)arg1;
- (id)advertisementDataAtIndex:(unsigned long long)arg1;
- (unsigned long long)advertisementDataCount;
- (id)advertisementDatas;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearAdvertisementData;
- (void)deleteAdvertisementData;
- (void)deleteDeviceGroup;
- (void)deleteIsCrossDeviceArbitrationAllowed;
- (unsigned int)deviceGroup;
- (id)dictionaryRepresentation;
- (bool)hasDeviceGroup;
- (bool)hasIsCrossDeviceArbitrationAllowed;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isCrossDeviceArbitrationAllowed;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAdvertisementDatas:(id)arg1;
- (void)setDeviceGroup:(unsigned int)arg1;
- (void)setHasDeviceGroup:(bool)arg1;
- (void)setHasIsCrossDeviceArbitrationAllowed:(bool)arg1;
- (void)setIsCrossDeviceArbitrationAllowed:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
