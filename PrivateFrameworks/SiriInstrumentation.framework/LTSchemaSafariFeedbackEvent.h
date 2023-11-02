
@interface LTSchemaSafariFeedbackEvent : SISchemaInstrumentationMessage {
    bool  _hasSessionID;
    bool  _hasTask;
    bool  _hasUserFeedbackContentSource;
    bool  _hasUserFeedbackContentTarget;
    NSString * _sessionID;
    LTSchemaTask * _task;
    NSString * _userFeedbackContentSource;
    NSString * _userFeedbackContentTarget;
}

@property (nonatomic) bool hasSessionID;
@property (nonatomic) bool hasTask;
@property (nonatomic) bool hasUserFeedbackContentSource;
@property (nonatomic) bool hasUserFeedbackContentTarget;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *sessionID;
@property (nonatomic, retain) LTSchemaTask *task;
@property (nonatomic, copy) NSString *userFeedbackContentSource;
@property (nonatomic, copy) NSString *userFeedbackContentTarget;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteSessionID;
- (void)deleteTask;
- (void)deleteUserFeedbackContentSource;
- (void)deleteUserFeedbackContentTarget;
- (id)dictionaryRepresentation;
- (bool)hasSessionID;
- (bool)hasTask;
- (bool)hasUserFeedbackContentSource;
- (bool)hasUserFeedbackContentTarget;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)sessionID;
- (void)setHasSessionID:(bool)arg1;
- (void)setHasTask:(bool)arg1;
- (void)setHasUserFeedbackContentSource:(bool)arg1;
- (void)setHasUserFeedbackContentTarget:(bool)arg1;
- (void)setSessionID:(id)arg1;
- (void)setTask:(id)arg1;
- (void)setUserFeedbackContentSource:(id)arg1;
- (void)setUserFeedbackContentTarget:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)task;
- (id)userFeedbackContentSource;
- (id)userFeedbackContentTarget;
- (void)writeTo:(id)arg1;

@end
