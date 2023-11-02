
@interface READSchemaREADPlaybackSessionStartedOrChanged : SISchemaInstrumentationMessage {
    TTSSchemaTTSAudioInterface * _audioInterface;
    float  _customerPerceivedLatency;
    struct { 
        unsigned int customerPerceivedLatency : 1; 
        unsigned int volume : 1; 
        unsigned int playbackStateChange : 1; 
    }  _has;
    bool  _hasAudioInterface;
    int  _playbackStateChange;
    float  _volume;
}

@property (nonatomic, retain) TTSSchemaTTSAudioInterface *audioInterface;
@property (nonatomic) float customerPerceivedLatency;
@property (nonatomic) bool hasAudioInterface;
@property (nonatomic) bool hasCustomerPerceivedLatency;
@property (nonatomic) bool hasPlaybackStateChange;
@property (nonatomic) bool hasVolume;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int playbackStateChange;
@property (nonatomic) float volume;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)audioInterface;
- (float)customerPerceivedLatency;
- (void)deleteAudioInterface;
- (void)deleteCustomerPerceivedLatency;
- (void)deletePlaybackStateChange;
- (void)deleteVolume;
- (id)dictionaryRepresentation;
- (bool)hasAudioInterface;
- (bool)hasCustomerPerceivedLatency;
- (bool)hasPlaybackStateChange;
- (bool)hasVolume;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)playbackStateChange;
- (bool)readFrom:(id)arg1;
- (void)setAudioInterface:(id)arg1;
- (void)setCustomerPerceivedLatency:(float)arg1;
- (void)setHasAudioInterface:(bool)arg1;
- (void)setHasCustomerPerceivedLatency:(bool)arg1;
- (void)setHasPlaybackStateChange:(bool)arg1;
- (void)setHasVolume:(bool)arg1;
- (void)setPlaybackStateChange:(int)arg1;
- (void)setVolume:(float)arg1;
- (id)suppressMessageUnderConditions;
- (float)volume;
- (void)writeTo:(id)arg1;

@end
