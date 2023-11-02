
@interface SIRINLUINTERNALQUERYREWRITEQRRequest : PBRequest <NSCopying> {
    SIRINLUEXTERNALRequestID * _cdmRequestId;
    NSMutableArray * _interactions;
    SIRINLUEXTERNALUUID * _nluRequestId;
    NSMutableArray * _originalInteractions;
    SIRINLUEXTERNALUUID * _requestId;
    NSString * _resultCandidateId;
}

@property (nonatomic, retain) SIRINLUEXTERNALRequestID *cdmRequestId;
@property (nonatomic, readonly) bool hasCdmRequestId;
@property (nonatomic, readonly) bool hasNluRequestId;
@property (nonatomic, readonly) bool hasRequestId;
@property (nonatomic, readonly) bool hasResultCandidateId;
@property (nonatomic, retain) NSMutableArray *interactions;
@property (nonatomic, retain) SIRINLUEXTERNALUUID *nluRequestId;
@property (nonatomic, retain) NSMutableArray *originalInteractions;
@property (nonatomic, retain) SIRINLUEXTERNALUUID *requestId;
@property (nonatomic, retain) NSString *resultCandidateId;

+ (Class)interactionsType;
+ (Class)originalInteractionsType;

- (void).cxx_destruct;
- (void)addInteractions:(id)arg1;
- (void)addOriginalInteractions:(id)arg1;
- (id)cdmRequestId;
- (void)clearInteractions;
- (void)clearOriginalInteractions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCdmRequestId;
- (bool)hasNluRequestId;
- (bool)hasRequestId;
- (bool)hasResultCandidateId;
- (unsigned long long)hash;
- (id)interactions;
- (id)interactionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)interactionsCount;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)nluRequestId;
- (id)originalInteractions;
- (id)originalInteractionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)originalInteractionsCount;
- (bool)readFrom:(id)arg1;
- (id)requestId;
- (id)resultCandidateId;
- (void)setCdmRequestId:(id)arg1;
- (void)setInteractions:(id)arg1;
- (void)setNluRequestId:(id)arg1;
- (void)setOriginalInteractions:(id)arg1;
- (void)setRequestId:(id)arg1;
- (void)setResultCandidateId:(id)arg1;
- (void)writeTo:(id)arg1;

@end
