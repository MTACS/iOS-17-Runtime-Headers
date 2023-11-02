
@interface SIRINLUINTERNALQUERYREWRITEQRHypothesis : PBCodable <NSCopying> {
    SIRINLUEXTERNALUUID * _asrId;
    double  _confidence;
    struct { 
        unsigned int confidence : 1; 
        unsigned int rewriteType : 1; 
    }  _has;
    int  _rewriteType;
    NSString * _utterance;
}

@property (nonatomic, retain) SIRINLUEXTERNALUUID *asrId;
@property (nonatomic) double confidence;
@property (nonatomic, readonly) bool hasAsrId;
@property (nonatomic) bool hasConfidence;
@property (nonatomic) bool hasRewriteType;
@property (nonatomic, readonly) bool hasUtterance;
@property (nonatomic) int rewriteType;
@property (nonatomic, retain) NSString *utterance;

+ (id)options;

- (void).cxx_destruct;
- (int)StringAsRewriteType:(id)arg1;
- (id)asrId;
- (double)confidence;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAsrId;
- (bool)hasConfidence;
- (bool)hasRewriteType;
- (bool)hasUtterance;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)rewriteType;
- (id)rewriteTypeAsString:(int)arg1;
- (void)setAsrId:(id)arg1;
- (void)setConfidence:(double)arg1;
- (void)setHasConfidence:(bool)arg1;
- (void)setHasRewriteType:(bool)arg1;
- (void)setRewriteType:(int)arg1;
- (void)setUtterance:(id)arg1;
- (id)utterance;
- (void)writeTo:(id)arg1;

@end
