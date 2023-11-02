
@interface ORCHSchemaORCHCandidateRequestContext : SISchemaInstrumentationMessage {
    ORCHSchemaORCHCandidateRequestCancelled * _cancelled;
    bool  _hasCancelled;
    bool  _hasStarted;
    ORCHSchemaORCHCandidateRequestStarted * _started;
    unsigned long long  _whichContextevent;
}

@property (nonatomic, retain) ORCHSchemaORCHCandidateRequestCancelled *cancelled;
@property (nonatomic) bool hasCancelled;
@property (nonatomic) bool hasStarted;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) ORCHSchemaORCHCandidateRequestStarted *started;
@property (nonatomic, readonly) unsigned long long whichContextevent;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)cancelled;
- (void)deleteCancelled;
- (void)deleteStarted;
- (id)dictionaryRepresentation;
- (bool)hasCancelled;
- (bool)hasStarted;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setCancelled:(id)arg1;
- (void)setHasCancelled:(bool)arg1;
- (void)setHasStarted:(bool)arg1;
- (void)setStarted:(id)arg1;
- (id)started;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichContextevent;
- (void)writeTo:(id)arg1;

@end
