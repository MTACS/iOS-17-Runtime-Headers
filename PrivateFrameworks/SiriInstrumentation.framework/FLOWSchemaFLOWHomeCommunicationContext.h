
@interface FLOWSchemaFLOWHomeCommunicationContext : SISchemaInstrumentationMessage {
    struct { 
        unsigned int taskType : 1; 
    }  _has;
    bool  _hasHomeContext;
    bool  _hasSendOrReplyContext;
    FLOWSchemaFLOWHomeContext * _homeContext;
    FLOWSchemaFLOWHomeCommunicationSendOrReply * _sendOrReplyContext;
    int  _taskType;
    unsigned long long  _whichTaskcontext;
}

@property (nonatomic) bool hasHomeContext;
@property (nonatomic) bool hasSendOrReplyContext;
@property (nonatomic) bool hasTaskType;
@property (nonatomic, retain) FLOWSchemaFLOWHomeContext *homeContext;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) FLOWSchemaFLOWHomeCommunicationSendOrReply *sendOrReplyContext;
@property (nonatomic) int taskType;
@property (nonatomic, readonly) unsigned long long whichTaskcontext;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteHomeContext;
- (void)deleteSendOrReplyContext;
- (void)deleteTaskType;
- (id)dictionaryRepresentation;
- (bool)hasHomeContext;
- (bool)hasSendOrReplyContext;
- (bool)hasTaskType;
- (unsigned long long)hash;
- (id)homeContext;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)sendOrReplyContext;
- (void)setHasHomeContext:(bool)arg1;
- (void)setHasSendOrReplyContext:(bool)arg1;
- (void)setHasTaskType:(bool)arg1;
- (void)setHomeContext:(id)arg1;
- (void)setSendOrReplyContext:(id)arg1;
- (void)setTaskType:(int)arg1;
- (id)suppressMessageUnderConditions;
- (int)taskType;
- (unsigned long long)whichTaskcontext;
- (void)writeTo:(id)arg1;

@end
