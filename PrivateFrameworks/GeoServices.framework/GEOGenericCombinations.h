
@interface GEOGenericCombinations : PBCodable <NSCopying> {
    NSMutableArray * _substitutes;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *substitutes;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;
+ (Class)substitutesType;

- (void).cxx_destruct;
- (void)addSubstitutes:(id)arg1;
- (void)clearSubstitutes;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setSubstitutes:(id)arg1;
- (id)substitutes;
- (id)substitutesAtIndex:(unsigned long long)arg1;
- (unsigned long long)substitutesCount;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
