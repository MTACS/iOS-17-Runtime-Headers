
@interface GEOServicesState : PBCodable <NSCopying> {
    NSString * _bogusFieldForTestingPurposes;
}

@property (nonatomic, retain) NSString *bogusFieldForTestingPurposes;
@property (nonatomic, readonly) bool hasBogusFieldForTestingPurposes;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (id)bogusFieldForTestingPurposes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBogusFieldForTestingPurposes;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBogusFieldForTestingPurposes:(id)arg1;
- (void)writeTo:(id)arg1;

@end
