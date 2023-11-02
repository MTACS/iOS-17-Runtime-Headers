
@interface GEORPPhotoAttributionPreferences : PBCodable <NSCopying> {
    bool  _attributePhotos;
    NSString * _attributionName;
    struct { 
        unsigned int has_attributePhotos : 1; 
        unsigned int has_wasCleared : 1; 
        unsigned int read_attributionName : 1; 
        unsigned int read_version : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSString * _version;
    bool  _wasCleared;
}

@property (nonatomic) bool attributePhotos;
@property (nonatomic, retain) NSString *attributionName;
@property (nonatomic) bool hasAttributePhotos;
@property (nonatomic, readonly) bool hasAttributionName;
@property (nonatomic, readonly) bool hasVersion;
@property (nonatomic) bool hasWasCleared;
@property (nonatomic, retain) NSString *version;
@property (nonatomic) bool wasCleared;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (bool)attributePhotos;
- (id)attributionName;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAttributePhotos;
- (bool)hasAttributionName;
- (bool)hasVersion;
- (bool)hasWasCleared;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAttributePhotos:(bool)arg1;
- (void)setAttributionName:(id)arg1;
- (void)setHasAttributePhotos:(bool)arg1;
- (void)setHasWasCleared:(bool)arg1;
- (void)setVersion:(id)arg1;
- (void)setWasCleared:(bool)arg1;
- (id)version;
- (bool)wasCleared;
- (void)writeTo:(id)arg1;

@end
