
@interface GEORPPhotoMetadata : PBCodable <NSCopying> {
    NSString * _clientImageUuid;
    NSString * _deviceLensMake;
    NSString * _deviceLensModel;
    struct { 
        unsigned int has_size : 1; 
        unsigned int has_source : 1; 
        unsigned int read_clientImageUuid : 1; 
        unsigned int read_deviceLensMake : 1; 
        unsigned int read_deviceLensModel : 1; 
        unsigned int read_geotag : 1; 
        unsigned int read_imageDescription : 1; 
        unsigned int read_mediaType : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOLocation * _geotag;
    NSString * _imageDescription;
    NSString * _mediaType;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    unsigned long long  _size;
    int  _source;
}

@property (nonatomic, retain) NSString *clientImageUuid;
@property (nonatomic, retain) NSString *deviceLensMake;
@property (nonatomic, retain) NSString *deviceLensModel;
@property (nonatomic, retain) GEOLocation *geotag;
@property (nonatomic, readonly) bool hasClientImageUuid;
@property (nonatomic, readonly) bool hasDeviceLensMake;
@property (nonatomic, readonly) bool hasDeviceLensModel;
@property (nonatomic, readonly) bool hasGeotag;
@property (nonatomic, readonly) bool hasImageDescription;
@property (nonatomic, readonly) bool hasMediaType;
@property (nonatomic) bool hasSize;
@property (nonatomic) bool hasSource;
@property (nonatomic, retain) NSString *imageDescription;
@property (nonatomic, retain) NSString *mediaType;
@property (nonatomic) unsigned long long size;
@property (nonatomic) int source;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsSource:(id)arg1;
- (void)clearSensitiveFields:(unsigned long long)arg1;
- (id)clientImageUuid;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceLensMake;
- (id)deviceLensModel;
- (id)dictionaryRepresentation;
- (id)geotag;
- (bool)hasClientImageUuid;
- (bool)hasDeviceLensMake;
- (bool)hasDeviceLensModel;
- (bool)hasGeotag;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasImageDescription;
- (bool)hasMediaType;
- (bool)hasSize;
- (bool)hasSource;
- (unsigned long long)hash;
- (id)imageDescription;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)mediaType;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setClientImageUuid:(id)arg1;
- (void)setDeviceLensMake:(id)arg1;
- (void)setDeviceLensModel:(id)arg1;
- (void)setGeotag:(id)arg1;
- (void)setHasSize:(bool)arg1;
- (void)setHasSource:(bool)arg1;
- (void)setImageDescription:(id)arg1;
- (void)setMediaType:(id)arg1;
- (void)setSize:(unsigned long long)arg1;
- (void)setSource:(int)arg1;
- (unsigned long long)size;
- (int)source;
- (id)sourceAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
