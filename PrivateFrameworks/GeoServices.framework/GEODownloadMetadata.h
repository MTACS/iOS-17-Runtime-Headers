
@interface GEODownloadMetadata : PBCodable <NSCopying> {
    NSString * _environment;
    NSString * _etag;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_environment : 1; 
        unsigned int read_etag : 1; 
        unsigned int read_url : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    double  _timestamp;
    PBUnknownFields * _unknownFields;
    NSString * _url;
}

@property (nonatomic, retain) NSString *environment;
@property (nonatomic, retain) NSString *etag;
@property (nonatomic, readonly) bool hasEnvironment;
@property (nonatomic, readonly) bool hasEtag;
@property (nonatomic, readonly) bool hasUrl;
@property (nonatomic) double timestamp;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) NSString *url;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)environment;
- (id)etag;
- (bool)hasEnvironment;
- (bool)hasEtag;
- (bool)hasUrl;
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
- (void)setEnvironment:(id)arg1;
- (void)setEtag:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setUrl:(id)arg1;
- (double)timestamp;
- (id)unknownFields;
- (id)url;
- (void)writeTo:(id)arg1;

@end
