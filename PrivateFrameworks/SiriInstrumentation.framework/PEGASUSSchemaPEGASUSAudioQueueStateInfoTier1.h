
@interface PEGASUSSchemaPEGASUSAudioQueueStateInfoTier1 : SISchemaInstrumentationMessage {
    PEGASUSSchemaPEGASUSAudioQueueStateItemTier1 * _audioQueueStateItemTier1;
    bool  _hasAudioQueueStateItemTier1;
}

@property (nonatomic, retain) PEGASUSSchemaPEGASUSAudioQueueStateItemTier1 *audioQueueStateItemTier1;
@property (nonatomic) bool hasAudioQueueStateItemTier1;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)audioQueueStateItemTier1;
- (void)deleteAudioQueueStateItemTier1;
- (id)dictionaryRepresentation;
- (bool)hasAudioQueueStateItemTier1;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAudioQueueStateItemTier1:(id)arg1;
- (void)setHasAudioQueueStateItemTier1:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
