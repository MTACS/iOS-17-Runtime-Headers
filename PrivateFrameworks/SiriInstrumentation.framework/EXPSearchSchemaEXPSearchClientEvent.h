
@interface EXPSearchSchemaEXPSearchClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer> {
    bool  _hasSessionExperiments;
    EXPSearchSchemaEXPSearchSessionExperiments * _sessionExperiments;
    unsigned long long  _whichEvent_Type;
}

@property (nonatomic) bool hasSessionExperiments;
@property (nonatomic, readonly) SISchemaInstrumentationMessage *innerEvent;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) EXPSearchSchemaEXPSearchSessionExperiments *sessionExperiments;
@property (nonatomic, readonly) unsigned long long whichEvent_Type;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteSessionExperiments;
- (id)dictionaryRepresentation;
- (int)getAnyEventType;
- (bool)hasSessionExperiments;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)innerEvent;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)qualifiedMessageName;
- (bool)readFrom:(id)arg1;
- (id)sessionExperiments;
- (void)setHasSessionExperiments:(bool)arg1;
- (void)setSessionExperiments:(id)arg1;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichEvent_Type;
- (void)writeTo:(id)arg1;

@end
