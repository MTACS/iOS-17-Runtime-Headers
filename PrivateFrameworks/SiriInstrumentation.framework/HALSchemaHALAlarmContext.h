
@interface HALSchemaHALAlarmContext : SISchemaInstrumentationMessage {
    struct { 
        unsigned int timeSinceAlarmFiredInSeconds : 1; 
    }  _has;
    unsigned long long  _timeSinceAlarmFiredInSeconds;
}

@property (nonatomic) bool hasTimeSinceAlarmFiredInSeconds;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned long long timeSinceAlarmFiredInSeconds;

- (void)deleteTimeSinceAlarmFiredInSeconds;
- (id)dictionaryRepresentation;
- (bool)hasTimeSinceAlarmFiredInSeconds;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasTimeSinceAlarmFiredInSeconds:(bool)arg1;
- (void)setTimeSinceAlarmFiredInSeconds:(unsigned long long)arg1;
- (id)suppressMessageUnderConditions;
- (unsigned long long)timeSinceAlarmFiredInSeconds;
- (void)writeTo:(id)arg1;

@end
