
@interface ORCHSchemaORCHFlowOutputSubmitted : SISchemaInstrumentationMessage {
    bool  _flowCommandReceived;
    bool  _flowCommandResponseError;
    int  _flowOutputSubmissionId;
    struct { 
        unsigned int flowOutputSubmissionId : 1; 
        unsigned int flowCommandReceived : 1; 
        unsigned int flowCommandResponseError : 1; 
    }  _has;
}

@property (nonatomic) bool flowCommandReceived;
@property (nonatomic) bool flowCommandResponseError;
@property (nonatomic) int flowOutputSubmissionId;
@property (nonatomic) bool hasFlowCommandReceived;
@property (nonatomic) bool hasFlowCommandResponseError;
@property (nonatomic) bool hasFlowOutputSubmissionId;
@property (nonatomic, readonly) NSData *jsonData;

- (void)deleteFlowCommandReceived;
- (void)deleteFlowCommandResponseError;
- (void)deleteFlowOutputSubmissionId;
- (id)dictionaryRepresentation;
- (bool)flowCommandReceived;
- (bool)flowCommandResponseError;
- (int)flowOutputSubmissionId;
- (bool)hasFlowCommandReceived;
- (bool)hasFlowCommandResponseError;
- (bool)hasFlowOutputSubmissionId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setFlowCommandReceived:(bool)arg1;
- (void)setFlowCommandResponseError:(bool)arg1;
- (void)setFlowOutputSubmissionId:(int)arg1;
- (void)setHasFlowCommandReceived:(bool)arg1;
- (void)setHasFlowCommandResponseError:(bool)arg1;
- (void)setHasFlowOutputSubmissionId:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
