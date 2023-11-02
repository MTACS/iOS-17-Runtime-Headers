
@interface HALSchemaHALTimerContext : SISchemaInstrumentationMessage {
    struct { 
        unsigned int timeSinceTimerFiredInSeconds : 1; 
    }  _has;
    unsigned long long  _timeSinceTimerFiredInSeconds;
}

@property (nonatomic) bool hasTimeSinceTimerFiredInSeconds;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned long long timeSinceTimerFiredInSeconds;

- (void)deleteTimeSinceTimerFiredInSeconds;
- (id)dictionaryRepresentation;
- (bool)hasTimeSinceTimerFiredInSeconds;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasTimeSinceTimerFiredInSeconds:(bool)arg1;
- (void)setTimeSinceTimerFiredInSeconds:(unsigned long long)arg1;
- (id)suppressMessageUnderConditions;
- (unsigned long long)timeSinceTimerFiredInSeconds;
- (void)writeTo:(id)arg1;

@end
