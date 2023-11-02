
@interface GEOPDETAFilter : PBCodable <NSCopying> {
    GEOAutomobileOptions * _automobileOptions;
    GEOClientCapabilities * _clientCapabilities;
    GEOCyclingOptions * _cyclingOptions;
    struct { 
        unsigned int has_includeEtaRouteIncidents : 1; 
        unsigned int has_includeHistoricTravelTime : 1; 
        unsigned int has_includeRouteTrafficDetail : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_transportTypes : 1; 
        unsigned int read_automobileOptions : 1; 
        unsigned int read_clientCapabilities : 1; 
        unsigned int read_cyclingOptions : 1; 
        unsigned int read_transitOptions : 1; 
        unsigned int read_walkingOptions : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    bool  _includeEtaRouteIncidents;
    bool  _includeHistoricTravelTime;
    bool  _includeRouteTrafficDetail;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOTransitOptions * _transitOptions;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _transportTypes;
    PBUnknownFields * _unknownFields;
    GEOWalkingOptions * _walkingOptions;
}

+ (id)_etaFilterWithTransportTypes:(int*)arg1 transportTypesCount:(unsigned long long)arg2 automobileOptions:(id)arg3 transitOptions:(id)arg4 walkingOptions:(id)arg5 cyclingOptions:(id)arg6;
+ (id)etaFilterForRouteAttributes:(id)arg1;
+ (id)etaFilterForTraits:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
