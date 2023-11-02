
@interface GEOWiFiQualityServiceRequest : PBRequest <NSCopying> {
    GEOPDClientMetadata * _clientMetadata;
    struct { 
        unsigned int read_clientMetadata : 1; 
        unsigned int read_locationSearches : 1; 
        unsigned int read_networkSearches : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _locationSearches;
    NSMutableArray * _networkSearches;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
}

@property (nonatomic, retain) GEOPDClientMetadata *clientMetadata;
@property (nonatomic, readonly) bool hasClientMetadata;
@property (nonatomic, retain) NSMutableArray *locationSearches;
@property (nonatomic, retain) NSMutableArray *networkSearches;

+ (bool)isValid:(id)arg1;
+ (Class)locationSearchesType;
+ (Class)networkSearchesType;

- (void).cxx_destruct;
- (void)addLocationSearches:(id)arg1;
- (void)addNetworkSearches:(id)arg1;
- (void)clearLocationSearches;
- (void)clearNetworkSearches;
- (void)clearSensitiveFields:(unsigned long long)arg1;
- (id)clientMetadata;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasClientMetadata;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)locationSearches;
- (id)locationSearchesAtIndex:(unsigned long long)arg1;
- (unsigned long long)locationSearchesCount;
- (void)mergeFrom:(id)arg1;
- (id)networkSearches;
- (id)networkSearchesAtIndex:(unsigned long long)arg1;
- (unsigned long long)networkSearchesCount;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setClientMetadata:(id)arg1;
- (void)setLocationSearches:(id)arg1;
- (void)setNetworkSearches:(id)arg1;
- (void)writeTo:(id)arg1;

@end
