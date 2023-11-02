
@interface GEORPFeedbackClientImageInfo : PBCodable <NSCopying> {
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_imageUrl : 1; 
        unsigned int read_providerImageId : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _imageUrl;
    NSString * _providerImageId;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasImageUrl;
@property (nonatomic, readonly) bool hasProviderImageId;
@property (nonatomic, retain) NSString *imageUrl;
@property (nonatomic, retain) NSString *providerImageId;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasImageUrl;
- (bool)hasProviderImageId;
- (unsigned long long)hash;
- (id)imageUrl;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)providerImageId;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setImageUrl:(id)arg1;
- (void)setProviderImageId:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
