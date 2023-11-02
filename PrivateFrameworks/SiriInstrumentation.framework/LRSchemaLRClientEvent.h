
@interface LRSchemaLRClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer> {
    bool  _hasRedactionSummaryReported;
    LRSchemaLRRedactionSummaryReported * _redactionSummaryReported;
    unsigned long long  _whichEvent_Type;
}

@property (nonatomic) bool hasRedactionSummaryReported;
@property (nonatomic, readonly) SISchemaInstrumentationMessage *innerEvent;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) LRSchemaLRRedactionSummaryReported *redactionSummaryReported;
@property (nonatomic, readonly) unsigned long long whichEvent_Type;

+ (int)joinability;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteRedactionSummaryReported;
- (id)dictionaryRepresentation;
- (int)getAnyEventType;
- (bool)hasRedactionSummaryReported;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)innerEvent;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)qualifiedMessageName;
- (bool)readFrom:(id)arg1;
- (id)redactionSummaryReported;
- (void)setHasRedactionSummaryReported:(bool)arg1;
- (void)setRedactionSummaryReported:(id)arg1;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichEvent_Type;
- (void)writeTo:(id)arg1;

@end
