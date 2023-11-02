
@interface GEOServiceVersion : PBCodable <NSCopying> {
    struct { 
        unsigned int has_minimumVersion : 1; 
    }  _flags;
    unsigned int  _minimumVersion;
    PBUnknownFields * _unknownFields;
    NSMutableArray * _versionDomains;
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
