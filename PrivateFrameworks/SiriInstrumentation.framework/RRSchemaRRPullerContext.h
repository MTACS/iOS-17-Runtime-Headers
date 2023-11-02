
@interface RRSchemaRRPullerContext : SISchemaInstrumentationMessage {
    RRSchemaRRPullerEnded * _ended;
    RRSchemaRRPullerFailed * _failed;
    bool  _hasEnded;
    bool  _hasFailed;
    unsigned long long  _whichContextevent;
}

@property (nonatomic, retain) RRSchemaRRPullerEnded *ended;
@property (nonatomic, retain) RRSchemaRRPullerFailed *failed;
@property (nonatomic) bool hasEnded;
@property (nonatomic) bool hasFailed;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, readonly) unsigned long long whichContextevent;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteEnded;
- (void)deleteFailed;
- (id)dictionaryRepresentation;
- (id)ended;
- (id)failed;
- (bool)hasEnded;
- (bool)hasFailed;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setEnded:(id)arg1;
- (void)setFailed:(id)arg1;
- (void)setHasEnded:(bool)arg1;
- (void)setHasFailed:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichContextevent;
- (void)writeTo:(id)arg1;

@end
