
@interface NanoPhoneVoicemailBody : PBCodable <NSCopying> {
    long long  _voicemailNumber;
    NSData * _voicemailRecording;
}

@property (nonatomic, readonly) bool hasVoicemailRecording;
@property (nonatomic) long long voicemailNumber;
@property (nonatomic, retain) NSData *voicemailRecording;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasVoicemailRecording;
- (unsigned long long)hash;
- (id)initWithAudioMessage:(id)arg1 voicemailNumber:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setVoicemailNumber:(long long)arg1;
- (void)setVoicemailRecording:(id)arg1;
- (long long)voicemailNumber;
- (id)voicemailRecording;
- (void)writeTo:(id)arg1;

@end
