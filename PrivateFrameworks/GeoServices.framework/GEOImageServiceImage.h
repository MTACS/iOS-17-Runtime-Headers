
@interface GEOImageServiceImage : PBCodable <NSCopying> {
    struct { 
        unsigned int read_imageId : 1; 
        unsigned int read_image : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSData * _image;
    NSData * _imageId;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
}

@property (nonatomic, readonly) bool hasImage;
@property (nonatomic, readonly) bool hasImageId;
@property (nonatomic, retain) NSData *image;
@property (nonatomic, retain) NSData *imageId;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasImage;
- (bool)hasImageId;
- (unsigned long long)hash;
- (id)image;
- (id)imageId;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageId:(id)arg1;
- (void)writeTo:(id)arg1;

@end
