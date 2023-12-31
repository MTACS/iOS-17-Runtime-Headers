
@interface MTSchemaMTClientEventV2 : SISchemaTopLevelUnionType <SISchemaInnerEventContainer> {
    MTSchemaMTAppBackgroundedTier1 * _appBackgrounded;
    MTSchemaMTAppNextButtonTappedTier1 * _appNextButtonTapped;
    MTSchemaMTAppTextBoxDismissedTier1 * _appTextBoxDismissed;
    MTSchemaMTAppTimedOutTier1 * _appTimedOut;
    MTSchemaMTASRStateUpdated * _asrStateUpdated;
    MTSchemaMTBatchRequestContext * _batchRequestContext;
    MTSchemaMTClientEventMetadata * _eventMetadata;
    MTSchemaMTFrameworkRequestResponseReceived * _frameworkRequestResponseReceived;
    MTSchemaMTFrameworkRequestSent * _frameworkRequestSent;
    bool  _hasAppBackgrounded;
    bool  _hasAppNextButtonTapped;
    bool  _hasAppTextBoxDismissed;
    bool  _hasAppTimedOut;
    bool  _hasAsrStateUpdated;
    bool  _hasBatchRequestContext;
    bool  _hasEventMetadata;
    bool  _hasFrameworkRequestResponseReceived;
    bool  _hasFrameworkRequestSent;
    bool  _hasInvocationContext;
    bool  _hasInvocationStartedTier1;
    bool  _hasLocalePairResolved;
    MTSchemaMTInvocationContext * _invocationContext;
    MTSchemaMTInvocationStartedTier1 * _invocationStartedTier1;
    MTSchemaMTLocalePairResolved * _localePairResolved;
    unsigned long long  _whichEvent_Type;
}

@property (nonatomic, retain) MTSchemaMTAppBackgroundedTier1 *appBackgrounded;
@property (nonatomic, retain) MTSchemaMTAppNextButtonTappedTier1 *appNextButtonTapped;
@property (nonatomic, retain) MTSchemaMTAppTextBoxDismissedTier1 *appTextBoxDismissed;
@property (nonatomic, retain) MTSchemaMTAppTimedOutTier1 *appTimedOut;
@property (nonatomic, retain) MTSchemaMTASRStateUpdated *asrStateUpdated;
@property (nonatomic, retain) MTSchemaMTBatchRequestContext *batchRequestContext;
@property (nonatomic, retain) MTSchemaMTClientEventMetadata *eventMetadata;
@property (nonatomic, retain) MTSchemaMTFrameworkRequestResponseReceived *frameworkRequestResponseReceived;
@property (nonatomic, retain) MTSchemaMTFrameworkRequestSent *frameworkRequestSent;
@property (nonatomic) bool hasAppBackgrounded;
@property (nonatomic) bool hasAppNextButtonTapped;
@property (nonatomic) bool hasAppTextBoxDismissed;
@property (nonatomic) bool hasAppTimedOut;
@property (nonatomic) bool hasAsrStateUpdated;
@property (nonatomic) bool hasBatchRequestContext;
@property (nonatomic) bool hasEventMetadata;
@property (nonatomic) bool hasFrameworkRequestResponseReceived;
@property (nonatomic) bool hasFrameworkRequestSent;
@property (nonatomic) bool hasInvocationContext;
@property (nonatomic) bool hasInvocationStartedTier1;
@property (nonatomic) bool hasLocalePairResolved;
@property (nonatomic, readonly) SISchemaInstrumentationMessage *innerEvent;
@property (nonatomic, retain) MTSchemaMTInvocationContext *invocationContext;
@property (nonatomic, retain) MTSchemaMTInvocationStartedTier1 *invocationStartedTier1;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) MTSchemaMTLocalePairResolved *localePairResolved;
@property (nonatomic, readonly) unsigned long long whichEvent_Type;

+ (int)joinability;

- (void).cxx_destruct;
- (id)appBackgrounded;
- (id)appNextButtonTapped;
- (id)appTextBoxDismissed;
- (id)appTimedOut;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)asrStateUpdated;
- (id)batchRequestContext;
- (int)clockIsolationLevel;
- (void)deleteAppBackgrounded;
- (void)deleteAppNextButtonTapped;
- (void)deleteAppTextBoxDismissed;
- (void)deleteAppTimedOut;
- (void)deleteAsrStateUpdated;
- (void)deleteBatchRequestContext;
- (void)deleteEventMetadata;
- (void)deleteFrameworkRequestResponseReceived;
- (void)deleteFrameworkRequestSent;
- (void)deleteInvocationContext;
- (void)deleteInvocationStartedTier1;
- (void)deleteLocalePairResolved;
- (id)dictionaryRepresentation;
- (id)eventMetadata;
- (id)frameworkRequestResponseReceived;
- (id)frameworkRequestSent;
- (int)getAnyEventType;
- (id)getComponentId;
- (bool)hasAppBackgrounded;
- (bool)hasAppNextButtonTapped;
- (bool)hasAppTextBoxDismissed;
- (bool)hasAppTimedOut;
- (bool)hasAsrStateUpdated;
- (bool)hasBatchRequestContext;
- (bool)hasEventMetadata;
- (bool)hasFrameworkRequestResponseReceived;
- (bool)hasFrameworkRequestSent;
- (bool)hasInvocationContext;
- (bool)hasInvocationStartedTier1;
- (bool)hasLocalePairResolved;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)innerEvent;
- (id)invocationContext;
- (id)invocationStartedTier1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)localePairResolved;
- (id)qualifiedMessageName;
- (bool)readFrom:(id)arg1;
- (void)setAppBackgrounded:(id)arg1;
- (void)setAppNextButtonTapped:(id)arg1;
- (void)setAppTextBoxDismissed:(id)arg1;
- (void)setAppTimedOut:(id)arg1;
- (void)setAsrStateUpdated:(id)arg1;
- (void)setBatchRequestContext:(id)arg1;
- (void)setEventMetadata:(id)arg1;
- (void)setFrameworkRequestResponseReceived:(id)arg1;
- (void)setFrameworkRequestSent:(id)arg1;
- (void)setHasAppBackgrounded:(bool)arg1;
- (void)setHasAppNextButtonTapped:(bool)arg1;
- (void)setHasAppTextBoxDismissed:(bool)arg1;
- (void)setHasAppTimedOut:(bool)arg1;
- (void)setHasAsrStateUpdated:(bool)arg1;
- (void)setHasBatchRequestContext:(bool)arg1;
- (void)setHasEventMetadata:(bool)arg1;
- (void)setHasFrameworkRequestResponseReceived:(bool)arg1;
- (void)setHasFrameworkRequestSent:(bool)arg1;
- (void)setHasInvocationContext:(bool)arg1;
- (void)setHasInvocationStartedTier1:(bool)arg1;
- (void)setHasLocalePairResolved:(bool)arg1;
- (void)setInvocationContext:(id)arg1;
- (void)setInvocationStartedTier1:(id)arg1;
- (void)setLocalePairResolved:(id)arg1;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichEvent_Type;
- (void)writeTo:(id)arg1;

@end
