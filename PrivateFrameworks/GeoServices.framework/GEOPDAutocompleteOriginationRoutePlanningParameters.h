
@interface GEOPDAutocompleteOriginationRoutePlanningParameters : PBCodable <NSCopying> {
    struct { 
        unsigned int has_isEditServerRecommendedStop : 1; 
        unsigned int has_isRoutePlanningEditStopFillRequest : 1; 
    }  _flags;
    bool  _isEditServerRecommendedStop;
    bool  _isRoutePlanningEditStopFillRequest;
    GEOLatLng * _previousLocation;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasIsEditServerRecommendedStop;
@property (nonatomic) bool hasIsRoutePlanningEditStopFillRequest;
@property (nonatomic, readonly) bool hasPreviousLocation;
@property (nonatomic) bool isEditServerRecommendedStop;
@property (nonatomic) bool isRoutePlanningEditStopFillRequest;
@property (nonatomic, retain) GEOLatLng *previousLocation;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasIsEditServerRecommendedStop;
- (bool)hasIsRoutePlanningEditStopFillRequest;
- (bool)hasPreviousLocation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEditServerRecommendedStop;
- (bool)isEqual:(id)arg1;
- (bool)isRoutePlanningEditStopFillRequest;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)previousLocation;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasIsEditServerRecommendedStop:(bool)arg1;
- (void)setHasIsRoutePlanningEditStopFillRequest:(bool)arg1;
- (void)setIsEditServerRecommendedStop:(bool)arg1;
- (void)setIsRoutePlanningEditStopFillRequest:(bool)arg1;
- (void)setPreviousLocation:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
