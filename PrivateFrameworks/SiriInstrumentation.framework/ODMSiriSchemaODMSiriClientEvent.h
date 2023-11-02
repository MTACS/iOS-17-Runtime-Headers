
@interface ODMSiriSchemaODMSiriClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer> {
    ODMSiriSchemaODMSiriCountsReported * _countsReported;
    ODMSiriSchemaODMSiriCountsReportedAll * _countsReportedAll;
    ODMSiriSchemaODMSiriEventMetadata * _eventMetadata;
    bool  _hasCountsReported;
    bool  _hasCountsReportedAll;
    bool  _hasEventMetadata;
    bool  _hasTaskCountsReported;
    bool  _hasTurnRestatementScoresReported;
    ODMSiriSchemaODMSiriTaskCountsReported * _taskCountsReported;
    ODMSiriSchemaODMSiriTurnRestatementScoresReported * _turnRestatementScoresReported;
    unsigned long long  _whichEvent_Type;
}

@property (nonatomic, retain) ODMSiriSchemaODMSiriCountsReported *countsReported;
@property (nonatomic, retain) ODMSiriSchemaODMSiriCountsReportedAll *countsReportedAll;
@property (nonatomic, retain) ODMSiriSchemaODMSiriEventMetadata *eventMetadata;
@property (nonatomic) bool hasCountsReported;
@property (nonatomic) bool hasCountsReportedAll;
@property (nonatomic) bool hasEventMetadata;
@property (nonatomic) bool hasTaskCountsReported;
@property (nonatomic) bool hasTurnRestatementScoresReported;
@property (nonatomic, readonly) SISchemaInstrumentationMessage *innerEvent;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) ODMSiriSchemaODMSiriTaskCountsReported *taskCountsReported;
@property (nonatomic, retain) ODMSiriSchemaODMSiriTurnRestatementScoresReported *turnRestatementScoresReported;
@property (nonatomic, readonly) unsigned long long whichEvent_Type;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (int)clockIsolationLevel;
- (id)countsReported;
- (id)countsReportedAll;
- (void)deleteCountsReported;
- (void)deleteCountsReportedAll;
- (void)deleteEventMetadata;
- (void)deleteTaskCountsReported;
- (void)deleteTurnRestatementScoresReported;
- (id)dictionaryRepresentation;
- (id)eventMetadata;
- (int)getAnyEventType;
- (bool)hasCountsReported;
- (bool)hasCountsReportedAll;
- (bool)hasEventMetadata;
- (bool)hasTaskCountsReported;
- (bool)hasTurnRestatementScoresReported;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)innerEvent;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)qualifiedMessageName;
- (bool)readFrom:(id)arg1;
- (void)setCountsReported:(id)arg1;
- (void)setCountsReportedAll:(id)arg1;
- (void)setEventMetadata:(id)arg1;
- (void)setHasCountsReported:(bool)arg1;
- (void)setHasCountsReportedAll:(bool)arg1;
- (void)setHasEventMetadata:(bool)arg1;
- (void)setHasTaskCountsReported:(bool)arg1;
- (void)setHasTurnRestatementScoresReported:(bool)arg1;
- (void)setTaskCountsReported:(id)arg1;
- (void)setTurnRestatementScoresReported:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)taskCountsReported;
- (id)turnRestatementScoresReported;
- (unsigned long long)whichEvent_Type;
- (void)writeTo:(id)arg1;

@end
