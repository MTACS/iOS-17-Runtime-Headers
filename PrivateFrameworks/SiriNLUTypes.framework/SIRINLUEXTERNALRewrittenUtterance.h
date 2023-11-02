
@interface SIRINLUEXTERNALRewrittenUtterance : PBCodable <NSCopying> {
    struct { 
        unsigned int score : 1; 
    }  _has;
    SIRICOMMONStringValue * _rewrittenUtterance;
    double  _score;
}

@property (nonatomic, readonly) bool hasRewrittenUtterance;
@property (nonatomic) bool hasScore;
@property (nonatomic, retain) SIRICOMMONStringValue *rewrittenUtterance;
@property (nonatomic) double score;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRewrittenUtterance;
- (bool)hasScore;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)rewrittenUtterance;
- (double)score;
- (void)setHasScore:(bool)arg1;
- (void)setRewrittenUtterance:(id)arg1;
- (void)setScore:(double)arg1;
- (void)writeTo:(id)arg1;

@end
