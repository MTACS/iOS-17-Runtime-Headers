
@interface GEOMapLayerDataServiceLayer : PBCodable <NSCopying> {
    struct { 
        unsigned int has_identifier : 1; 
    }  _flags;
    unsigned int  _identifier;
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
