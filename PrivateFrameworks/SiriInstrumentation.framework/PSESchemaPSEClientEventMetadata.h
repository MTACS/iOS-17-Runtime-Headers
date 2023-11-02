
@interface PSESchemaPSEClientEventMetadata : SISchemaInstrumentationMessage {
    struct { 
        unsigned int siriEngagementTaskSuccess : 1; 
        unsigned int triggerOrigin : 1; 
    }  _has;
    bool  _hasOriginalLastRequestId;
    bool  _hasPseId;
    bool  _hasTaskId;
    bool  _hasUiSessionId;
    SISchemaUUID * _originalLastRequestId;
    SISchemaUUID * _pseId;
    int  _siriEngagementTaskSuccess;
    SISchemaUUID * _taskId;
    int  _triggerOrigin;
    SISchemaUUID * _uiSessionId;
}

@property (nonatomic) bool hasOriginalLastRequestId;
@property (nonatomic) bool hasPseId;
@property (nonatomic) bool hasSiriEngagementTaskSuccess;
@property (nonatomic) bool hasTaskId;
@property (nonatomic) bool hasTriggerOrigin;
@property (nonatomic) bool hasUiSessionId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *originalLastRequestId;
@property (nonatomic, retain) SISchemaUUID *pseId;
@property (nonatomic) int siriEngagementTaskSuccess;
@property (nonatomic, retain) SISchemaUUID *taskId;
@property (nonatomic) int triggerOrigin;
@property (nonatomic, retain) SISchemaUUID *uiSessionId;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteOriginalLastRequestId;
- (void)deletePseId;
- (void)deleteSiriEngagementTaskSuccess;
- (void)deleteTaskId;
- (void)deleteTriggerOrigin;
- (void)deleteUiSessionId;
- (id)dictionaryRepresentation;
- (bool)hasOriginalLastRequestId;
- (bool)hasPseId;
- (bool)hasSiriEngagementTaskSuccess;
- (bool)hasTaskId;
- (bool)hasTriggerOrigin;
- (bool)hasUiSessionId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)originalLastRequestId;
- (id)pseId;
- (bool)readFrom:(id)arg1;
- (void)setHasOriginalLastRequestId:(bool)arg1;
- (void)setHasPseId:(bool)arg1;
- (void)setHasSiriEngagementTaskSuccess:(bool)arg1;
- (void)setHasTaskId:(bool)arg1;
- (void)setHasTriggerOrigin:(bool)arg1;
- (void)setHasUiSessionId:(bool)arg1;
- (void)setOriginalLastRequestId:(id)arg1;
- (void)setPseId:(id)arg1;
- (void)setSiriEngagementTaskSuccess:(int)arg1;
- (void)setTaskId:(id)arg1;
- (void)setTriggerOrigin:(int)arg1;
- (void)setUiSessionId:(id)arg1;
- (int)siriEngagementTaskSuccess;
- (id)suppressMessageUnderConditions;
- (id)taskId;
- (int)triggerOrigin;
- (id)uiSessionId;
- (void)writeTo:(id)arg1;

@end
