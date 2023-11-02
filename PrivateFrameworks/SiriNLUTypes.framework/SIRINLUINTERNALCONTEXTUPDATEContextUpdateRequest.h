
@interface SIRINLUINTERNALCONTEXTUPDATEContextUpdateRequest : PBRequest <NSCopying> {
    SIRINLUEXTERNALTurnInput * _currentTurn;
    SIRINLUEXTERNALUUID * _nluRequestId;
    NSMutableArray * _previousTurns;
    NSMutableArray * _qrHypotheses;
    SIRINLUEXTERNALUUID * _requestId;
    NSString * _resultCandidateId;
}

@property (nonatomic, retain) SIRINLUEXTERNALTurnInput *currentTurn;
@property (nonatomic, readonly) bool hasCurrentTurn;
@property (nonatomic, readonly) bool hasNluRequestId;
@property (nonatomic, readonly) bool hasRequestId;
@property (nonatomic, readonly) bool hasResultCandidateId;
@property (nonatomic, retain) SIRINLUEXTERNALUUID *nluRequestId;
@property (nonatomic, retain) NSMutableArray *previousTurns;
@property (nonatomic, retain) NSMutableArray *qrHypotheses;
@property (nonatomic, retain) SIRINLUEXTERNALUUID *requestId;
@property (nonatomic, retain) NSString *resultCandidateId;

+ (Class)previousTurnsType;
+ (Class)qrHypothesesType;

- (void).cxx_destruct;
- (void)addPreviousTurns:(id)arg1;
- (void)addQrHypotheses:(id)arg1;
- (void)clearPreviousTurns;
- (void)clearQrHypotheses;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentTurn;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCurrentTurn;
- (bool)hasNluRequestId;
- (bool)hasRequestId;
- (bool)hasResultCandidateId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)nluRequestId;
- (id)previousTurns;
- (id)previousTurnsAtIndex:(unsigned long long)arg1;
- (unsigned long long)previousTurnsCount;
- (id)qrHypotheses;
- (id)qrHypothesesAtIndex:(unsigned long long)arg1;
- (unsigned long long)qrHypothesesCount;
- (bool)readFrom:(id)arg1;
- (id)requestId;
- (id)resultCandidateId;
- (void)setCurrentTurn:(id)arg1;
- (void)setNluRequestId:(id)arg1;
- (void)setPreviousTurns:(id)arg1;
- (void)setQrHypotheses:(id)arg1;
- (void)setRequestId:(id)arg1;
- (void)setResultCandidateId:(id)arg1;
- (void)writeTo:(id)arg1;

@end
