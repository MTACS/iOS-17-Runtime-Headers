
@interface GEOPBTransitScheduleLookupParameters : PBCodable <NSCopying> {
    struct { 
        unsigned int has_lineId : 1; 
        unsigned int has_referenceTripId : 1; 
        unsigned int has_transitId : 1; 
        unsigned int has_includeAllDirectionNames : 1; 
        unsigned int has_includeAllHeadsigns : 1; 
    }  _flags;
    bool  _includeAllDirectionNames;
    bool  _includeAllHeadsigns;
    unsigned long long  _lineId;
    unsigned long long  _referenceTripId;
    NSData * _routingParameters;
    unsigned long long  _transitId;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasIncludeAllDirectionNames;
@property (nonatomic) bool hasIncludeAllHeadsigns;
@property (nonatomic) bool hasLineId;
@property (nonatomic) bool hasReferenceTripId;
@property (nonatomic, readonly) bool hasRoutingParameters;
@property (nonatomic) bool hasTransitId;
@property (nonatomic) bool includeAllDirectionNames;
@property (nonatomic) bool includeAllHeadsigns;
@property (nonatomic) unsigned long long lineId;
@property (nonatomic) unsigned long long referenceTripId;
@property (nonatomic, retain) NSData *routingParameters;
@property (nonatomic) unsigned long long transitId;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIncludeAllDirectionNames;
- (bool)hasIncludeAllHeadsigns;
- (bool)hasLineId;
- (bool)hasReferenceTripId;
- (bool)hasRoutingParameters;
- (bool)hasTransitId;
- (unsigned long long)hash;
- (bool)includeAllDirectionNames;
- (bool)includeAllHeadsigns;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (unsigned long long)lineId;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned long long)referenceTripId;
- (id)routingParameters;
- (void)setHasIncludeAllDirectionNames:(bool)arg1;
- (void)setHasIncludeAllHeadsigns:(bool)arg1;
- (void)setHasLineId:(bool)arg1;
- (void)setHasReferenceTripId:(bool)arg1;
- (void)setHasTransitId:(bool)arg1;
- (void)setIncludeAllDirectionNames:(bool)arg1;
- (void)setIncludeAllHeadsigns:(bool)arg1;
- (void)setLineId:(unsigned long long)arg1;
- (void)setReferenceTripId:(unsigned long long)arg1;
- (void)setRoutingParameters:(id)arg1;
- (void)setTransitId:(unsigned long long)arg1;
- (unsigned long long)transitId;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
