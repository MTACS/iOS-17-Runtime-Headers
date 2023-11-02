
@interface RRSchemaProvisionalRREntityPoolResolveContext : SISchemaInstrumentationMessage {
    RRSchemaProvisionalRREntityPoolResolveEnded * _ended;
    RRSchemaProvisionalRREntityPoolResolveFailed * _failed;
    bool  _hasEnded;
    bool  _hasFailed;
    bool  _hasStartedOrChanged;
    RRSchemaProvisionalRREntityPoolResolveStarted * _startedOrChanged;
    unsigned long long  _whichContextevent;
}

@property (nonatomic, retain) RRSchemaProvisionalRREntityPoolResolveEnded *ended;
@property (nonatomic, retain) RRSchemaProvisionalRREntityPoolResolveFailed *failed;
@property (nonatomic) bool hasEnded;
@property (nonatomic) bool hasFailed;
@property (nonatomic) bool hasStartedOrChanged;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) RRSchemaProvisionalRREntityPoolResolveStarted *startedOrChanged;
@property (nonatomic, readonly) unsigned long long whichContextevent;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)ended;
- (id)failed;
- (bool)hasEnded;
- (bool)hasFailed;
- (bool)hasStartedOrChanged;
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
- (void)setHasStartedOrChanged:(bool)arg1;
- (void)setStartedOrChanged:(id)arg1;
- (id)startedOrChanged;
- (unsigned long long)whichContextevent;
- (void)writeTo:(id)arg1;

@end
