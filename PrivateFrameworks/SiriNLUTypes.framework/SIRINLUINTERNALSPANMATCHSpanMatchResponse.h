
@interface SIRINLUINTERNALSPANMATCHSpanMatchResponse : PBCodable <NSCopying> {
    NSMutableArray * _matchingSpans;
}

@property (nonatomic, retain) NSMutableArray *matchingSpans;

+ (Class)matchingSpansType;

- (void).cxx_destruct;
- (void)addMatchingSpans:(id)arg1;
- (void)clearMatchingSpans;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)matchingSpans;
- (id)matchingSpansAtIndex:(unsigned long long)arg1;
- (unsigned long long)matchingSpansCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setMatchingSpans:(id)arg1;
- (void)writeTo:(id)arg1;

@end
