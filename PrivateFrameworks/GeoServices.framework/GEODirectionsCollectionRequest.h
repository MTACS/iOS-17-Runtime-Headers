
@interface GEODirectionsCollectionRequest : PBRequest <NSCopying> {
    NSMutableArray * _requestElements;
}

@property (nonatomic, retain) NSMutableArray *requestElements;

+ (bool)isValid:(id)arg1;
+ (Class)requestElementsType;

- (void).cxx_destruct;
- (void)addRequestElements:(id)arg1;
- (void)clearRequestElements;
- (void)clearSensitiveFields:(unsigned long long)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)requestElements;
- (id)requestElementsAtIndex:(unsigned long long)arg1;
- (unsigned long long)requestElementsCount;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setRequestElements:(id)arg1;
- (void)writeTo:(id)arg1;

@end
