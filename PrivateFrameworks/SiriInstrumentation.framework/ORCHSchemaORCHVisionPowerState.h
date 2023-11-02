
@interface ORCHSchemaORCHVisionPowerState : SISchemaInstrumentationMessage {
    int  _blackboardUseCaseProfile;
    struct { 
        unsigned int blackboardUseCaseProfile : 1; 
        unsigned int thermalMitigationLevel : 1; 
    }  _has;
    int  _thermalMitigationLevel;
}

@property (nonatomic) int blackboardUseCaseProfile;
@property (nonatomic) bool hasBlackboardUseCaseProfile;
@property (nonatomic) bool hasThermalMitigationLevel;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int thermalMitigationLevel;

- (int)blackboardUseCaseProfile;
- (void)deleteBlackboardUseCaseProfile;
- (void)deleteThermalMitigationLevel;
- (id)dictionaryRepresentation;
- (bool)hasBlackboardUseCaseProfile;
- (bool)hasThermalMitigationLevel;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setBlackboardUseCaseProfile:(int)arg1;
- (void)setHasBlackboardUseCaseProfile:(bool)arg1;
- (void)setHasThermalMitigationLevel:(bool)arg1;
- (void)setThermalMitigationLevel:(int)arg1;
- (id)suppressMessageUnderConditions;
- (int)thermalMitigationLevel;
- (void)writeTo:(id)arg1;

@end
