
@interface CLPAltimeterCollectionRequest : PBRequest <NSCopying> {
    int  _collectionType;
    CLPContext * _context;
    struct { 
        unsigned int startTimestamp : 1; 
        unsigned int stopTimestamp : 1; 
        unsigned int collectionType : 1; 
    }  _has;
    CLPLocation * _location;
    NSMutableArray * _locations;
    CLPMeta * _meta;
    NSMutableArray * _pressures;
    double  _startTimestamp;
    double  _stopTimestamp;
    NSMutableArray * _wifiScans;
}

@property (nonatomic) int collectionType;
@property (nonatomic, retain) CLPContext *context;
@property (nonatomic) bool hasCollectionType;
@property (nonatomic, readonly) bool hasContext;
@property (nonatomic, readonly) bool hasLocation;
@property (nonatomic, readonly) bool hasMeta;
@property (nonatomic) bool hasStartTimestamp;
@property (nonatomic) bool hasStopTimestamp;
@property (nonatomic, retain) CLPLocation *location;
@property (nonatomic, retain) NSMutableArray *locations;
@property (nonatomic, retain) CLPMeta *meta;
@property (nonatomic, retain) NSMutableArray *pressures;
@property (nonatomic) double startTimestamp;
@property (nonatomic) double stopTimestamp;
@property (nonatomic, retain) NSMutableArray *wifiScans;

+ (Class)locationsType;
+ (Class)pressureType;
+ (Class)wifiScanType;

- (void).cxx_destruct;
- (int)StringAsCollectionType:(id)arg1;
- (void)addLocations:(id)arg1;
- (void)addPressure:(id)arg1;
- (void)addWifiScan:(id)arg1;
- (void)clearLocations;
- (void)clearPressures;
- (void)clearWifiScans;
- (int)collectionType;
- (id)collectionTypeAsString:(int)arg1;
- (id)context;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCollectionType;
- (bool)hasContext;
- (bool)hasLocation;
- (bool)hasMeta;
- (bool)hasStartTimestamp;
- (bool)hasStopTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)location;
- (id)locations;
- (id)locationsAtIndex:(unsigned long long)arg1;
- (unsigned long long)locationsCount;
- (void)mergeFrom:(id)arg1;
- (id)meta;
- (id)pressureAtIndex:(unsigned long long)arg1;
- (id)pressures;
- (unsigned long long)pressuresCount;
- (bool)readFrom:(id)arg1;
- (void)setCollectionType:(int)arg1;
- (void)setContext:(id)arg1;
- (void)setHasCollectionType:(bool)arg1;
- (void)setHasStartTimestamp:(bool)arg1;
- (void)setHasStopTimestamp:(bool)arg1;
- (void)setLocation:(id)arg1;
- (void)setLocations:(id)arg1;
- (void)setMeta:(id)arg1;
- (void)setPressures:(id)arg1;
- (void)setStartTimestamp:(double)arg1;
- (void)setStopTimestamp:(double)arg1;
- (void)setWifiScans:(id)arg1;
- (double)startTimestamp;
- (double)stopTimestamp;
- (id)wifiScanAtIndex:(unsigned long long)arg1;
- (id)wifiScans;
- (unsigned long long)wifiScansCount;
- (void)writeTo:(id)arg1;

@end
