
@interface PEGASUSSchemaPEGASUSAudioQueueStateInfo : SISchemaInstrumentationMessage {
    int  _audioEntitySource;
    int  _audioNowPlayingQueueCount;
    int  _audioNowPlayingQueueIndex;
    PEGASUSSchemaPEGASUSAudioQueueStateItem * _audioQueueStateItem;
    int  _audioState;
    struct { 
        unsigned int audioState : 1; 
        unsigned int audioEntitySource : 1; 
        unsigned int audioNowPlayingQueueIndex : 1; 
        unsigned int audioNowPlayingQueueCount : 1; 
    }  _has;
    bool  _hasAudioQueueStateItem;
}

@property (nonatomic) int audioEntitySource;
@property (nonatomic) int audioNowPlayingQueueCount;
@property (nonatomic) int audioNowPlayingQueueIndex;
@property (nonatomic, retain) PEGASUSSchemaPEGASUSAudioQueueStateItem *audioQueueStateItem;
@property (nonatomic) int audioState;
@property (nonatomic) bool hasAudioEntitySource;
@property (nonatomic) bool hasAudioNowPlayingQueueCount;
@property (nonatomic) bool hasAudioNowPlayingQueueIndex;
@property (nonatomic) bool hasAudioQueueStateItem;
@property (nonatomic) bool hasAudioState;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (int)audioEntitySource;
- (int)audioNowPlayingQueueCount;
- (int)audioNowPlayingQueueIndex;
- (id)audioQueueStateItem;
- (int)audioState;
- (void)deleteAudioEntitySource;
- (void)deleteAudioNowPlayingQueueCount;
- (void)deleteAudioNowPlayingQueueIndex;
- (void)deleteAudioQueueStateItem;
- (void)deleteAudioState;
- (id)dictionaryRepresentation;
- (bool)hasAudioEntitySource;
- (bool)hasAudioNowPlayingQueueCount;
- (bool)hasAudioNowPlayingQueueIndex;
- (bool)hasAudioQueueStateItem;
- (bool)hasAudioState;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAudioEntitySource:(int)arg1;
- (void)setAudioNowPlayingQueueCount:(int)arg1;
- (void)setAudioNowPlayingQueueIndex:(int)arg1;
- (void)setAudioQueueStateItem:(id)arg1;
- (void)setAudioState:(int)arg1;
- (void)setHasAudioEntitySource:(bool)arg1;
- (void)setHasAudioNowPlayingQueueCount:(bool)arg1;
- (void)setHasAudioNowPlayingQueueIndex:(bool)arg1;
- (void)setHasAudioQueueStateItem:(bool)arg1;
- (void)setHasAudioState:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
