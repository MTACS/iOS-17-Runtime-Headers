
@interface GEOPDSearchSubstringDescriptor : PBCodable <NSCopying> {
    int  _beginIndex;
    int  _endIndex;
    NSMutableArray * _spanDatas;
    int  _stringType;
    PBUnknownFields * _unknownFields;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
