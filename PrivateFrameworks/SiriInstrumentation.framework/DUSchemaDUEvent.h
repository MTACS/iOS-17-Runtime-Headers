
@interface DUSchemaDUEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer> {
    DUSchemaDUContent * _content;
    bool  _hasContent;
    bool  _hasMetadata;
    bool  _hasSearchSessionRecord;
    bool  _hasSpeechAudioRecord;
    DUSchemaDUEventMetadata * _metadata;
    DUSchemaDUSearchSessionRecord * _searchSessionRecord;
    DUSchemaDUSpeechAudioRecord * _speechAudioRecord;
    unsigned long long  _whichEvent_Type;
}

@property (nonatomic, readonly) int componentName;
@property (nonatomic, retain) DUSchemaDUContent *content;
@property (nonatomic) bool hasContent;
@property (nonatomic) bool hasMetadata;
@property (nonatomic) bool hasSearchSessionRecord;
@property (nonatomic) bool hasSpeechAudioRecord;
@property (nonatomic, readonly) SISchemaInstrumentationMessage *innerEvent;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) DUSchemaDUEventMetadata *metadata;
@property (nonatomic, retain) DUSchemaDUSearchSessionRecord *searchSessionRecord;
@property (nonatomic, retain) DUSchemaDUSpeechAudioRecord *speechAudioRecord;
@property (nonatomic, readonly) unsigned long long whichEvent_Type;

// Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)content;
- (void)deleteContent;
- (void)deleteMetadata;
- (void)deleteSearchSessionRecord;
- (void)deleteSpeechAudioRecord;
- (id)dictionaryRepresentation;
- (int)getAnyEventType;
- (bool)hasContent;
- (bool)hasMetadata;
- (bool)hasSearchSessionRecord;
- (bool)hasSpeechAudioRecord;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)innerEvent;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)metadata;
- (id)qualifiedMessageName;
- (bool)readFrom:(id)arg1;
- (id)searchSessionRecord;
- (void)setContent:(id)arg1;
- (void)setHasContent:(bool)arg1;
- (void)setHasMetadata:(bool)arg1;
- (void)setHasSearchSessionRecord:(bool)arg1;
- (void)setHasSpeechAudioRecord:(bool)arg1;
- (void)setMetadata:(id)arg1;
- (void)setSearchSessionRecord:(id)arg1;
- (void)setSpeechAudioRecord:(id)arg1;
- (id)speechAudioRecord;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichEvent_Type;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SiriAnalytics.framework/SiriAnalytics

- (int)componentName;
- (id)getComponentId;

@end
