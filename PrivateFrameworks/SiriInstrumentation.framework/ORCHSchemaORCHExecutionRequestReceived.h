
@interface ORCHSchemaORCHExecutionRequestReceived : SISchemaInstrumentationMessage {
    int  _commandSource;
    bool  _executionForRSKE;
    struct { 
        unsigned int preExecutionDecision : 1; 
        unsigned int executionForRSKE : 1; 
        unsigned int commandSource : 1; 
    }  _has;
    int  _preExecutionDecision;
}

@property (nonatomic) int commandSource;
@property (nonatomic) bool executionForRSKE;
@property (nonatomic) bool hasCommandSource;
@property (nonatomic) bool hasExecutionForRSKE;
@property (nonatomic) bool hasPreExecutionDecision;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int preExecutionDecision;

- (int)commandSource;
- (void)deleteCommandSource;
- (void)deleteExecutionForRSKE;
- (void)deletePreExecutionDecision;
- (id)dictionaryRepresentation;
- (bool)executionForRSKE;
- (bool)hasCommandSource;
- (bool)hasExecutionForRSKE;
- (bool)hasPreExecutionDecision;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)preExecutionDecision;
- (bool)readFrom:(id)arg1;
- (void)setCommandSource:(int)arg1;
- (void)setExecutionForRSKE:(bool)arg1;
- (void)setHasCommandSource:(bool)arg1;
- (void)setHasExecutionForRSKE:(bool)arg1;
- (void)setHasPreExecutionDecision:(bool)arg1;
- (void)setPreExecutionDecision:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
