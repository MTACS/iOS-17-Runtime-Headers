
@interface GEOPathMapMatcherInstructions : PBCodable <NSCopying> {
    NSMutableArray * _noMatchs;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *noMatchs;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;
+ (Class)noMatchType;

- (void).cxx_destruct;
- (void)addNoMatch:(id)arg1;
- (void)clearNoMatchs;
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
- (id)noMatchAtIndex:(unsigned long long)arg1;
- (id)noMatchs;
- (unsigned long long)noMatchsCount;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setNoMatchs:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
