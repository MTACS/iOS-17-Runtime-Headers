
@interface GEOPBOfflineRequestMetadata : PBCodable <NSCopying> {
    bool  _debugLog;
    NSMutableArray * _downloadedRegions;
    struct { 
        unsigned int has_requestStartTimeMs : 1; 
        unsigned int has_messageType : 1; 
        unsigned int has_debugLog : 1; 
        unsigned int has_performanceMetrics : 1; 
        unsigned int read_downloadedRegions : 1; 
        unsigned int read_requestIdentifier : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    int  _messageType;
    bool  _performanceMetrics;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSString * _requestIdentifier;
    unsigned long long  _requestStartTimeMs;
}

@property (nonatomic) bool debugLog;
@property (nonatomic, retain) NSMutableArray *downloadedRegions;
@property (nonatomic) bool hasDebugLog;
@property (nonatomic) bool hasMessageType;
@property (nonatomic) bool hasPerformanceMetrics;
@property (nonatomic, readonly) bool hasRequestIdentifier;
@property (nonatomic) bool hasRequestStartTimeMs;
@property (nonatomic) int messageType;
@property (nonatomic) bool performanceMetrics;
@property (nonatomic, retain) NSString *requestIdentifier;
@property (nonatomic) unsigned long long requestStartTimeMs;

+ (Class)downloadedRegionsType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsMessageType:(id)arg1;
- (void)addDownloadedRegions:(id)arg1;
- (void)clearDownloadedRegions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)debugLog;
- (id)description;
- (id)dictionaryRepresentation;
- (id)downloadedRegions;
- (id)downloadedRegionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)downloadedRegionsCount;
- (bool)hasDebugLog;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasMessageType;
- (bool)hasPerformanceMetrics;
- (bool)hasRequestIdentifier;
- (bool)hasRequestStartTimeMs;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (int)messageType;
- (id)messageTypeAsString:(int)arg1;
- (bool)performanceMetrics;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)requestIdentifier;
- (unsigned long long)requestStartTimeMs;
- (void)setDebugLog:(bool)arg1;
- (void)setDownloadedRegions:(id)arg1;
- (void)setHasDebugLog:(bool)arg1;
- (void)setHasMessageType:(bool)arg1;
- (void)setHasPerformanceMetrics:(bool)arg1;
- (void)setHasRequestStartTimeMs:(bool)arg1;
- (void)setMessageType:(int)arg1;
- (void)setPerformanceMetrics:(bool)arg1;
- (void)setRequestIdentifier:(id)arg1;
- (void)setRequestStartTimeMs:(unsigned long long)arg1;
- (void)writeTo:(id)arg1;

@end
