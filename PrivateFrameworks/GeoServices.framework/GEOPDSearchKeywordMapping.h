
@interface GEOPDSearchKeywordMapping : PBCodable <NSCopying> {
    struct { 
        unsigned int has_muid : 1; 
    }  _flags;
    NSMutableArray * _localizedNames;
    unsigned long long  _muid;
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
