
@interface GEORPManifestURL : PBCodable <NSCopying> {
    struct { 
        unsigned int read_urlName : 1; 
        unsigned int read_urlValue : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSString * _urlName;
    NSString * _urlValue;
}

@property (nonatomic, readonly) bool hasUrlName;
@property (nonatomic, readonly) bool hasUrlValue;
@property (nonatomic, retain) NSString *urlName;
@property (nonatomic, retain) NSString *urlValue;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasUrlName;
- (bool)hasUrlValue;
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
- (void)setUrlName:(id)arg1;
- (void)setUrlValue:(id)arg1;
- (id)urlName;
- (id)urlValue;
- (void)writeTo:(id)arg1;

@end
