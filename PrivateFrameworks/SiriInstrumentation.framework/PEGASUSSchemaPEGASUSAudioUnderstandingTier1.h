
@interface PEGASUSSchemaPEGASUSAudioUnderstandingTier1 : SISchemaInstrumentationMessage {
    NSString * _audioAppName;
    NSString * _audioArtist;
    NSString * _audioEntity;
    NSString * _audioEntityOriginalValue;
    bool  _hasAudioAppName;
    bool  _hasAudioArtist;
    bool  _hasAudioEntity;
    bool  _hasAudioEntityOriginalValue;
}

@property (nonatomic, copy) NSString *audioAppName;
@property (nonatomic, copy) NSString *audioArtist;
@property (nonatomic, copy) NSString *audioEntity;
@property (nonatomic, copy) NSString *audioEntityOriginalValue;
@property (nonatomic) bool hasAudioAppName;
@property (nonatomic) bool hasAudioArtist;
@property (nonatomic) bool hasAudioEntity;
@property (nonatomic) bool hasAudioEntityOriginalValue;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)audioAppName;
- (id)audioArtist;
- (id)audioEntity;
- (id)audioEntityOriginalValue;
- (void)deleteAudioAppName;
- (void)deleteAudioArtist;
- (void)deleteAudioEntity;
- (void)deleteAudioEntityOriginalValue;
- (id)dictionaryRepresentation;
- (bool)hasAudioAppName;
- (bool)hasAudioArtist;
- (bool)hasAudioEntity;
- (bool)hasAudioEntityOriginalValue;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAudioAppName:(id)arg1;
- (void)setAudioArtist:(id)arg1;
- (void)setAudioEntity:(id)arg1;
- (void)setAudioEntityOriginalValue:(id)arg1;
- (void)setHasAudioAppName:(bool)arg1;
- (void)setHasAudioArtist:(bool)arg1;
- (void)setHasAudioEntity:(bool)arg1;
- (void)setHasAudioEntityOriginalValue:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
