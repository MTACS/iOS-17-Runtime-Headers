
@interface GEOPBTileStyleZoomAvailability : PBCodable <NSCopying> {
    struct { 
        unsigned int has_size : 1; 
        unsigned int has_style : 1; 
    }  _flags;
    int  _size;
    int  _style;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _zooms;
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
