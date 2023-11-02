
@interface DODMLASRSchemaDODMLASRPersonalizationExperimentStarted : SISchemaInstrumentationMessage {
    int  _deviceThermalState;
    bool  _exists;
    struct { 
        unsigned int exists : 1; 
        unsigned int deviceThermalState : 1; 
    }  _has;
}

@property (nonatomic) int deviceThermalState;
@property (nonatomic) bool exists;
@property (nonatomic) bool hasDeviceThermalState;
@property (nonatomic) bool hasExists;
@property (nonatomic, readonly) NSData *jsonData;

- (void)deleteDeviceThermalState;
- (void)deleteExists;
- (int)deviceThermalState;
- (id)dictionaryRepresentation;
- (bool)exists;
- (bool)hasDeviceThermalState;
- (bool)hasExists;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setDeviceThermalState:(int)arg1;
- (void)setExists:(bool)arg1;
- (void)setHasDeviceThermalState:(bool)arg1;
- (void)setHasExists:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
