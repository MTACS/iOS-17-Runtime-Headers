
@interface GEOPublisherAttributionSource : PBCodable <NSCopying> {
    NSString * _appAdamID;
    struct { 
        unsigned int read_appAdamID : 1; 
        unsigned int read_localizedAttributions : 1; 
        unsigned int read_websiteURL : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _localizedAttributions;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSString * _websiteURL;
}

@property (nonatomic, retain) NSString *appAdamID;
@property (nonatomic, readonly) bool hasAppAdamID;
@property (nonatomic, readonly) bool hasWebsiteURL;
@property (nonatomic, retain) NSMutableArray *localizedAttributions;
@property (nonatomic, retain) NSString *websiteURL;

+ (bool)isValid:(id)arg1;
+ (Class)localizedAttributionType;

- (void).cxx_destruct;
- (void)addLocalizedAttribution:(id)arg1;
- (id)appAdamID;
- (void)clearLocalizedAttributions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAppAdamID;
- (bool)hasWebsiteURL;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)localizedAttributionAtIndex:(unsigned long long)arg1;
- (id)localizedAttributions;
- (unsigned long long)localizedAttributionsCount;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAppAdamID:(id)arg1;
- (void)setLocalizedAttributions:(id)arg1;
- (void)setWebsiteURL:(id)arg1;
- (id)websiteURL;
- (void)writeTo:(id)arg1;

@end
