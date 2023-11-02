
@interface POMMESSchemaPOMMESRequestContext : SISchemaInstrumentationMessage {
    POMMESSchemaPOMMESRequestUnableToHandle * _cancelled;
    POMMESSchemaPOMMESRequestEnded * _ended;
    POMMESSchemaPOMMESRequestFailed * _failed;
    bool  _hasCancelled;
    bool  _hasEnded;
    bool  _hasFailed;
    bool  _hasStartedOrChanged;
    POMMESSchemaPOMMESRequestStarted * _startedOrChanged;
    unsigned long long  _whichContextevent;
}

@property (nonatomic, retain) POMMESSchemaPOMMESRequestUnableToHandle *cancelled;
@property (nonatomic, retain) POMMESSchemaPOMMESRequestEnded *ended;
@property (nonatomic, retain) POMMESSchemaPOMMESRequestFailed *failed;
@property (nonatomic) bool hasCancelled;
@property (nonatomic) bool hasEnded;
@property (nonatomic) bool hasFailed;
@property (nonatomic) bool hasStartedOrChanged;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) POMMESSchemaPOMMESRequestStarted *startedOrChanged;
@property (nonatomic, readonly) unsigned long long whichContextevent;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)cancelled;
- (void)deleteCancelled;
- (void)deleteEnded;
- (void)deleteFailed;
- (void)deleteStartedOrChanged;
- (id)dictionaryRepresentation;
- (id)ended;
- (id)failed;
- (bool)hasCancelled;
- (bool)hasEnded;
- (bool)hasFailed;
- (bool)hasStartedOrChanged;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setCancelled:(id)arg1;
- (void)setEnded:(id)arg1;
- (void)setFailed:(id)arg1;
- (void)setHasCancelled:(bool)arg1;
- (void)setHasEnded:(bool)arg1;
- (void)setHasFailed:(bool)arg1;
- (void)setHasStartedOrChanged:(bool)arg1;
- (void)setStartedOrChanged:(id)arg1;
- (id)startedOrChanged;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichContextevent;
- (void)writeTo:(id)arg1;

@end
