
@interface READSchemaREADPlaybackSessionEnded : SISchemaInstrumentationMessage {
    struct { 
        unsigned int playedAudioDuration : 1; 
        unsigned int totalDuration : 1; 
    }  _has;
    float  _playedAudioDuration;
    float  _totalDuration;
}

@property (nonatomic) bool hasPlayedAudioDuration;
@property (nonatomic) bool hasTotalDuration;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) float playedAudioDuration;
@property (nonatomic) float totalDuration;

- (void)deletePlayedAudioDuration;
- (void)deleteTotalDuration;
- (id)dictionaryRepresentation;
- (bool)hasPlayedAudioDuration;
- (bool)hasTotalDuration;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (float)playedAudioDuration;
- (bool)readFrom:(id)arg1;
- (void)setHasPlayedAudioDuration:(bool)arg1;
- (void)setHasTotalDuration:(bool)arg1;
- (void)setPlayedAudioDuration:(float)arg1;
- (void)setTotalDuration:(float)arg1;
- (id)suppressMessageUnderConditions;
- (float)totalDuration;
- (void)writeTo:(id)arg1;

@end
