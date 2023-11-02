
@interface GEOArrivalParameters : PBCodable <NSCopying> {
    NSMutableArray * _arrivalMapRegions;
    unsigned int  _arrivalParametersEndOfRouteDistanceThreshold;
    NSMutableArray * _arrivalPoints;
    unsigned int  _endOfRouteDistanceThreshold;
    struct { 
        unsigned int has_arrivalParametersEndOfRouteDistanceThreshold : 1; 
        unsigned int has_endOfRouteDistanceThreshold : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_arrivalMapRegions : 1; 
        unsigned int read_arrivalPoints : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *arrivalMapRegions;
@property (nonatomic) unsigned int arrivalParametersEndOfRouteDistanceThreshold;
@property (nonatomic, retain) NSMutableArray *arrivalPoints;
@property (nonatomic) unsigned int endOfRouteDistanceThreshold;
@property (nonatomic) bool hasArrivalParametersEndOfRouteDistanceThreshold;
@property (nonatomic) bool hasEndOfRouteDistanceThreshold;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

+ (Class)arrivalMapRegionsType;
+ (Class)arrivalPointsType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)addArrivalMapRegions:(id)arg1;
- (void)addArrivalPoints:(id)arg1;
- (id)arrivalMapRegions;
- (id)arrivalMapRegionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)arrivalMapRegionsCount;
- (unsigned int)arrivalParametersEndOfRouteDistanceThreshold;
- (id)arrivalPoints;
- (id)arrivalPointsAtIndex:(unsigned long long)arg1;
- (unsigned long long)arrivalPointsCount;
- (void)clearArrivalMapRegions;
- (void)clearArrivalPoints;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)endOfRouteDistanceThreshold;
- (bool)hasArrivalParametersEndOfRouteDistanceThreshold;
- (bool)hasEndOfRouteDistanceThreshold;
- (bool)hasGreenTeaWithValue:(bool)arg1;
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
- (void)setArrivalMapRegions:(id)arg1;
- (void)setArrivalParametersEndOfRouteDistanceThreshold:(unsigned int)arg1;
- (void)setArrivalPoints:(id)arg1;
- (void)setEndOfRouteDistanceThreshold:(unsigned int)arg1;
- (void)setHasArrivalParametersEndOfRouteDistanceThreshold:(bool)arg1;
- (void)setHasEndOfRouteDistanceThreshold:(bool)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation

- (bool)containsCoordinate:(struct { double x1; double x2; double x3; })arg1 arrivalRegionType:(int)arg2 distanceToEndOfLeg:(double)arg3;
- (bool)containsCoordinate:(struct { double x1; double x2; double x3; })arg1 arrivalRegionType:(int)arg2 distanceToEndOfLeg:(double)arg3 excludeRadius:(double)arg4;

@end
