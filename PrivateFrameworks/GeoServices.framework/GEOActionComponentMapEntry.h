
@interface GEOActionComponentMapEntry : PBCodable <NSCopying> {
    int  _actionComponent;
    struct { 
        unsigned int has_actionComponent : 1; 
    }  _flags;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _placeDataComponents;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
