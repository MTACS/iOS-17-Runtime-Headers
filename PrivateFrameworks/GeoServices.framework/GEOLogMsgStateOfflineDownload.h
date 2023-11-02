
@interface GEOLogMsgStateOfflineDownload : PBCodable <NSCopying> {
    bool  _automaticUpdates;
    NSString * _downloadCountry;
    bool  _downloadOnWifiOnly;
    int  _downloadSize;
    int  _entryTarget;
    struct { 
        unsigned int has_downloadSize : 1; 
        unsigned int has_entryTarget : 1; 
        unsigned int has_zoomLevel : 1; 
        unsigned int has_automaticUpdates : 1; 
        unsigned int has_downloadOnWifiOnly : 1; 
        unsigned int has_isDownloadInHomeMetro : 1; 
        unsigned int has_optimizeStorage : 1; 
        unsigned int has_regionTilesWereResized : 1; 
    }  _flags;
    bool  _isDownloadInHomeMetro;
    bool  _optimizeStorage;
    bool  _regionTilesWereResized;
    unsigned int  _zoomLevel;
}

@property (nonatomic) bool automaticUpdates;
@property (nonatomic, retain) NSString *downloadCountry;
@property (nonatomic) bool downloadOnWifiOnly;
@property (nonatomic) int downloadSize;
@property (nonatomic) int entryTarget;
@property (nonatomic) bool hasAutomaticUpdates;
@property (nonatomic, readonly) bool hasDownloadCountry;
@property (nonatomic) bool hasDownloadOnWifiOnly;
@property (nonatomic) bool hasDownloadSize;
@property (nonatomic) bool hasEntryTarget;
@property (nonatomic) bool hasIsDownloadInHomeMetro;
@property (nonatomic) bool hasOptimizeStorage;
@property (nonatomic) bool hasRegionTilesWereResized;
@property (nonatomic) bool hasZoomLevel;
@property (nonatomic) bool isDownloadInHomeMetro;
@property (nonatomic) bool optimizeStorage;
@property (nonatomic) bool regionTilesWereResized;
@property (nonatomic) unsigned int zoomLevel;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsDownloadSize:(id)arg1;
- (int)StringAsEntryTarget:(id)arg1;
- (bool)automaticUpdates;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)downloadCountry;
- (bool)downloadOnWifiOnly;
- (int)downloadSize;
- (id)downloadSizeAsString:(int)arg1;
- (int)entryTarget;
- (id)entryTargetAsString:(int)arg1;
- (bool)hasAutomaticUpdates;
- (bool)hasDownloadCountry;
- (bool)hasDownloadOnWifiOnly;
- (bool)hasDownloadSize;
- (bool)hasEntryTarget;
- (bool)hasIsDownloadInHomeMetro;
- (bool)hasOptimizeStorage;
- (bool)hasRegionTilesWereResized;
- (bool)hasZoomLevel;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isDownloadInHomeMetro;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (bool)optimizeStorage;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (bool)regionTilesWereResized;
- (void)setAutomaticUpdates:(bool)arg1;
- (void)setDownloadCountry:(id)arg1;
- (void)setDownloadOnWifiOnly:(bool)arg1;
- (void)setDownloadSize:(int)arg1;
- (void)setEntryTarget:(int)arg1;
- (void)setHasAutomaticUpdates:(bool)arg1;
- (void)setHasDownloadOnWifiOnly:(bool)arg1;
- (void)setHasDownloadSize:(bool)arg1;
- (void)setHasEntryTarget:(bool)arg1;
- (void)setHasIsDownloadInHomeMetro:(bool)arg1;
- (void)setHasOptimizeStorage:(bool)arg1;
- (void)setHasRegionTilesWereResized:(bool)arg1;
- (void)setHasZoomLevel:(bool)arg1;
- (void)setIsDownloadInHomeMetro:(bool)arg1;
- (void)setOptimizeStorage:(bool)arg1;
- (void)setRegionTilesWereResized:(bool)arg1;
- (void)setZoomLevel:(unsigned int)arg1;
- (void)writeTo:(id)arg1;
- (unsigned int)zoomLevel;

@end
