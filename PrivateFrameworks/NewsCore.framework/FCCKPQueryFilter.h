
@interface FCCKPQueryFilter : PBCodable <NSCopying> {
    FCCKPRecordFieldIdentifier * _fieldName;
    FCCKPRecordFieldValue * _fieldValue;
    struct { 
        unsigned int type : 1; 
    }  _has;
    int  _type;
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
