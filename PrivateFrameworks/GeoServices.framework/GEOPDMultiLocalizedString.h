
@interface GEOPDMultiLocalizedString : PBCodable <NSCopying> {
    NSMutableArray * _localizedStrings;
    PBUnknownFields * _unknownFields;
}

- (void).cxx_destruct;
- (id)bestLocalizedName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
