
@interface GEOMapLayerDataServiceVersion : PBCodable <NSCopying> {
    unsigned int  _dataVersion;
    struct { 
        unsigned int has_dataVersion : 1; 
        unsigned int has_formatVersion : 1; 
        unsigned int has_patchVersion : 1; 
    }  _flags;
    unsigned int  _formatVersion;
    unsigned int  _patchVersion;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
