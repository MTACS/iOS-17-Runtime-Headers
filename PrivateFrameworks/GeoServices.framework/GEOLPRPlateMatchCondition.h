
@interface GEOLPRPlateMatchCondition : PBCodable <NSCopying> {
    NSMutableArray * _patterns;
}

@property (nonatomic, retain) NSMutableArray *patterns;

+ (bool)isValid:(id)arg1;
+ (Class)patternsType;

- (void).cxx_destruct;
- (void)addPatterns:(id)arg1;
- (void)clearPatterns;
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
- (id)patterns;
- (id)patternsAtIndex:(unsigned long long)arg1;
- (unsigned long long)patternsCount;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setPatterns:(id)arg1;
- (void)writeTo:(id)arg1;

@end
