
@interface SIRINLUINTERNALCONTEXTUAL_SPAN_MATCHERContextualSpanMatcherResponse : PBCodable <NSCopying> {
    NSMutableArray * _contextualSpans;
}

@property (nonatomic, retain) NSMutableArray *contextualSpans;

+ (Class)contextualSpansType;

- (void).cxx_destruct;
- (void)addContextualSpans:(id)arg1;
- (void)clearContextualSpans;
- (id)contextualSpans;
- (id)contextualSpansAtIndex:(unsigned long long)arg1;
- (unsigned long long)contextualSpansCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setContextualSpans:(id)arg1;
- (void)writeTo:(id)arg1;

@end
