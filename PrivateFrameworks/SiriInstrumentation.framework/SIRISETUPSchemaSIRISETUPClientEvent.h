
@interface SIRISETUPSchemaSIRISETUPClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer> {
    SIRISETUPSchemaSIRISETUPPHSEnrollmentUtteranceCompleted * _enrollmentUtteranceCompleted;
    SIRISETUPSchemaSIRISETUPPHSEnrollmentDigitalZeroDetectionCompleted * _enrollmentZeroDetectionCompleted;
    SIRISETUPSchemaSIRISETUPClientEventMetadata * _eventMetadata;
    bool  _hasEnrollmentUtteranceCompleted;
    bool  _hasEnrollmentZeroDetectionCompleted;
    bool  _hasEventMetadata;
    unsigned long long  _whichEvent_Type;
}

@property (nonatomic, retain) SIRISETUPSchemaSIRISETUPPHSEnrollmentUtteranceCompleted *enrollmentUtteranceCompleted;
@property (nonatomic, retain) SIRISETUPSchemaSIRISETUPPHSEnrollmentDigitalZeroDetectionCompleted *enrollmentZeroDetectionCompleted;
@property (nonatomic, retain) SIRISETUPSchemaSIRISETUPClientEventMetadata *eventMetadata;
@property (nonatomic) bool hasEnrollmentUtteranceCompleted;
@property (nonatomic) bool hasEnrollmentZeroDetectionCompleted;
@property (nonatomic) bool hasEventMetadata;
@property (nonatomic, readonly) SISchemaInstrumentationMessage *innerEvent;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, readonly) unsigned long long whichEvent_Type;

+ (int)joinability;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (int)componentName;
- (void)deleteEnrollmentUtteranceCompleted;
- (void)deleteEnrollmentZeroDetectionCompleted;
- (void)deleteEventMetadata;
- (id)dictionaryRepresentation;
- (id)enrollmentUtteranceCompleted;
- (id)enrollmentZeroDetectionCompleted;
- (id)eventMetadata;
- (int)getAnyEventType;
- (id)getComponentId;
- (bool)hasEnrollmentUtteranceCompleted;
- (bool)hasEnrollmentZeroDetectionCompleted;
- (bool)hasEventMetadata;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)innerEvent;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)qualifiedMessageName;
- (bool)readFrom:(id)arg1;
- (void)setEnrollmentUtteranceCompleted:(id)arg1;
- (void)setEnrollmentZeroDetectionCompleted:(id)arg1;
- (void)setEventMetadata:(id)arg1;
- (void)setHasEnrollmentUtteranceCompleted:(bool)arg1;
- (void)setHasEnrollmentZeroDetectionCompleted:(bool)arg1;
- (void)setHasEventMetadata:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichEvent_Type;
- (void)writeTo:(id)arg1;

@end
