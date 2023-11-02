
@interface TTSSchemaTTSClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer> {
    TTSSchemaTTSClientEventMetadata * _eventMetadata;
    bool  _hasEventMetadata;
    bool  _hasRequestReceived;
    bool  _hasRequestReceivedTier1;
    bool  _hasSpeechContext;
    bool  _hasSynthesisContext;
    bool  _hasVoiceFallbackOccurred;
    TTSSchemaTTSRequestReceived * _requestReceived;
    TTSSchemaTTSRequestReceivedTier1 * _requestReceivedTier1;
    TTSSchemaTTSClientSpeechContext * _speechContext;
    TTSSchemaTTSClientSynthesisContext * _synthesisContext;
    TTSSchemaTTSVoiceFallbackOccurred * _voiceFallbackOccurred;
    unsigned long long  _whichEvent_Type;
}

@property (nonatomic, retain) TTSSchemaTTSClientEventMetadata *eventMetadata;
@property (nonatomic) bool hasEventMetadata;
@property (nonatomic) bool hasRequestReceived;
@property (nonatomic) bool hasRequestReceivedTier1;
@property (nonatomic) bool hasSpeechContext;
@property (nonatomic) bool hasSynthesisContext;
@property (nonatomic) bool hasVoiceFallbackOccurred;
@property (nonatomic, readonly) SISchemaInstrumentationMessage *innerEvent;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) TTSSchemaTTSRequestReceived *requestReceived;
@property (nonatomic, retain) TTSSchemaTTSRequestReceivedTier1 *requestReceivedTier1;
@property (nonatomic, retain) TTSSchemaTTSClientSpeechContext *speechContext;
@property (nonatomic, retain) TTSSchemaTTSClientSynthesisContext *synthesisContext;
@property (nonatomic, retain) TTSSchemaTTSVoiceFallbackOccurred *voiceFallbackOccurred;
@property (nonatomic, readonly) unsigned long long whichEvent_Type;

+ (int)joinability;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (int)componentName;
- (void)deleteEventMetadata;
- (void)deleteRequestReceived;
- (void)deleteRequestReceivedTier1;
- (void)deleteSpeechContext;
- (void)deleteSynthesisContext;
- (void)deleteVoiceFallbackOccurred;
- (id)dictionaryRepresentation;
- (id)eventMetadata;
- (int)getAnyEventType;
- (id)getComponentId;
- (bool)hasEventMetadata;
- (bool)hasRequestReceived;
- (bool)hasRequestReceivedTier1;
- (bool)hasSpeechContext;
- (bool)hasSynthesisContext;
- (bool)hasVoiceFallbackOccurred;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)innerEvent;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)qualifiedMessageName;
- (bool)readFrom:(id)arg1;
- (id)requestReceived;
- (id)requestReceivedTier1;
- (void)setEventMetadata:(id)arg1;
- (void)setHasEventMetadata:(bool)arg1;
- (void)setHasRequestReceived:(bool)arg1;
- (void)setHasRequestReceivedTier1:(bool)arg1;
- (void)setHasSpeechContext:(bool)arg1;
- (void)setHasSynthesisContext:(bool)arg1;
- (void)setHasVoiceFallbackOccurred:(bool)arg1;
- (void)setRequestReceived:(id)arg1;
- (void)setRequestReceivedTier1:(id)arg1;
- (void)setSpeechContext:(id)arg1;
- (void)setSynthesisContext:(id)arg1;
- (void)setVoiceFallbackOccurred:(id)arg1;
- (id)speechContext;
- (id)suppressMessageUnderConditions;
- (id)synthesisContext;
- (id)voiceFallbackOccurred;
- (unsigned long long)whichEvent_Type;
- (void)writeTo:(id)arg1;

@end
