
@interface PEGASUSSchemaPEGASUSAudioQueueStateItemTier1 : SISchemaInstrumentationMessage {
    NSString * _audioAlbum;
    NSString * _audioArtist;
    NSString * _audioClientId;
    NSString * _audioTitle;
    bool  _hasAudioAlbum;
    bool  _hasAudioArtist;
    bool  _hasAudioClientId;
    bool  _hasAudioTitle;
}

@property (nonatomic, copy) NSString *audioAlbum;
@property (nonatomic, copy) NSString *audioArtist;
@property (nonatomic, copy) NSString *audioClientId;
@property (nonatomic, copy) NSString *audioTitle;
@property (nonatomic) bool hasAudioAlbum;
@property (nonatomic) bool hasAudioArtist;
@property (nonatomic) bool hasAudioClientId;
@property (nonatomic) bool hasAudioTitle;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)audioAlbum;
- (id)audioArtist;
- (id)audioClientId;
- (id)audioTitle;
- (void)deleteAudioAlbum;
- (void)deleteAudioArtist;
- (void)deleteAudioClientId;
- (void)deleteAudioTitle;
- (id)dictionaryRepresentation;
- (bool)hasAudioAlbum;
- (bool)hasAudioArtist;
- (bool)hasAudioClientId;
- (bool)hasAudioTitle;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAudioAlbum:(id)arg1;
- (void)setAudioArtist:(id)arg1;
- (void)setAudioClientId:(id)arg1;
- (void)setAudioTitle:(id)arg1;
- (void)setHasAudioAlbum:(bool)arg1;
- (void)setHasAudioArtist:(bool)arg1;
- (void)setHasAudioClientId:(bool)arg1;
- (void)setHasAudioTitle:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
