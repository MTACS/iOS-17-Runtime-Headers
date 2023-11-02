
@interface SIRINLUINTERNALQUERYREWRITEQRResponse : PBCodable <NSCopying> {
    struct { 
        unsigned int repetitionType : 1; 
    }  _has;
    NSMutableArray * _qrHypotheses;
    int  _repetitionType;
    SIRINLUEXTERNALUUID * _requestId;
    NSMutableArray * _rewriteHypotheses;
}

@property (nonatomic) bool hasRepetitionType;
@property (nonatomic, readonly) bool hasRequestId;
@property (nonatomic, retain) NSMutableArray *qrHypotheses;
@property (nonatomic) int repetitionType;
@property (nonatomic, retain) SIRINLUEXTERNALUUID *requestId;
@property (nonatomic, retain) NSMutableArray *rewriteHypotheses;

+ (Class)qrHypothesesType;
+ (Class)rewriteHypothesesType;

- (void).cxx_destruct;
- (int)StringAsRepetitionType:(id)arg1;
- (void)addQrHypotheses:(id)arg1;
- (void)addRewriteHypotheses:(id)arg1;
- (void)clearQrHypotheses;
- (void)clearRewriteHypotheses;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRepetitionType;
- (bool)hasRequestId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)qrHypotheses;
- (id)qrHypothesesAtIndex:(unsigned long long)arg1;
- (unsigned long long)qrHypothesesCount;
- (bool)readFrom:(id)arg1;
- (int)repetitionType;
- (id)repetitionTypeAsString:(int)arg1;
- (id)requestId;
- (id)rewriteHypotheses;
- (id)rewriteHypothesesAtIndex:(unsigned long long)arg1;
- (unsigned long long)rewriteHypothesesCount;
- (void)setHasRepetitionType:(bool)arg1;
- (void)setQrHypotheses:(id)arg1;
- (void)setRepetitionType:(int)arg1;
- (void)setRequestId:(id)arg1;
- (void)setRewriteHypotheses:(id)arg1;
- (void)writeTo:(id)arg1;

@end
