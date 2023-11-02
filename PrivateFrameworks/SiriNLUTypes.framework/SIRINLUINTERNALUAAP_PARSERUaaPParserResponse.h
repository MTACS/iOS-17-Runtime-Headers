
@interface SIRINLUINTERNALUAAP_PARSERUaaPParserResponse : PBCodable <NSCopying> {
    NSMutableArray * _hypotheses;
    SIRINLUEXTERNALUUID * _requestId;
}

@property (nonatomic, readonly) bool hasRequestId;
@property (nonatomic, retain) NSMutableArray *hypotheses;
@property (nonatomic, retain) SIRINLUEXTERNALUUID *requestId;

+ (Class)hypothesesType;

- (void).cxx_destruct;
- (void)addHypotheses:(id)arg1;
- (void)clearHypotheses;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRequestId;
- (unsigned long long)hash;
- (id)hypotheses;
- (id)hypothesesAtIndex:(unsigned long long)arg1;
- (unsigned long long)hypothesesCount;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)requestId;
- (void)setHypotheses:(id)arg1;
- (void)setRequestId:(id)arg1;
- (void)writeTo:(id)arg1;

@end
