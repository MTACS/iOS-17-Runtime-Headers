
@interface INFERENCESchemaINFERENCECommsAppSelectionTrainingContactDependentMessageSignals : SISchemaInstrumentationMessage {
    float  _appContactAffinityScoreForMessages;
    float  _appContactAffinityScoreForMessagesReceived;
    float  _appContactAffinityScoreForMessagesUsingSiri;
    struct { 
        unsigned int appContactAffinityScoreForMessages : 1; 
        unsigned int appContactAffinityScoreForMessagesUsingSiri : 1; 
        unsigned int appContactAffinityScoreForMessagesReceived : 1; 
    }  _has;
}

@property (nonatomic) float appContactAffinityScoreForMessages;
@property (nonatomic) float appContactAffinityScoreForMessagesReceived;
@property (nonatomic) float appContactAffinityScoreForMessagesUsingSiri;
@property (nonatomic) bool hasAppContactAffinityScoreForMessages;
@property (nonatomic) bool hasAppContactAffinityScoreForMessagesReceived;
@property (nonatomic) bool hasAppContactAffinityScoreForMessagesUsingSiri;
@property (nonatomic, readonly) NSData *jsonData;

- (float)appContactAffinityScoreForMessages;
- (float)appContactAffinityScoreForMessagesReceived;
- (float)appContactAffinityScoreForMessagesUsingSiri;
- (void)deleteAppContactAffinityScoreForMessages;
- (void)deleteAppContactAffinityScoreForMessagesReceived;
- (void)deleteAppContactAffinityScoreForMessagesUsingSiri;
- (id)dictionaryRepresentation;
- (bool)hasAppContactAffinityScoreForMessages;
- (bool)hasAppContactAffinityScoreForMessagesReceived;
- (bool)hasAppContactAffinityScoreForMessagesUsingSiri;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAppContactAffinityScoreForMessages:(float)arg1;
- (void)setAppContactAffinityScoreForMessagesReceived:(float)arg1;
- (void)setAppContactAffinityScoreForMessagesUsingSiri:(float)arg1;
- (void)setHasAppContactAffinityScoreForMessages:(bool)arg1;
- (void)setHasAppContactAffinityScoreForMessagesReceived:(bool)arg1;
- (void)setHasAppContactAffinityScoreForMessagesUsingSiri:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
