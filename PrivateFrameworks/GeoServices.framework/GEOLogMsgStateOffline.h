
@interface GEOLogMsgStateOffline : PBCodable <NSCopying> {
    struct { 
        unsigned int has_routingOdsVersion : 1; 
        unsigned int has_searchOdsVersion : 1; 
        unsigned int has_numberOfDownloadedRegions : 1; 
        unsigned int has_isMapsInOfflineMode : 1; 
        unsigned int has_isNetworkConnected : 1; 
        unsigned int has_isOnlyUseOffline : 1; 
    }  _flags;
    bool  _isMapsInOfflineMode;
    bool  _isNetworkConnected;
    bool  _isOnlyUseOffline;
    unsigned int  _numberOfDownloadedRegions;
    unsigned long long  _routingOdsVersion;
    unsigned long long  _searchOdsVersion;
}

@property (nonatomic) bool hasIsMapsInOfflineMode;
@property (nonatomic) bool hasIsNetworkConnected;
@property (nonatomic) bool hasIsOnlyUseOffline;
@property (nonatomic) bool hasNumberOfDownloadedRegions;
@property (nonatomic) bool hasRoutingOdsVersion;
@property (nonatomic) bool hasSearchOdsVersion;
@property (nonatomic) bool isMapsInOfflineMode;
@property (nonatomic) bool isNetworkConnected;
@property (nonatomic) bool isOnlyUseOffline;
@property (nonatomic) unsigned int numberOfDownloadedRegions;
@property (nonatomic) unsigned long long routingOdsVersion;
@property (nonatomic) unsigned long long searchOdsVersion;

+ (bool)isValid:(id)arg1;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIsMapsInOfflineMode;
- (bool)hasIsNetworkConnected;
- (bool)hasIsOnlyUseOffline;
- (bool)hasNumberOfDownloadedRegions;
- (bool)hasRoutingOdsVersion;
- (bool)hasSearchOdsVersion;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isMapsInOfflineMode;
- (bool)isNetworkConnected;
- (bool)isOnlyUseOffline;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (unsigned int)numberOfDownloadedRegions;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned long long)routingOdsVersion;
- (unsigned long long)searchOdsVersion;
- (void)setHasIsMapsInOfflineMode:(bool)arg1;
- (void)setHasIsNetworkConnected:(bool)arg1;
- (void)setHasIsOnlyUseOffline:(bool)arg1;
- (void)setHasNumberOfDownloadedRegions:(bool)arg1;
- (void)setHasRoutingOdsVersion:(bool)arg1;
- (void)setHasSearchOdsVersion:(bool)arg1;
- (void)setIsMapsInOfflineMode:(bool)arg1;
- (void)setIsNetworkConnected:(bool)arg1;
- (void)setIsOnlyUseOffline:(bool)arg1;
- (void)setNumberOfDownloadedRegions:(unsigned int)arg1;
- (void)setRoutingOdsVersion:(unsigned long long)arg1;
- (void)setSearchOdsVersion:(unsigned long long)arg1;
- (void)writeTo:(id)arg1;

@end
