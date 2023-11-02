
@interface GEOWiFiQualityNetworkSearchResult : PBCodable <NSCopying> {
    NSMutableArray * _matches;
}

@property (nonatomic, retain) NSMutableArray *matches;

+ (bool)isValid:(id)arg1;
+ (Class)matchesType;

- (void).cxx_destruct;
- (void)addMatches:(id)arg1;
- (void)clearMatches;
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
- (id)matches;
- (id)matchesAtIndex:(unsigned long long)arg1;
- (unsigned long long)matchesCount;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setMatches:(id)arg1;
- (void)writeTo:(id)arg1;

@end
