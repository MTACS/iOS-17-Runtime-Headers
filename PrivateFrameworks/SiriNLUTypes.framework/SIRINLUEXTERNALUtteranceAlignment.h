
@interface SIRINLUEXTERNALUtteranceAlignment : PBCodable <NSCopying> {
    unsigned int  _asrHypothesisIndex;
    struct { 
        unsigned int asrHypothesisIndex : 1; 
        unsigned int nodeIndex : 1; 
    }  _has;
    unsigned int  _nodeIndex;
    NSMutableArray * _spans;
}

@property (nonatomic) unsigned int asrHypothesisIndex;
@property (nonatomic) bool hasAsrHypothesisIndex;
@property (nonatomic) bool hasNodeIndex;
@property (nonatomic) unsigned int nodeIndex;
@property (nonatomic, retain) NSMutableArray *spans;

// Image: /System/Library/PrivateFrameworks/SiriNLUTypes.framework/SiriNLUTypes

+ (Class)spansType;

- (void).cxx_destruct;
- (void)addSpans:(id)arg1;
- (unsigned int)asrHypothesisIndex;
- (void)clearSpans;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAsrHypothesisIndex;
- (bool)hasNodeIndex;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)nodeIndex;
- (bool)readFrom:(id)arg1;
- (void)setAsrHypothesisIndex:(unsigned int)arg1;
- (void)setHasAsrHypothesisIndex:(bool)arg1;
- (void)setHasNodeIndex:(bool)arg1;
- (void)setNodeIndex:(unsigned int)arg1;
- (void)setSpans:(id)arg1;
- (id)spans;
- (id)spansAtIndex:(unsigned long long)arg1;
- (unsigned long long)spansCount;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CDMFoundation.framework/CDMFoundation

+ (bool)subset:(id)arg1 of:(id)arg2;

- (long long)compareStartAndSize:(id)arg1;
- (bool)equalIndexes:(id)arg1;
- (unsigned int)getEndIndex;
- (unsigned int)getStartIndex;
- (bool)overlaps:(id)arg1;
- (bool)subsumedBy:(id)arg1;

@end
