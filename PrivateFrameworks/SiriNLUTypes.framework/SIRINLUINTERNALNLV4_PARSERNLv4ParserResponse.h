
@interface SIRINLUINTERNALNLV4_PARSERNLv4ParserResponse : PBCodable <NSCopying> {
    NSMutableArray * _hypotheses;
}

@property (nonatomic, retain) NSMutableArray *hypotheses;

+ (Class)hypothesesType;

- (void).cxx_destruct;
- (void)addHypotheses:(id)arg1;
- (void)clearHypotheses;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)hypotheses;
- (id)hypothesesAtIndex:(unsigned long long)arg1;
- (unsigned long long)hypothesesCount;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHypotheses:(id)arg1;
- (void)writeTo:(id)arg1;

@end
