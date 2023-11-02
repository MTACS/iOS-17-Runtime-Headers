
@interface FCCKPQueryRetrieveResponseQueryResult : PBCodable <NSCopying> {
    NSString * _etag;
    struct { 
        unsigned int type : 1; 
    }  _has;
    FCCKPRecordIdentifier * _identifier;
    FCCKPRecord * _record;
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
