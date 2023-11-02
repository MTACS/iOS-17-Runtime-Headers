
@interface MHSchemaMHAssistantDaemonAudioRecordingInterruptionStarted : SISchemaInstrumentationMessage {
    NSString * _avAudioSessionInterruptionType;
    NSString * _avAudioSessionInterruptorName;
    bool  _hasAvAudioSessionInterruptionType;
    bool  _hasAvAudioSessionInterruptorName;
    bool  _hasLinkId;
    SISchemaUUID * _linkId;
}

@property (nonatomic, copy) NSString *avAudioSessionInterruptionType;
@property (nonatomic, copy) NSString *avAudioSessionInterruptorName;
@property (nonatomic) bool hasAvAudioSessionInterruptionType;
@property (nonatomic) bool hasAvAudioSessionInterruptorName;
@property (nonatomic) bool hasLinkId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *linkId;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)avAudioSessionInterruptionType;
- (id)avAudioSessionInterruptorName;
- (void)deleteAvAudioSessionInterruptionType;
- (void)deleteAvAudioSessionInterruptorName;
- (void)deleteLinkId;
- (id)dictionaryRepresentation;
- (bool)hasAvAudioSessionInterruptionType;
- (bool)hasAvAudioSessionInterruptorName;
- (bool)hasLinkId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)linkId;
- (bool)readFrom:(id)arg1;
- (void)setAvAudioSessionInterruptionType:(id)arg1;
- (void)setAvAudioSessionInterruptorName:(id)arg1;
- (void)setHasAvAudioSessionInterruptionType:(bool)arg1;
- (void)setHasAvAudioSessionInterruptorName:(bool)arg1;
- (void)setHasLinkId:(bool)arg1;
- (void)setLinkId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
