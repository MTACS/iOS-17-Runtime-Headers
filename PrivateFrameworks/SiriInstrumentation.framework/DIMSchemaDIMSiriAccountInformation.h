
@interface DIMSchemaDIMSiriAccountInformation : SISchemaInstrumentationMessage {
    bool  _hasSiriDeviceId;
    bool  _hasSiriSpeechId;
    bool  _hasSiriUserId;
    NSString * _siriDeviceId;
    NSString * _siriSpeechId;
    NSString * _siriUserId;
}

@property (nonatomic) bool hasSiriDeviceId;
@property (nonatomic) bool hasSiriSpeechId;
@property (nonatomic) bool hasSiriUserId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *siriDeviceId;
@property (nonatomic, copy) NSString *siriSpeechId;
@property (nonatomic, copy) NSString *siriUserId;

- (void).cxx_destruct;
- (void)deleteSiriDeviceId;
- (void)deleteSiriSpeechId;
- (void)deleteSiriUserId;
- (id)dictionaryRepresentation;
- (bool)hasSiriDeviceId;
- (bool)hasSiriSpeechId;
- (bool)hasSiriUserId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasSiriDeviceId:(bool)arg1;
- (void)setHasSiriSpeechId:(bool)arg1;
- (void)setHasSiriUserId:(bool)arg1;
- (void)setSiriDeviceId:(id)arg1;
- (void)setSiriSpeechId:(id)arg1;
- (void)setSiriUserId:(id)arg1;
- (id)siriDeviceId;
- (id)siriSpeechId;
- (id)siriUserId;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
