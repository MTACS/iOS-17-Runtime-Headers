
@interface GEOTransitOptions : PBCodable <NSCopying> {
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _avoidedModes;
    bool  _enableIncidents;
    GEOFareOptions * _fareOptions;
    struct { 
        unsigned int has_prioritization : 1; 
        unsigned int has_routingBehavior : 1; 
        unsigned int has_enableIncidents : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_avoidedModes : 1; 
        unsigned int read_fareOptions : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    int  _prioritization;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    int  _routingBehavior;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) int*avoidedModes;
@property (nonatomic, readonly) unsigned long long avoidedModesCount;
@property (nonatomic) bool enableIncidents;
@property (nonatomic, retain) GEOFareOptions *fareOptions;
@property (nonatomic) bool hasEnableIncidents;
@property (nonatomic, readonly) bool hasFareOptions;
@property (nonatomic) bool hasPrioritization;
@property (nonatomic) bool hasRoutingBehavior;
@property (nonatomic) int prioritization;
@property (nonatomic) int routingBehavior;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsAvoidedModes:(id)arg1;
- (int)StringAsPrioritization:(id)arg1;
- (int)StringAsRoutingBehavior:(id)arg1;
- (void)addAvoidedMode:(int)arg1;
- (int)avoidedModeAtIndex:(unsigned long long)arg1;
- (int*)avoidedModes;
- (id)avoidedModesAsString:(int)arg1;
- (unsigned long long)avoidedModesCount;
- (void)clearAvoidedModes;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)enableIncidents;
- (id)fareOptions;
- (bool)hasEnableIncidents;
- (bool)hasFareOptions;
- (bool)hasPrioritization;
- (bool)hasRoutingBehavior;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (int)prioritization;
- (id)prioritizationAsString:(int)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (int)routingBehavior;
- (id)routingBehaviorAsString:(int)arg1;
- (void)setAvoidedModes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setEnableIncidents:(bool)arg1;
- (void)setFareOptions:(id)arg1;
- (void)setHasEnableIncidents:(bool)arg1;
- (void)setHasPrioritization:(bool)arg1;
- (void)setHasRoutingBehavior:(bool)arg1;
- (void)setPrioritization:(int)arg1;
- (void)setRoutingBehavior:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
