
@interface GEOBatchRevGeocodeResponse : PBCodable <NSCopying> {
    NSMutableArray * _batchPlaceResults;
    NSMutableArray * _clusters;
    struct { 
        unsigned int has_timestamp : 1; 
        unsigned int has_statusCode : 1; 
        unsigned int has_ttl : 1; 
        unsigned int has_version : 1; 
        unsigned int read_batchPlaceResults : 1; 
        unsigned int read_clusters : 1; 
        unsigned int read_versionDomains : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    int  _statusCode;
    double  _timestamp;
    unsigned int  _ttl;
    unsigned int  _version;
    NSMutableArray * _versionDomains;
}

@property (nonatomic, retain) NSMutableArray *batchPlaceResults;
@property (nonatomic, retain) NSMutableArray *clusters;
@property (nonatomic) bool hasStatusCode;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasTtl;
@property (nonatomic) bool hasVersion;
@property (nonatomic) int statusCode;
@property (nonatomic) double timestamp;
@property (nonatomic) unsigned int ttl;
@property (nonatomic) unsigned int version;
@property (nonatomic, retain) NSMutableArray *versionDomains;

+ (Class)batchPlaceResultType;
+ (Class)clusterType;
+ (bool)isValid:(id)arg1;
+ (Class)versionDomainType;

- (void).cxx_destruct;
- (int)StringAsStatusCode:(id)arg1;
- (void)addBatchPlaceResult:(id)arg1;
- (void)addCluster:(id)arg1;
- (void)addVersionDomain:(id)arg1;
- (id)batchPlaceResultAtIndex:(unsigned long long)arg1;
- (id)batchPlaceResults;
- (unsigned long long)batchPlaceResultsCount;
- (void)clearBatchPlaceResults;
- (void)clearClusters;
- (void)clearSensitiveFields:(unsigned long long)arg1;
- (void)clearVersionDomains;
- (id)clusterAtIndex:(unsigned long long)arg1;
- (id)clusters;
- (unsigned long long)clustersCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasStatusCode;
- (bool)hasTimestamp;
- (bool)hasTtl;
- (bool)hasVersion;
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
- (void)setBatchPlaceResults:(id)arg1;
- (void)setClusters:(id)arg1;
- (void)setHasStatusCode:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTtl:(bool)arg1;
- (void)setHasVersion:(bool)arg1;
- (void)setStatusCode:(int)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setTtl:(unsigned int)arg1;
- (void)setVersion:(unsigned int)arg1;
- (void)setVersionDomains:(id)arg1;
- (int)statusCode;
- (id)statusCodeAsString:(int)arg1;
- (double)timestamp;
- (unsigned int)ttl;
- (unsigned int)version;
- (id)versionDomainAtIndex:(unsigned long long)arg1;
- (id)versionDomains;
- (unsigned long long)versionDomainsCount;
- (void)writeTo:(id)arg1;

@end
