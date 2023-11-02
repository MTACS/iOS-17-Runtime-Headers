
@interface SISchemaPNRTextToSpeechRequestReceived : SISchemaInstrumentationMessage {
    struct { 
        unsigned int isWarmStart : 1; 
        unsigned int isSynthesisCached : 1; 
        unsigned int sourceOfTTS : 1; 
        unsigned int speechError : 1; 
    }  _has;
    bool  _hasVoiceAssetKey;
    bool  _hasVoiceResourceAssetKey;
    bool  _isSynthesisCached;
    bool  _isWarmStart;
    int  _sourceOfTTS;
    int  _speechError;
    NSString * _voiceAssetKey;
    NSString * _voiceResourceAssetKey;
}

@property (nonatomic) bool hasIsSynthesisCached;
@property (nonatomic) bool hasIsWarmStart;
@property (nonatomic) bool hasSourceOfTTS;
@property (nonatomic) bool hasSpeechError;
@property (nonatomic) bool hasVoiceAssetKey;
@property (nonatomic) bool hasVoiceResourceAssetKey;
@property (nonatomic) bool isSynthesisCached;
@property (nonatomic) bool isWarmStart;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int sourceOfTTS;
@property (nonatomic) int speechError;
@property (nonatomic, copy) NSString *voiceAssetKey;
@property (nonatomic, copy) NSString *voiceResourceAssetKey;

- (void).cxx_destruct;
- (void)deleteIsSynthesisCached;
- (void)deleteIsWarmStart;
- (void)deleteSourceOfTTS;
- (void)deleteSpeechError;
- (void)deleteVoiceAssetKey;
- (void)deleteVoiceResourceAssetKey;
- (id)dictionaryRepresentation;
- (bool)hasIsSynthesisCached;
- (bool)hasIsWarmStart;
- (bool)hasSourceOfTTS;
- (bool)hasSpeechError;
- (bool)hasVoiceAssetKey;
- (bool)hasVoiceResourceAssetKey;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isSynthesisCached;
- (bool)isWarmStart;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasIsSynthesisCached:(bool)arg1;
- (void)setHasIsWarmStart:(bool)arg1;
- (void)setHasSourceOfTTS:(bool)arg1;
- (void)setHasSpeechError:(bool)arg1;
- (void)setHasVoiceAssetKey:(bool)arg1;
- (void)setHasVoiceResourceAssetKey:(bool)arg1;
- (void)setIsSynthesisCached:(bool)arg1;
- (void)setIsWarmStart:(bool)arg1;
- (void)setSourceOfTTS:(int)arg1;
- (void)setSpeechError:(int)arg1;
- (void)setVoiceAssetKey:(id)arg1;
- (void)setVoiceResourceAssetKey:(id)arg1;
- (int)sourceOfTTS;
- (int)speechError;
- (id)suppressMessageUnderConditions;
- (id)voiceAssetKey;
- (id)voiceResourceAssetKey;
- (void)writeTo:(id)arg1;

@end
