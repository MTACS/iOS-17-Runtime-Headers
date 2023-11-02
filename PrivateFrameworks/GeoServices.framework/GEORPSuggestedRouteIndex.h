
@interface GEORPSuggestedRouteIndex : PBCodable <NSCopying> {
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _clusteredRouteRideSelections;
    unsigned int  _directionsResponseIndex;
    unsigned int  _directionsResponseSuggestedRoutesIndex;
    struct { 
        unsigned int has_directionsResponseIndex : 1; 
        unsigned int has_directionsResponseSuggestedRoutesIndex : 1; 
    }  _flags;
}

@property (nonatomic, readonly) unsigned int*clusteredRouteRideSelections;
@property (nonatomic, readonly) unsigned long long clusteredRouteRideSelectionsCount;
@property (nonatomic) unsigned int directionsResponseIndex;
@property (nonatomic) unsigned int directionsResponseSuggestedRoutesIndex;
@property (nonatomic) bool hasDirectionsResponseIndex;
@property (nonatomic) bool hasDirectionsResponseSuggestedRoutesIndex;

+ (bool)isValid:(id)arg1;

- (void)addClusteredRouteRideSelections:(unsigned int)arg1;
- (void)clearClusteredRouteRideSelections;
- (unsigned int*)clusteredRouteRideSelections;
- (unsigned int)clusteredRouteRideSelectionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)clusteredRouteRideSelectionsCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)directionsResponseIndex;
- (unsigned int)directionsResponseSuggestedRoutesIndex;
- (bool)hasDirectionsResponseIndex;
- (bool)hasDirectionsResponseSuggestedRoutesIndex;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setClusteredRouteRideSelections:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setDirectionsResponseIndex:(unsigned int)arg1;
- (void)setDirectionsResponseSuggestedRoutesIndex:(unsigned int)arg1;
- (void)setHasDirectionsResponseIndex:(bool)arg1;
- (void)setHasDirectionsResponseSuggestedRoutesIndex:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
