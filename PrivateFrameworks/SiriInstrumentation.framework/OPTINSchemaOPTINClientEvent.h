
@interface OPTINSchemaOPTINClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer> {
    bool  _hasInconsistentStateDetected;
    OPTINSchemaOPTINInconsistentStateDetected * _inconsistentStateDetected;
    unsigned long long  _whichEvent_Type;
}

@property (nonatomic) bool hasInconsistentStateDetected;
@property (nonatomic, retain) OPTINSchemaOPTINInconsistentStateDetected *inconsistentStateDetected;
@property (nonatomic, readonly) SISchemaInstrumentationMessage *innerEvent;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, readonly) unsigned long long whichEvent_Type;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteInconsistentStateDetected;
- (id)dictionaryRepresentation;
- (int)getAnyEventType;
- (bool)hasInconsistentStateDetected;
- (unsigned long long)hash;
- (id)inconsistentStateDetected;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)innerEvent;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)qualifiedMessageName;
- (bool)readFrom:(id)arg1;
- (void)setHasInconsistentStateDetected:(bool)arg1;
- (void)setInconsistentStateDetected:(id)arg1;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichEvent_Type;
- (void)writeTo:(id)arg1;

@end
