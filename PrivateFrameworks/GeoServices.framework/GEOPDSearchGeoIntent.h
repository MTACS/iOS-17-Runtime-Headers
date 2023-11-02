
@interface GEOPDSearchGeoIntent : PBCodable <NSCopying> {
    GEOStructuredAddress * _address;
    GEOLatLng * _center;
    NSString * _countryCode;
    GEOMapRegion * _displayMapRegion;
    NSString * _displayName;
    NSString * _doorNumber;
    struct { 
        unsigned int has_geoId : 1; 
        unsigned int has_geoTypeId : 1; 
        unsigned int read_address : 1; 
        unsigned int read_center : 1; 
        unsigned int read_countryCode : 1; 
        unsigned int read_displayMapRegion : 1; 
        unsigned int read_displayName : 1; 
        unsigned int read_doorNumber : 1; 
        unsigned int read_mapRegion : 1; 
        unsigned int read_name : 1; 
        unsigned int read_tokenSet : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    long long  _geoId;
    int  _geoTypeId;
    GEOMapRegion * _mapRegion;
    NSString * _name;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOPDSearchTokenSet * _tokenSet;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
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
