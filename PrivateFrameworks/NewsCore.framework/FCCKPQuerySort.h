
@interface FCCKPQuerySort : PBCodable <NSCopying> {
    FCCKPRecordFieldIdentifier * _fieldName;
    struct { 
        unsigned int order : 1; 
    }  _has;
    int  _order;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
