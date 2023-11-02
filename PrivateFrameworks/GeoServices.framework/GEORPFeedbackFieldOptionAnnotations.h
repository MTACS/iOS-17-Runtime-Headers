
@interface GEORPFeedbackFieldOptionAnnotations : PBCodable <NSCopying> {
    NSString * _keyString;
}

@property (nonatomic, readonly) bool hasKeyString;
@property (nonatomic, retain) NSString *keyString;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasKeyString;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)keyString;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setKeyString:(id)arg1;
- (void)writeTo:(id)arg1;

@end
