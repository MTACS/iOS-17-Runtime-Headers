
@interface GEOPBOfflineResponseMetadata : PBCodable <NSCopying> {
    struct { 
        unsigned int read_performanceMetrics : 1; 
        unsigned int read_requestIdentifier : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOPBOfflinePerformanceMetrics * _performanceMetrics;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSString * _requestIdentifier;
}

@property (nonatomic, readonly) bool hasPerformanceMetrics;
@property (nonatomic, readonly) bool hasRequestIdentifier;
@property (nonatomic, retain) GEOPBOfflinePerformanceMetrics *performanceMetrics;
@property (nonatomic, retain) NSString *requestIdentifier;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPerformanceMetrics;
- (bool)hasRequestIdentifier;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)performanceMetrics;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)requestIdentifier;
- (void)setPerformanceMetrics:(id)arg1;
- (void)setRequestIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;

@end
