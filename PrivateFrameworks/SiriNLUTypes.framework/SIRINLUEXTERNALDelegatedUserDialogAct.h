
@interface SIRINLUEXTERNALDelegatedUserDialogAct : PBCodable <NSCopying> {
    unsigned int  _asrHypothesisIndex;
    NSString * _externalParserId;
    struct { 
        unsigned int asrHypothesisIndex : 1; 
    }  _has;
    NSMutableArray * _matchingSpans;
    SIRINLUEXTERNALReferenceContext * _referenceContext;
    SIRINLUEXTERNALRewriteMessage * _rewrite;
    SIRICOMMONStringValue * _rewrittenUtterance;
}

@property (nonatomic) unsigned int asrHypothesisIndex;
@property (nonatomic, retain) NSString *externalParserId;
@property (nonatomic) bool hasAsrHypothesisIndex;
@property (nonatomic, readonly) bool hasExternalParserId;
@property (nonatomic, readonly) bool hasReferenceContext;
@property (nonatomic, readonly) bool hasRewrite;
@property (nonatomic, readonly) bool hasRewrittenUtterance;
@property (nonatomic, retain) NSMutableArray *matchingSpans;
@property (nonatomic, retain) SIRINLUEXTERNALReferenceContext *referenceContext;
@property (nonatomic, retain) SIRINLUEXTERNALRewriteMessage *rewrite;
@property (nonatomic, retain) SIRICOMMONStringValue *rewrittenUtterance;

+ (Class)matchingSpansType;

- (void).cxx_destruct;
- (void)addMatchingSpans:(id)arg1;
- (unsigned int)asrHypothesisIndex;
- (void)clearMatchingSpans;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)externalParserId;
- (bool)hasAsrHypothesisIndex;
- (bool)hasExternalParserId;
- (bool)hasReferenceContext;
- (bool)hasRewrite;
- (bool)hasRewrittenUtterance;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)matchingSpans;
- (id)matchingSpansAtIndex:(unsigned long long)arg1;
- (unsigned long long)matchingSpansCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)referenceContext;
- (id)rewrite;
- (id)rewrittenUtterance;
- (void)setAsrHypothesisIndex:(unsigned int)arg1;
- (void)setExternalParserId:(id)arg1;
- (void)setHasAsrHypothesisIndex:(bool)arg1;
- (void)setMatchingSpans:(id)arg1;
- (void)setReferenceContext:(id)arg1;
- (void)setRewrite:(id)arg1;
- (void)setRewrittenUtterance:(id)arg1;
- (void)writeTo:(id)arg1;

@end
