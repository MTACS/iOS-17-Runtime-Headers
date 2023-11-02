
@interface GEOPDPhotoConstraints : PBCodable <NSCopying> {
    struct { 
        unsigned int has_maxPixels : 1; 
        unsigned int has_minPixels : 1; 
        unsigned int has_maxAspectRatio : 1; 
        unsigned int has_maxNumberOfPhotos : 1; 
    }  _flags;
    float  _maxAspectRatio;
    unsigned int  _maxNumberOfPhotos;
    unsigned long long  _maxPixels;
    NSMutableArray * _mediaTypes;
    unsigned long long  _minPixels;
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
