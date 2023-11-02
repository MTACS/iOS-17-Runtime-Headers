
@interface GEORPImageUpdate : PBCodable <NSCopying> {
    int  _action;
    struct { 
        unsigned int has_action : 1; 
        unsigned int read_imageId : 1; 
        unsigned int read_photoMetadata : 1; 
        unsigned int read_uploadResponse : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _imageId;
    GEORPPhotoMetadata * _photoMetadata;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSData * _uploadResponse;
}

@property (nonatomic) int action;
@property (nonatomic) bool hasAction;
@property (nonatomic, readonly) bool hasImageId;
@property (nonatomic, readonly) bool hasPhotoMetadata;
@property (nonatomic, readonly) bool hasUploadResponse;
@property (nonatomic, retain) NSString *imageId;
@property (nonatomic, retain) GEORPPhotoMetadata *photoMetadata;
@property (nonatomic, retain) NSData *uploadResponse;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsAction:(id)arg1;
- (int)action;
- (id)actionAsString:(int)arg1;
- (void)clearSensitiveFields:(unsigned long long)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAction;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasImageId;
- (bool)hasPhotoMetadata;
- (bool)hasUploadResponse;
- (unsigned long long)hash;
- (id)imageId;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)photoMetadata;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAction:(int)arg1;
- (void)setHasAction:(bool)arg1;
- (void)setImageId:(id)arg1;
- (void)setPhotoMetadata:(id)arg1;
- (void)setUploadResponse:(id)arg1;
- (id)uploadResponse;
- (void)writeTo:(id)arg1;

@end
