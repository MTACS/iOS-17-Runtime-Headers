
@interface GEORPFeedbackImageIdMapEntry : PBCodable <NSCopying> {
    NSString * _clientImageUuid;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_clientImageUuid : 1; 
        unsigned int read_imageId : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _imageId;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSString *clientImageUuid;
@property (nonatomic, readonly) bool hasClientImageUuid;
@property (nonatomic, readonly) bool hasImageId;
@property (nonatomic, retain) NSString *imageId;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (id)clientImageUuid;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasClientImageUuid;
- (bool)hasImageId;
- (unsigned long long)hash;
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
- (void)setClientImageUuid:(id)arg1;
- (void)setImageId:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
