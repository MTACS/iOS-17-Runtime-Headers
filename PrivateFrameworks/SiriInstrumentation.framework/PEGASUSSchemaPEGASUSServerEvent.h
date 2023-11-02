
@interface PEGASUSSchemaPEGASUSServerEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer> {
    PEGASUSSchemaPEGASUSServerEventMetadata * _eventMetadata;
    bool  _hasEventMetadata;
    bool  _hasPegasusRequestContext;
    bool  _hasPegasusRequestEndedTier1;
    bool  _hasPegasusRewrittenUtterancesReported;
    bool  _hasPegasusRewrittenUtterancesReportedTier1;
    bool  _hasPegasusUtteranceUnderstandingReported;
    bool  _hasPegasusUtteranceUnderstandingReportedTier1;
    PEGASUSSchemaPEGASUSRequestContext * _pegasusRequestContext;
    PEGASUSSchemaPEGASUSRequestEndedTier1 * _pegasusRequestEndedTier1;
    PEGASUSSchemaPEGASUSRewrittenUtterancesReported * _pegasusRewrittenUtterancesReported;
    PEGASUSSchemaPEGASUSRewrittenUtterancesReportedTier1 * _pegasusRewrittenUtterancesReportedTier1;
    PEGASUSSchemaPEGASUSUtteranceUnderstandingReported * _pegasusUtteranceUnderstandingReported;
    PEGASUSSchemaPEGASUSUtteranceUnderstandingReportedTier1 * _pegasusUtteranceUnderstandingReportedTier1;
    unsigned long long  _whichEvent_Type;
}

@property (nonatomic, retain) PEGASUSSchemaPEGASUSServerEventMetadata *eventMetadata;
@property (nonatomic) bool hasEventMetadata;
@property (nonatomic) bool hasPegasusRequestContext;
@property (nonatomic) bool hasPegasusRequestEndedTier1;
@property (nonatomic) bool hasPegasusRewrittenUtterancesReported;
@property (nonatomic) bool hasPegasusRewrittenUtterancesReportedTier1;
@property (nonatomic) bool hasPegasusUtteranceUnderstandingReported;
@property (nonatomic) bool hasPegasusUtteranceUnderstandingReportedTier1;
@property (nonatomic, readonly) SISchemaInstrumentationMessage *innerEvent;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) PEGASUSSchemaPEGASUSRequestContext *pegasusRequestContext;
@property (nonatomic, retain) PEGASUSSchemaPEGASUSRequestEndedTier1 *pegasusRequestEndedTier1;
@property (nonatomic, retain) PEGASUSSchemaPEGASUSRewrittenUtterancesReported *pegasusRewrittenUtterancesReported;
@property (nonatomic, retain) PEGASUSSchemaPEGASUSRewrittenUtterancesReportedTier1 *pegasusRewrittenUtterancesReportedTier1;
@property (nonatomic, retain) PEGASUSSchemaPEGASUSUtteranceUnderstandingReported *pegasusUtteranceUnderstandingReported;
@property (nonatomic, retain) PEGASUSSchemaPEGASUSUtteranceUnderstandingReportedTier1 *pegasusUtteranceUnderstandingReportedTier1;
@property (nonatomic, readonly) unsigned long long whichEvent_Type;

+ (int)joinability;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (int)componentName;
- (void)deleteEventMetadata;
- (void)deletePegasusRequestContext;
- (void)deletePegasusRequestEndedTier1;
- (void)deletePegasusRewrittenUtterancesReported;
- (void)deletePegasusRewrittenUtterancesReportedTier1;
- (void)deletePegasusUtteranceUnderstandingReported;
- (void)deletePegasusUtteranceUnderstandingReportedTier1;
- (id)dictionaryRepresentation;
- (id)eventMetadata;
- (int)getAnyEventType;
- (id)getComponentId;
- (bool)hasEventMetadata;
- (bool)hasPegasusRequestContext;
- (bool)hasPegasusRequestEndedTier1;
- (bool)hasPegasusRewrittenUtterancesReported;
- (bool)hasPegasusRewrittenUtterancesReportedTier1;
- (bool)hasPegasusUtteranceUnderstandingReported;
- (bool)hasPegasusUtteranceUnderstandingReportedTier1;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)innerEvent;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)pegasusRequestContext;
- (id)pegasusRequestEndedTier1;
- (id)pegasusRewrittenUtterancesReported;
- (id)pegasusRewrittenUtterancesReportedTier1;
- (id)pegasusUtteranceUnderstandingReported;
- (id)pegasusUtteranceUnderstandingReportedTier1;
- (id)qualifiedMessageName;
- (bool)readFrom:(id)arg1;
- (void)setEventMetadata:(id)arg1;
- (void)setHasEventMetadata:(bool)arg1;
- (void)setHasPegasusRequestContext:(bool)arg1;
- (void)setHasPegasusRequestEndedTier1:(bool)arg1;
- (void)setHasPegasusRewrittenUtterancesReported:(bool)arg1;
- (void)setHasPegasusRewrittenUtterancesReportedTier1:(bool)arg1;
- (void)setHasPegasusUtteranceUnderstandingReported:(bool)arg1;
- (void)setHasPegasusUtteranceUnderstandingReportedTier1:(bool)arg1;
- (void)setPegasusRequestContext:(id)arg1;
- (void)setPegasusRequestEndedTier1:(id)arg1;
- (void)setPegasusRewrittenUtterancesReported:(id)arg1;
- (void)setPegasusRewrittenUtterancesReportedTier1:(id)arg1;
- (void)setPegasusUtteranceUnderstandingReported:(id)arg1;
- (void)setPegasusUtteranceUnderstandingReportedTier1:(id)arg1;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichEvent_Type;
- (void)writeTo:(id)arg1;

@end