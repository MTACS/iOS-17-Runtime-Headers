
@interface GEOPDFeatureIdGeocodingParameters : PBCodable <NSCopying> {
    struct { 
        unsigned long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _encryptedFeatureIds;
    unsigned long long  _featureId;
    struct { 
        unsigned int has_featureId : 1; 
        unsigned int has_formattedAddressType : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_encryptedFeatureIds : 1; 
        unsigned int read_location : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    int  _formattedAddressType;
    GEOLatLng * _location;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
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
