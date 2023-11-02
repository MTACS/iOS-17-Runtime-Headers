
@interface GEORPCurrentEnvironmentManifestURLs : PBCodable <NSCopying> {
    NSString * _environmentDisplayName;
    NSString * _environmentReleaseName;
    struct { 
        unsigned int read_environmentDisplayName : 1; 
        unsigned int read_environmentReleaseName : 1; 
        unsigned int read_urls : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSMutableArray * _urls;
}

@property (nonatomic, retain) NSString *environmentDisplayName;
@property (nonatomic, retain) NSString *environmentReleaseName;
@property (nonatomic, readonly) bool hasEnvironmentDisplayName;
@property (nonatomic, readonly) bool hasEnvironmentReleaseName;
@property (nonatomic, retain) NSMutableArray *urls;

+ (bool)isValid:(id)arg1;
+ (Class)urlType;

- (void).cxx_destruct;
- (void)addUrl:(id)arg1;
- (void)clearUrls;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)environmentDisplayName;
- (id)environmentReleaseName;
- (bool)hasEnvironmentDisplayName;
- (bool)hasEnvironmentReleaseName;
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
- (void)setEnvironmentDisplayName:(id)arg1;
- (void)setEnvironmentReleaseName:(id)arg1;
- (void)setUrls:(id)arg1;
- (id)urlAtIndex:(unsigned long long)arg1;
- (id)urls;
- (unsigned long long)urlsCount;
- (void)writeTo:(id)arg1;

@end
