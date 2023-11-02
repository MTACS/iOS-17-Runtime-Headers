
@interface ASRSchemaASRFinalAudioPacketContainingSpeechReadyUpstream : SISchemaInstrumentationMessage {
    bool  _hasLoggableSharedUserId;
    bool  _hasResultCandidateId;
    NSString * _loggableSharedUserId;
    NSString * _resultCandidateId;
}

@property (nonatomic) bool hasLoggableSharedUserId;
@property (nonatomic) bool hasResultCandidateId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *loggableSharedUserId;
@property (nonatomic, copy) NSString *resultCandidateId;

- (void).cxx_destruct;
- (void)deleteLoggableSharedUserId;
- (void)deleteResultCandidateId;
- (id)dictionaryRepresentation;
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
- (void)setHasLoggableSharedUserId:(bool)arg1;
- (void)setHasResultCandidateId:(bool)arg1;
- (void)setLoggableSharedUserId:(id)arg1;
- (void)setResultCandidateId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
