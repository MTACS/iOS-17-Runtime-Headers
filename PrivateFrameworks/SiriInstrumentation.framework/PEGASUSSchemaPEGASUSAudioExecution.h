
@interface PEGASUSSchemaPEGASUSAudioExecution : SISchemaInstrumentationMessage {
    PEGASUSSchemaPEGASUSAudioPlaybackSignal * _audioPlaybackSignal;
    PEGASUSSchemaPEGASUSAudioQueueStateInfo * _audioQueueStateInfo;
    PEGASUSSchemaPEGASUSAudioUnderstanding * _audioUnderstanding;
    bool  _hasAudioPlaybackSignal;
    bool  _hasAudioQueueStateInfo;
    bool  _hasAudioUnderstanding;
}

@property (nonatomic, retain) PEGASUSSchemaPEGASUSAudioPlaybackSignal *audioPlaybackSignal;
@property (nonatomic, retain) PEGASUSSchemaPEGASUSAudioQueueStateInfo *audioQueueStateInfo;
@property (nonatomic, retain) PEGASUSSchemaPEGASUSAudioUnderstanding *audioUnderstanding;
@property (nonatomic) bool hasAudioPlaybackSignal;
@property (nonatomic) bool hasAudioQueueStateInfo;
@property (nonatomic) bool hasAudioUnderstanding;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)audioPlaybackSignal;
- (id)audioQueueStateInfo;
- (id)audioUnderstanding;
- (void)deleteAudioPlaybackSignal;
- (void)deleteAudioQueueStateInfo;
- (void)deleteAudioUnderstanding;
- (id)dictionaryRepresentation;
- (bool)hasAudioPlaybackSignal;
- (bool)hasAudioQueueStateInfo;
- (bool)hasAudioUnderstanding;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAudioPlaybackSignal:(id)arg1;
- (void)setAudioQueueStateInfo:(id)arg1;
- (void)setAudioUnderstanding:(id)arg1;
- (void)setHasAudioPlaybackSignal:(bool)arg1;
- (void)setHasAudioQueueStateInfo:(bool)arg1;
- (void)setHasAudioUnderstanding:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
