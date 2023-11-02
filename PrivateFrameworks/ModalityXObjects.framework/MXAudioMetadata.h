
@interface MXAudioMetadata : PBCodable <NSCopying> {
    int  _audioSource;
    NSString * _clientModelVersion;
    int  _codec;
    bool  _enableServerEndpoint;
    struct { 
        unsigned int audioSource : 1; 
        unsigned int codec : 1; 
        unsigned int enableServerEndpoint : 1; 
        unsigned int isFarField : 1; 
    }  _has;
    bool  _isFarField;
    MXVoiceTriggerInfo * _voiceTriggerInfo;
}

@property (nonatomic) int audioSource;
@property (nonatomic, retain) NSString *clientModelVersion;
@property (nonatomic) int codec;
@property (nonatomic) bool enableServerEndpoint;
@property (nonatomic) bool hasAudioSource;
@property (nonatomic, readonly) bool hasClientModelVersion;
@property (nonatomic) bool hasCodec;
@property (nonatomic) bool hasEnableServerEndpoint;
@property (nonatomic) bool hasIsFarField;
@property (nonatomic, readonly) bool hasVoiceTriggerInfo;
@property (nonatomic) bool isFarField;
@property (nonatomic, retain) MXVoiceTriggerInfo *voiceTriggerInfo;

- (void).cxx_destruct;
- (int)StringAsAudioSource:(id)arg1;
- (int)StringAsCodec:(id)arg1;
- (int)audioSource;
- (id)audioSourceAsString:(int)arg1;
- (id)clientModelVersion;
- (int)codec;
- (id)codecAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)enableServerEndpoint;
- (bool)hasAudioSource;
- (bool)hasClientModelVersion;
- (bool)hasCodec;
- (bool)hasEnableServerEndpoint;
- (bool)hasIsFarField;
- (bool)hasVoiceTriggerInfo;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isFarField;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAudioSource:(int)arg1;
- (void)setClientModelVersion:(id)arg1;
- (void)setCodec:(int)arg1;
- (void)setEnableServerEndpoint:(bool)arg1;
- (void)setHasAudioSource:(bool)arg1;
- (void)setHasCodec:(bool)arg1;
- (void)setHasEnableServerEndpoint:(bool)arg1;
- (void)setHasIsFarField:(bool)arg1;
- (void)setIsFarField:(bool)arg1;
- (void)setVoiceTriggerInfo:(id)arg1;
- (id)voiceTriggerInfo;
- (void)writeTo:(id)arg1;

@end
