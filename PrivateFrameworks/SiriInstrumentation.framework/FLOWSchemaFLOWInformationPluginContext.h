
@interface FLOWSchemaFLOWInformationPluginContext : SISchemaInstrumentationMessage {
    int  _eventType;
    NSString * _executedPegasusDomain;
    struct { 
        unsigned int eventType : 1; 
    }  _has;
    bool  _hasExecutedPegasusDomain;
}

@property (nonatomic) int eventType;
@property (nonatomic, copy) NSString *executedPegasusDomain;
@property (nonatomic) bool hasEventType;
@property (nonatomic) bool hasExecutedPegasusDomain;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (void)deleteEventType;
- (void)deleteExecutedPegasusDomain;
- (id)dictionaryRepresentation;
- (int)eventType;
- (id)executedPegasusDomain;
- (bool)hasEventType;
- (bool)hasExecutedPegasusDomain;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setEventType:(int)arg1;
- (void)setExecutedPegasusDomain:(id)arg1;
- (void)setHasEventType:(bool)arg1;
- (void)setHasExecutedPegasusDomain:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
