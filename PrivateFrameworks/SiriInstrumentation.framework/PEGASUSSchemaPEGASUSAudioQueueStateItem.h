
@interface PEGASUSSchemaPEGASUSAudioQueueStateItem : SISchemaInstrumentationMessage {
    int  _audioQueueStateItemType;
    struct { 
        unsigned int audioQueueStateItemType : 1; 
    }  _has;
}

@property (nonatomic) int audioQueueStateItemType;
@property (nonatomic) bool hasAudioQueueStateItemType;
@property (nonatomic, readonly) NSData *jsonData;

- (int)audioQueueStateItemType;
- (void)deleteAudioQueueStateItemType;
- (id)dictionaryRepresentation;
- (bool)hasAudioQueueStateItemType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAudioQueueStateItemType:(int)arg1;
- (void)setHasAudioQueueStateItemType:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
