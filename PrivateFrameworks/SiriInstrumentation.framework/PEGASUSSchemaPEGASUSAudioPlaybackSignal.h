
@interface PEGASUSSchemaPEGASUSAudioPlaybackSignal : SISchemaInstrumentationMessage {
    int  _audioPlaybackQueueLocation;
    float  _audioPlaybackSpeed;
    struct { 
        unsigned int audioPlaybackQueueLocation : 1; 
        unsigned int audioPlaybackSpeed : 1; 
    }  _has;
}

@property (nonatomic) int audioPlaybackQueueLocation;
@property (nonatomic) float audioPlaybackSpeed;
@property (nonatomic) bool hasAudioPlaybackQueueLocation;
@property (nonatomic) bool hasAudioPlaybackSpeed;
@property (nonatomic, readonly) NSData *jsonData;

- (int)audioPlaybackQueueLocation;
- (float)audioPlaybackSpeed;
- (void)deleteAudioPlaybackQueueLocation;
- (void)deleteAudioPlaybackSpeed;
- (id)dictionaryRepresentation;
- (bool)hasAudioPlaybackQueueLocation;
- (bool)hasAudioPlaybackSpeed;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAudioPlaybackQueueLocation:(int)arg1;
- (void)setAudioPlaybackSpeed:(float)arg1;
- (void)setHasAudioPlaybackQueueLocation:(bool)arg1;
- (void)setHasAudioPlaybackSpeed:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
