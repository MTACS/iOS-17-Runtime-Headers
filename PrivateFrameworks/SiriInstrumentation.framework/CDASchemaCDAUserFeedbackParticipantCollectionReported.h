
@interface CDASchemaCDAUserFeedbackParticipantCollectionReported : SISchemaInstrumentationMessage {
    bool  _hasSurveyId;
    NSString * _surveyId;
    NSArray * _userFeedbackParticipants;
}

@property (nonatomic) bool hasSurveyId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *surveyId;
@property (nonatomic, copy) NSArray *userFeedbackParticipants;

- (void).cxx_destruct;
- (void)addUserFeedbackParticipant:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearUserFeedbackParticipant;
- (void)deleteSurveyId;
- (void)deleteUserFeedbackParticipant;
- (id)dictionaryRepresentation;
- (bool)hasSurveyId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasSurveyId:(bool)arg1;
- (void)setSurveyId:(id)arg1;
- (void)setUserFeedbackParticipants:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)surveyId;
- (id)userFeedbackParticipantAtIndex:(unsigned long long)arg1;
- (unsigned long long)userFeedbackParticipantCount;
- (id)userFeedbackParticipants;
- (void)writeTo:(id)arg1;

@end
