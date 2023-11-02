
@interface SIRINLUEXTERNALCDMNluRequest : PBRequest <NSCopying> {
    SIRINLUEXTERNALTurnInput * _currentTurnInput;
    NSMutableArray * _previousTurnInputs;
    SIRINLUEXTERNALRequestID * _requestId;
}

@property (nonatomic, retain) SIRINLUEXTERNALTurnInput *currentTurnInput;
@property (nonatomic, readonly) bool hasCurrentTurnInput;
@property (nonatomic, readonly) bool hasRequestId;
@property (nonatomic, retain) NSMutableArray *previousTurnInputs;
@property (nonatomic, retain) SIRINLUEXTERNALRequestID *requestId;

+ (Class)previousTurnInputsType;

- (void).cxx_destruct;
- (void)addPreviousTurnInputs:(id)arg1;
- (void)clearPreviousTurnInputs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentTurnInput;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCurrentTurnInput;
- (bool)hasRequestId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)previousTurnInputs;
- (id)previousTurnInputsAtIndex:(unsigned long long)arg1;
- (unsigned long long)previousTurnInputsCount;
- (bool)readFrom:(id)arg1;
- (id)requestId;
- (void)setCurrentTurnInput:(id)arg1;
- (void)setPreviousTurnInputs:(id)arg1;
- (void)setRequestId:(id)arg1;
- (void)writeTo:(id)arg1;

@end
