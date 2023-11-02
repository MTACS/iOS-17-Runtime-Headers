
@interface GEORoutePlanningInfo : PBCodable <NSCopying> {
    GEOAdvisoriesInfo * _advisoriesInfo;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_advisoriesInfo : 1; 
        unsigned int read_infrastructureDescription : 1; 
        unsigned int read_labelArtwork : 1; 
        unsigned int read_labelDetailText : 1; 
        unsigned int read_routePlanningDescription : 1; 
        unsigned int read_trafficDescriptionArtwork : 1; 
        unsigned int read_trafficDescriptionText : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOFormattedString * _infrastructureDescription;
    GEOPBTransitArtwork * _labelArtwork;
    GEOFormattedString * _labelDetailText;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEORouteInformation * _routePlanningDescription;
    GEOPBTransitArtwork * _trafficDescriptionArtwork;
    GEOFormattedString * _trafficDescriptionText;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOAdvisoriesInfo *advisoriesInfo;
@property (nonatomic, readonly) bool hasAdvisoriesInfo;
@property (nonatomic, readonly) bool hasInfrastructureDescription;
@property (nonatomic, readonly) bool hasLabelArtwork;
@property (nonatomic, readonly) bool hasLabelDetailText;
@property (nonatomic, readonly) bool hasRoutePlanningDescription;
@property (nonatomic, readonly) bool hasTrafficDescriptionArtwork;
@property (nonatomic, readonly) bool hasTrafficDescriptionText;
@property (nonatomic, retain) GEOFormattedString *infrastructureDescription;
@property (nonatomic, retain) GEOPBTransitArtwork *labelArtwork;
@property (nonatomic, retain) GEOFormattedString *labelDetailText;
@property (nonatomic, retain) GEORouteInformation *routePlanningDescription;
@property (nonatomic, retain) GEOPBTransitArtwork *trafficDescriptionArtwork;
@property (nonatomic, retain) GEOFormattedString *trafficDescriptionText;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (id)advisoriesInfo;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAdvisoriesInfo;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasInfrastructureDescription;
- (bool)hasLabelArtwork;
- (bool)hasLabelDetailText;
- (bool)hasRoutePlanningDescription;
- (bool)hasTrafficDescriptionArtwork;
- (bool)hasTrafficDescriptionText;
- (unsigned long long)hash;
- (id)infrastructureDescription;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)labelArtwork;
- (id)labelDetailText;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)routePlanningDescription;
- (void)setAdvisoriesInfo:(id)arg1;
- (void)setInfrastructureDescription:(id)arg1;
- (void)setLabelArtwork:(id)arg1;
- (void)setLabelDetailText:(id)arg1;
- (void)setRoutePlanningDescription:(id)arg1;
- (void)setTrafficDescriptionArtwork:(id)arg1;
- (void)setTrafficDescriptionText:(id)arg1;
- (id)trafficDescriptionArtwork;
- (id)trafficDescriptionText;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
