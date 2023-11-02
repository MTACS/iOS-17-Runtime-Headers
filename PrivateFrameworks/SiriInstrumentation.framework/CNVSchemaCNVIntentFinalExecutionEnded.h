
@interface CNVSchemaCNVIntentFinalExecutionEnded : SISchemaInstrumentationMessage {
    int  _bypassReason;
    int  _eagerStatus;
    struct { 
        unsigned int eagerStatus : 1; 
        unsigned int bypassReason : 1; 
        unsigned int maxRss : 1; 
    }  _has;
    unsigned long long  _maxRss;
}

@property (nonatomic) int bypassReason;
@property (nonatomic) int eagerStatus;
@property (nonatomic) bool hasBypassReason;
@property (nonatomic) bool hasEagerStatus;
@property (nonatomic) bool hasMaxRss;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned long long maxRss;

- (int)bypassReason;
- (void)deleteBypassReason;
- (void)deleteEagerStatus;
- (void)deleteMaxRss;
- (id)dictionaryRepresentation;
- (int)eagerStatus;
- (bool)hasBypassReason;
- (bool)hasEagerStatus;
- (bool)hasMaxRss;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (unsigned long long)maxRss;
- (bool)readFrom:(id)arg1;
- (void)setBypassReason:(int)arg1;
- (void)setEagerStatus:(int)arg1;
- (void)setHasBypassReason:(bool)arg1;
- (void)setHasEagerStatus:(bool)arg1;
- (void)setHasMaxRss:(bool)arg1;
- (void)setMaxRss:(unsigned long long)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
