
@interface SIRINLUEXTERNALNLUSupplementaryOutput : PBCodable <NSCopying> {
    SIRINLUEXTERNALCorrectionOutcome * _correctionOutcome;
    NSMutableArray * _matchingSpans;
    SIRINLUEXTERNALRewriteMessage * _rewrite;
}

@property (nonatomic, retain) SIRINLUEXTERNALCorrectionOutcome *correctionOutcome;
@property (nonatomic, readonly) bool hasCorrectionOutcome;
@property (nonatomic, readonly) bool hasRewrite;
@property (nonatomic, retain) NSMutableArray *matchingSpans;
@property (nonatomic, retain) SIRINLUEXTERNALRewriteMessage *rewrite;

+ (Class)matchingSpansType;

- (void).cxx_destruct;
- (void)addMatchingSpans:(id)arg1;
- (void)clearMatchingSpans;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)correctionOutcome;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCorrectionOutcome;
- (bool)hasRewrite;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)matchingSpans;
- (id)matchingSpansAtIndex:(unsigned long long)arg1;
- (unsigned long long)matchingSpansCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)rewrite;
- (void)setCorrectionOutcome:(id)arg1;
- (void)setMatchingSpans:(id)arg1;
- (void)setRewrite:(id)arg1;
- (void)writeTo:(id)arg1;

@end
