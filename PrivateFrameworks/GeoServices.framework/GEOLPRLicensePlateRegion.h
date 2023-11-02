
@interface GEOLPRLicensePlateRegion : PBCodable <NSCopying> {
    struct { 
        unsigned int read_identifier : 1; 
        unsigned int read_licensePlateInfos : 1; 
        unsigned int read_mapRegion : 1; 
        unsigned int read_regions : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _identifier;
    NSMutableArray * _licensePlateInfos;
    GEOMapRegionE7 * _mapRegion;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSMutableArray * _regions;
}

@property (nonatomic, readonly) bool hasMapRegion;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSMutableArray *licensePlateInfos;
@property (nonatomic, retain) GEOMapRegionE7 *mapRegion;
@property (nonatomic, retain) NSMutableArray *regions;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

+ (bool)isValid:(id)arg1;
+ (Class)licensePlateInfoType;
+ (Class)regionType;

- (void).cxx_destruct;
- (void)addLicensePlateInfo:(id)arg1;
- (void)addRegion:(id)arg1;
- (void)clearLicensePlateInfos;
- (void)clearRegions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMapRegion;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)licensePlateInfoAtIndex:(unsigned long long)arg1;
- (id)licensePlateInfos;
- (unsigned long long)licensePlateInfosCount;
- (id)mapRegion;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)regionAtIndex:(unsigned long long)arg1;
- (id)regions;
- (unsigned long long)regionsCount;
- (void)setIdentifier:(id)arg1;
- (void)setLicensePlateInfos:(id)arg1;
- (void)setMapRegion:(id)arg1;
- (void)setRegions:(id)arg1;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation

- (id)plateInfosMatchingVehicle:(id)arg1;
- (id)restrictionRegionsContainingLatLngs:(id)arg1 inRadius:(double)arg2;

@end
