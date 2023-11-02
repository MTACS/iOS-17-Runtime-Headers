
@interface SICSchemaProvisionalSICInvocationContext : SISchemaInstrumentationMessage {
    SICSchemaProvisionalSICInvocationCancelled * _cancelled;
    SICSchemaProvisionalSICInvocationEnded * _ended;
    bool  _hasCancelled;
    bool  _hasEnded;
    bool  _hasStartedOrChanged;
    SICSchemaProvisionalSICInvocationStarted * _startedOrChanged;
    unsigned long long  _whichContextevent;
}

@property (nonatomic, retain) SICSchemaProvisionalSICInvocationCancelled *cancelled;
@property (nonatomic, retain) SICSchemaProvisionalSICInvocationEnded *ended;
@property (nonatomic) bool hasCancelled;
@property (nonatomic) bool hasEnded;
@property (nonatomic) bool hasStartedOrChanged;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SICSchemaProvisionalSICInvocationStarted *startedOrChanged;
@property (nonatomic, readonly) unsigned long long whichContextevent;

- (void).cxx_destruct;
- (id)cancelled;
- (void)deleteCancelled;
- (void)deleteEnded;
- (void)deleteStartedOrChanged;
- (id)dictionaryRepresentation;
- (id)ended;
- (bool)hasCancelled;
- (bool)hasEnded;
- (bool)hasStartedOrChanged;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setCancelled:(id)arg1;
- (void)setEnded:(id)arg1;
- (void)setHasCancelled:(bool)arg1;
- (void)setHasEnded:(bool)arg1;
- (void)setHasStartedOrChanged:(bool)arg1;
- (void)setStartedOrChanged:(id)arg1;
- (id)startedOrChanged;
- (unsigned long long)whichContextevent;
- (void)writeTo:(id)arg1;

@end
