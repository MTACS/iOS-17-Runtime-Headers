
@interface GEOPDExtendedGeoLookupParameters : PBCodable <NSCopying> {
    NSString * _dataSourceId;
    bool  _dataSourceIdRequired;
    struct { 
        unsigned int has_primaryFeatureGeoId : 1; 
        unsigned int has_streetSubPostalGeoId : 1; 
        unsigned int has_dataSourceIdRequired : 1; 
        unsigned int has_isLatlngRequest : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_intersectingFeatureGeoIds : 1; 
        unsigned int read_dataSourceId : 1; 
        unsigned int read_interpolationParameter : 1; 
        unsigned int read_preserveFields : 1; 
        unsigned int read_primaryFeatureLocation : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOInterpolationParameters * _interpolationParameter;
    struct { 
        unsigned long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _intersectingFeatureGeoIds;
    bool  _isLatlngRequest;
    GEOAddress * _preserveFields;
    unsigned long long  _primaryFeatureGeoId;
    GEOLatLng * _primaryFeatureLocation;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    unsigned long long  _streetSubPostalGeoId;
    PBUnknownFields * _unknownFields;
}

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
