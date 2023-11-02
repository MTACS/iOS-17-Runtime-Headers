
@interface GEOPDVendorSpecificPlaceRefinementParameters : PBCodable <NSCopying> {
    int  _addressGeocodeAccuracyHint;
    GEOStructuredAddress * _addressHint;
    NSData * _addressObjectHint;
    NSString * _externalItemId;
    struct { 
        unsigned int has_muid : 1; 
        unsigned int has_addressGeocodeAccuracyHint : 1; 
        unsigned int has_placeTypeHint : 1; 
        unsigned int has_resultProviderId : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_addressHint : 1; 
        unsigned int read_addressObjectHint : 1; 
        unsigned int read_externalItemId : 1; 
        unsigned int read_formattedAddressLineHints : 1; 
        unsigned int read_locationHint : 1; 
        unsigned int read_placeNameHint : 1; 
        unsigned int read_vendorId : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _formattedAddressLineHints;
    GEOLatLng * _locationHint;
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
    PBUnknownFields * _unknownFields;
    NSString * _vendorId;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithExternalBusinessID:(id)arg1 contentProvider:(id)arg2;
- (id)initWithMapItemToRefine:(id)arg1 coordinate:(struct { double x1; double x2; })arg2 contentProvider:(id)arg3;
- (id)initWithMuid:(unsigned long long)arg1 locationHint:(struct { double x1; double x2; })arg2 placeNameHint:(id)arg3 resultProviderId:(int)arg4 contentProvider:(id)arg5;
- (id)initWithSearchURLQuery:(id)arg1 coordinate:(struct { double x1; double x2; })arg2 muid:(unsigned long long)arg3 resultProviderId:(int)arg4 contentProvider:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
