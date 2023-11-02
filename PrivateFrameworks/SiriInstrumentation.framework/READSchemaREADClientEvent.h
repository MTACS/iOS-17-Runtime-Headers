
@interface READSchemaREADClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer> {
    READSchemaREADClientEventMetadata * _eventMetadata;
    bool  _hasEventMetadata;
    bool  _hasPlaybackSessionContext;
    bool  _hasReadThisRequestContext;
    bool  _hasReadsThisRequestPreprocessingContext;
    READSchemaREADPlaybackSessionContext * _playbackSessionContext;
    READSchemaREADRequestContext * _readThisRequestContext;
    READSchemaREADRequestPreprocessingContext * _readsThisRequestPreprocessingContext;
    unsigned long long  _whichEvent_Type;
}

@property (nonatomic, retain) READSchemaREADClientEventMetadata *eventMetadata;
@property (nonatomic) bool hasEventMetadata;
@property (nonatomic) bool hasPlaybackSessionContext;
@property (nonatomic) bool hasReadThisRequestContext;
@property (nonatomic) bool hasReadsThisRequestPreprocessingContext;
@property (nonatomic, readonly) SISchemaInstrumentationMessage *innerEvent;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) READSchemaREADPlaybackSessionContext *playbackSessionContext;
@property (nonatomic, retain) READSchemaREADRequestContext *readThisRequestContext;
@property (nonatomic, retain) READSchemaREADRequestPreprocessingContext *readsThisRequestPreprocessingContext;
@property (nonatomic, readonly) unsigned long long whichEvent_Type;

+ (int)joinability;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (int)componentName;
- (void)deleteEventMetadata;
- (void)deletePlaybackSessionContext;
- (void)deleteReadThisRequestContext;
- (void)deleteReadsThisRequestPreprocessingContext;
- (id)dictionaryRepresentation;
- (id)eventMetadata;
- (int)getAnyEventType;
- (id)getComponentId;
- (bool)hasEventMetadata;
- (bool)hasPlaybackSessionContext;
- (bool)hasReadThisRequestContext;
- (bool)hasReadsThisRequestPreprocessingContext;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)innerEvent;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)playbackSessionContext;
- (id)qualifiedMessageName;
- (bool)readFrom:(id)arg1;
- (id)readThisRequestContext;
- (id)readsThisRequestPreprocessingContext;
- (void)setEventMetadata:(id)arg1;
- (void)setHasEventMetadata:(bool)arg1;
- (void)setHasPlaybackSessionContext:(bool)arg1;
- (void)setHasReadThisRequestContext:(bool)arg1;
- (void)setHasReadsThisRequestPreprocessingContext:(bool)arg1;
- (void)setPlaybackSessionContext:(id)arg1;
- (void)setReadThisRequestContext:(id)arg1;
- (void)setReadsThisRequestPreprocessingContext:(id)arg1;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichEvent_Type;
- (void)writeTo:(id)arg1;

@end
