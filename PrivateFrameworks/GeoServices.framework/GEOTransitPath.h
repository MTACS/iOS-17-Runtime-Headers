
@interface GEOTransitPath : PBCodable <NSCopying> {
    NSMutableArray * _legs;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *legs;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;
+ (Class)legType;

- (void).cxx_destruct;
- (void)addLeg:(id)arg1;
- (void)clearLegs;
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
- (id)legAtIndex:(unsigned long long)arg1;
- (id)legs;
- (unsigned long long)legsCount;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setLegs:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
