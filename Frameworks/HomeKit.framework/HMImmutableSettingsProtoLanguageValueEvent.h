
@interface HMImmutableSettingsProtoLanguageValueEvent : PBCodable <NSCopying> {
    NSString * _inputLanguageCode;
    NSString * _outputVoiceGenderCode;
    NSString * _outputVoiceLanguageCode;
    NSString * _voiceName;
}

@property (nonatomic, readonly) bool hasInputLanguageCode;
@property (nonatomic, readonly) bool hasOutputVoiceGenderCode;
@property (nonatomic, readonly) bool hasOutputVoiceLanguageCode;
@property (nonatomic, readonly) bool hasVoiceName;
@property (nonatomic, retain) NSString *inputLanguageCode;
@property (nonatomic, retain) NSString *outputVoiceGenderCode;
@property (nonatomic, retain) NSString *outputVoiceLanguageCode;
@property (nonatomic, retain) NSString *voiceName;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasInputLanguageCode;
- (bool)hasOutputVoiceGenderCode;
- (bool)hasOutputVoiceLanguageCode;
- (bool)hasVoiceName;
- (unsigned long long)hash;
- (id)inputLanguageCode;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)outputVoiceGenderCode;
- (id)outputVoiceLanguageCode;
- (bool)readFrom:(id)arg1;
- (void)setInputLanguageCode:(id)arg1;
- (void)setOutputVoiceGenderCode:(id)arg1;
- (void)setOutputVoiceLanguageCode:(id)arg1;
- (void)setVoiceName:(id)arg1;
- (id)voiceName;
- (void)writeTo:(id)arg1;

@end
