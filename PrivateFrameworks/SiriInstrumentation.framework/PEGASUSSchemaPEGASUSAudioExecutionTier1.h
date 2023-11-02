
@interface PEGASUSSchemaPEGASUSAudioExecutionTier1 : SISchemaInstrumentationMessage {
    NSArray * _audioInternalSignals;
    NSString * _audioLaunchId;
    PEGASUSSchemaPEGASUSAudioQueueStateInfoTier1 * _audioQueueStateInfoTier1;
    NSString * _audioType;
    PEGASUSSchemaPEGASUSAudioUnderstandingTier1 * _audioUnderstandingTier1;
    bool  _hasAudioLaunchId;
    bool  _hasAudioQueueStateInfoTier1;
    bool  _hasAudioType;
    bool  _hasAudioUnderstandingTier1;
}

@property (nonatomic, copy) NSArray *audioInternalSignals;
@property (nonatomic, copy) NSString *audioLaunchId;
@property (nonatomic, retain) PEGASUSSchemaPEGASUSAudioQueueStateInfoTier1 *audioQueueStateInfoTier1;
@property (nonatomic, copy) NSString *audioType;
@property (nonatomic, retain) PEGASUSSchemaPEGASUSAudioUnderstandingTier1 *audioUnderstandingTier1;
@property (nonatomic) bool hasAudioLaunchId;
@property (nonatomic) bool hasAudioQueueStateInfoTier1;
@property (nonatomic) bool hasAudioType;
@property (nonatomic) bool hasAudioUnderstandingTier1;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (void)addAudioInternalSignals:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)audioInternalSignals;
- (id)audioInternalSignalsAtIndex:(unsigned long long)arg1;
- (unsigned long long)audioInternalSignalsCount;
- (id)audioLaunchId;
- (id)audioQueueStateInfoTier1;
- (id)audioType;
- (id)audioUnderstandingTier1;
- (void)clearAudioInternalSignals;
- (void)deleteAudioInternalSignals;
- (void)deleteAudioLaunchId;
- (void)deleteAudioQueueStateInfoTier1;
- (void)deleteAudioType;
- (void)deleteAudioUnderstandingTier1;
- (id)dictionaryRepresentation;
- (bool)hasAudioLaunchId;
- (bool)hasAudioQueueStateInfoTier1;
- (bool)hasAudioType;
- (bool)hasAudioUnderstandingTier1;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAudioInternalSignals:(id)arg1;
- (void)setAudioLaunchId:(id)arg1;
- (void)setAudioQueueStateInfoTier1:(id)arg1;
- (void)setAudioType:(id)arg1;
- (void)setAudioUnderstandingTier1:(id)arg1;
- (void)setHasAudioLaunchId:(bool)arg1;
- (void)setHasAudioQueueStateInfoTier1:(bool)arg1;
- (void)setHasAudioType:(bool)arg1;
- (void)setHasAudioUnderstandingTier1:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
