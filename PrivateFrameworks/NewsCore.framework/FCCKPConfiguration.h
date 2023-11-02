
@interface FCCKPConfiguration : PBCodable <NSCopying> {
    unsigned long long  _created;
    unsigned long long  _expires;
    NSMutableArray * _fields;
    struct { 
        unsigned int created : 1; 
        unsigned int expires : 1; 
    }  _has;
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
