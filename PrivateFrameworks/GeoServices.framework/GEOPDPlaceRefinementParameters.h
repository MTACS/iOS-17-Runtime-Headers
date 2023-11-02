
@interface GEOPDPlaceRefinementParameters : PBCodable <NSCopying> {
    int  _addressGeocodeAccuracyHint;
    GEOStructuredAddress * _addressHint;
    NSData * _addressObjectHint;
    struct { 
        unsigned int has_muid : 1; 
        unsigned int has_addressGeocodeAccuracyHint : 1; 
        unsigned int has_placeTypeHint : 1; 
        unsigned int has_resultProviderId : 1; 
        unsigned int has_supportCoordinatesOnlyRefinement : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_addressHint : 1; 
        unsigned int read_addressObjectHint : 1; 
        unsigned int read_formattedAddressLineHints : 1; 
        unsigned int read_locationHint : 1; 
        unsigned int read_mapsId : 1; 
        unsigned int read_placeNameHint : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _formattedAddressLineHints;
    GEOLatLng * _locationHint;
    GEOPDMapsIdentifier * _mapsId;
    unsigned long long  _muid;
    NSString * _placeNameHint;
    int  _placeTypeHint;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    int  _resultProviderId;
    bool  _supportCoordinatesOnlyRefinement;
    PBUnknownFields * _unknownFields;
}

- (void).cxx_destruct;
- (bool)_hasRequiredFields;
- (unsigned long long)_routeHypothesisPlaceRefinementParametersHash;
- (bool)_routeHypothesisPlaceRefinementParametersIsEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithIdentifier:(id)arg1 placeNameHint:(id)arg2 locationHint:(struct { double x1; double x2; })arg3;
- (id)initWithMapItemToRefine:(id)arg1 coordinate:(struct { double x1; double x2; })arg2;
- (id)initWithSearchURLQuery:(id)arg1 identifier:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
