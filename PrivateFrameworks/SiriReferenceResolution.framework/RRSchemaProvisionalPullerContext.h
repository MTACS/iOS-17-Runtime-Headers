
@interface RRSchemaProvisionalPullerContext : SISchemaInstrumentationMessage {
    RRSchemaProvisionalPullerEnded * _ended;
    RRSchemaProvisionalPullerFailed * _failed;
    bool  _hasEnded;
    bool  _hasFailed;
    bool  _hasStarted;
    RRSchemaProvisionalPullerStarted * _started;
    unsigned long long  _whichContextevent;
}

@property (nonatomic, retain) RRSchemaProvisionalPullerEnded *ended;
@property (nonatomic, retain) RRSchemaProvisionalPullerFailed *failed;
@property (nonatomic) bool hasEnded;
@property (nonatomic) bool hasFailed;
@property (nonatomic) bool hasStarted;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) RRSchemaProvisionalPullerStarted *started;
@property (nonatomic, readonly) unsigned long long whichContextevent;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)ended;
- (id)failed;
- (bool)hasEnded;
- (bool)hasFailed;
- (bool)hasStarted;
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
- (void)setHasStarted:(bool)arg1;
- (void)setStarted:(id)arg1;
- (id)started;
- (unsigned long long)whichContextevent;
- (void)writeTo:(id)arg1;

@end
