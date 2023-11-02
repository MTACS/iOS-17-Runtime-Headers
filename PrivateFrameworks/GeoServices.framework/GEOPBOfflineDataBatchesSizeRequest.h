
@interface GEOPBOfflineDataBatchesSizeRequest : PBRequest <NSCopying> {
    struct { 
        unsigned int read_region : 1; 
        unsigned int read_supportedLanguages : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOMapRegion * _region;
    NSMutableArray * _supportedLanguages;
}

@property (nonatomic, readonly) bool hasRegion;
@property (nonatomic, retain) GEOMapRegion *region;
@property (nonatomic, retain) NSMutableArray *supportedLanguages;

+ (bool)isValid:(id)arg1;
+ (Class)supportedLanguageType;

- (void).cxx_destruct;
- (void)addSupportedLanguage:(id)arg1;
- (void)clearSupportedLanguages;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasRegion;
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
- (id)region;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setRegion:(id)arg1;
- (void)setSupportedLanguages:(id)arg1;
- (id)supportedLanguageAtIndex:(unsigned long long)arg1;
- (id)supportedLanguages;
- (unsigned long long)supportedLanguagesCount;
- (void)writeTo:(id)arg1;

@end
