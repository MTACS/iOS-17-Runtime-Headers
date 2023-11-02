
@interface GEOResourceManifestDownload : PBCodable <NSCopying> {
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_metadata : 1; 
        unsigned int read_resources : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEODownloadMetadata * _metadata;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOResources * _resources;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasResources;
@property (nonatomic, retain) GEODownloadMetadata *metadata;
@property (nonatomic, retain) GEOResources *resources;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasResources;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)initWithResourceManifestData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)metadata;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)resources;
- (void)setMetadata:(id)arg1;
- (void)setResources:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
