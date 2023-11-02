
@interface GEOSharedNavRouteInfo : PBCodable <NSCopying> {
    NSMutableArray * _chargingStations;
    struct { 
        double *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _coordinates;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_coordinates : 1; 
        unsigned int read_trafficColorOffsets : 1; 
        unsigned int read_trafficColors : 1; 
        unsigned int read_chargingStations : 1; 
        unsigned int read_routingPathLegs : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSMutableArray * _routingPathLegs;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _trafficColorOffsets;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _trafficColors;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *chargingStations;
@property (nonatomic, readonly) double*coordinates;
@property (nonatomic, readonly) unsigned long long coordinatesCount;
@property (nonatomic, retain) NSMutableArray *routingPathLegs;
@property (nonatomic, readonly) unsigned int*trafficColorOffsets;
@property (nonatomic, readonly) unsigned long long trafficColorOffsetsCount;
@property (nonatomic, readonly) unsigned int*trafficColors;
@property (nonatomic, readonly) unsigned long long trafficColorsCount;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)chargingStationsType;
+ (bool)isValid:(id)arg1;
+ (Class)routingPathLegType;

- (void).cxx_destruct;
- (void)addChargingStations:(id)arg1;
- (void)addCoordinates:(double)arg1;
- (void)addRoutingPathLeg:(id)arg1;
- (void)addTrafficColor:(unsigned int)arg1;
- (void)addTrafficColorOffset:(unsigned int)arg1;
- (id)chargingStations;
- (id)chargingStationsAtIndex:(unsigned long long)arg1;
- (unsigned long long)chargingStationsCount;
- (void)clearChargingStations;
- (void)clearCoordinates;
- (void)clearRoutingPathLegs;
- (void)clearTrafficColorOffsets;
- (void)clearTrafficColors;
- (void)clearUnknownFields:(bool)arg1;
- (double*)coordinates;
- (double)coordinatesAtIndex:(unsigned long long)arg1;
- (unsigned long long)coordinatesCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
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
- (id)routingPathLegAtIndex:(unsigned long long)arg1;
- (id)routingPathLegs;
- (unsigned long long)routingPathLegsCount;
- (void)setChargingStations:(id)arg1;
- (void)setCoordinates:(double*)arg1 count:(unsigned long long)arg2;
- (void)setRoutingPathLegs:(id)arg1;
- (void)setTrafficColorOffsets:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setTrafficColors:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (unsigned int)trafficColorAtIndex:(unsigned long long)arg1;
- (unsigned int)trafficColorOffsetAtIndex:(unsigned long long)arg1;
- (unsigned int*)trafficColorOffsets;
- (unsigned long long)trafficColorOffsetsCount;
- (unsigned int*)trafficColors;
- (unsigned long long)trafficColorsCount;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
