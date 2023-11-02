
@interface INFERENCESchemaINFERENCECommsAppSelectionTrainingAppDependentMessageSignals : SISchemaInstrumentationMessage {
    float  _appAffinityScoreForMessages;
    float  _appAffinityScoreForMessagesReceived;
    float  _appAffinityScoreForMessagesUsingSiri;
    struct { 
        unsigned int appAffinityScoreForMessages : 1; 
        unsigned int appAffinityScoreForMessagesUsingSiri : 1; 
        unsigned int appAffinityScoreForMessagesReceived : 1; 
    }  _has;
}

@property (nonatomic) float appAffinityScoreForMessages;
@property (nonatomic) float appAffinityScoreForMessagesReceived;
@property (nonatomic) float appAffinityScoreForMessagesUsingSiri;
@property (nonatomic) bool hasAppAffinityScoreForMessages;
@property (nonatomic) bool hasAppAffinityScoreForMessagesReceived;
@property (nonatomic) bool hasAppAffinityScoreForMessagesUsingSiri;
@property (nonatomic, readonly) NSData *jsonData;

- (float)appAffinityScoreForMessages;
- (float)appAffinityScoreForMessagesReceived;
- (float)appAffinityScoreForMessagesUsingSiri;
- (void)deleteAppAffinityScoreForMessages;
- (void)deleteAppAffinityScoreForMessagesReceived;
- (void)deleteAppAffinityScoreForMessagesUsingSiri;
- (id)dictionaryRepresentation;
- (bool)hasAppAffinityScoreForMessages;
- (bool)hasAppAffinityScoreForMessagesReceived;
- (bool)hasAppAffinityScoreForMessagesUsingSiri;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAppAffinityScoreForMessages:(float)arg1;
- (void)setAppAffinityScoreForMessagesReceived:(float)arg1;
- (void)setAppAffinityScoreForMessagesUsingSiri:(float)arg1;
- (void)setHasAppAffinityScoreForMessages:(bool)arg1;
- (void)setHasAppAffinityScoreForMessagesReceived:(bool)arg1;
- (void)setHasAppAffinityScoreForMessagesUsingSiri:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
