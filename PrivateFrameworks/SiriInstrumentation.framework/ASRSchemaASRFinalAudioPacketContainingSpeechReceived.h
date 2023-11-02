
@interface ASRSchemaASRFinalAudioPacketContainingSpeechReceived : SISchemaInstrumentationMessage {
    bool  _exists;
    struct { 
        unsigned int exists : 1; 
    }  _has;
    bool  _hasLoggableSharedUserId;
    bool  _hasResultCandidateId;
    NSString * _loggableSharedUserId;
    NSString * _resultCandidateId;
}

@property (nonatomic) bool exists;
@property (nonatomic) bool hasExists;
@property (nonatomic) bool hasLoggableSharedUserId;
@property (nonatomic) bool hasResultCandidateId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *loggableSharedUserId;
@property (nonatomic, copy) NSString *resultCandidateId;

- (void).cxx_destruct;
- (void)deleteExists;
- (void)deleteLoggableSharedUserId;
- (void)deleteResultCandidateId;
- (id)dictionaryRepresentation;
- (bool)exists;
- (bool)hasExists;
- (bool)hasLoggableSharedUserId;
- (bool)hasResultCandidateId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)loggableSharedUserId;
- (bool)readFrom:(id)arg1;
- (id)resultCandidateId;
- (void)setExists:(bool)arg1;
- (void)setHasExists:(bool)arg1;
- (void)setHasLoggableSharedUserId:(bool)arg1;
- (void)setHasResultCandidateId:(bool)arg1;
- (void)setLoggableSharedUserId:(id)arg1;
- (void)setResultCandidateId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
