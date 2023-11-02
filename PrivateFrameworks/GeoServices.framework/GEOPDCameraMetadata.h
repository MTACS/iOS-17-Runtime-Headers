
@interface GEOPDCameraMetadata : PBCodable <NSCopying> {
    int  _cameraNumber;
    struct { 
        unsigned int has_cameraNumber : 1; 
        unsigned int has_imageHeight : 1; 
        unsigned int has_imageWidth : 1; 
        unsigned int read_textureIds : 1; 
        unsigned int read_lensProjection : 1; 
        unsigned int read_position : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    int  _imageHeight;
    int  _imageWidth;
    GEOPDLensProjection * _lensProjection;
    GEOPDOrientedPosition * _position;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _textureIds;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
