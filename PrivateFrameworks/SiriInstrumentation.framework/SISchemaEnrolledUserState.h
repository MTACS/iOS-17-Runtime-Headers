
@interface SISchemaEnrolledUserState : SISchemaInstrumentationMessage {
    bool  _hasPersonalization;
    bool  _hasSiriLinkedSpeechID;
    SISchemaPersonalization * _personalization;
    NSString * _siriLinkedSpeechID;
}

@property (nonatomic) bool hasPersonalization;
@property (nonatomic) bool hasSiriLinkedSpeechID;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaPersonalization *personalization;
@property (nonatomic, copy) NSString *siriLinkedSpeechID;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deletePersonalization;
- (void)deleteSiriLinkedSpeechID;
- (id)dictionaryRepresentation;
- (bool)hasPersonalization;
- (bool)hasSiriLinkedSpeechID;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)personalization;
- (bool)readFrom:(id)arg1;
- (void)setHasPersonalization:(bool)arg1;
- (void)setHasSiriLinkedSpeechID:(bool)arg1;
- (void)setPersonalization:(id)arg1;
- (void)setSiriLinkedSpeechID:(id)arg1;
- (id)siriLinkedSpeechID;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
