
@interface GEOPDPlaceContextMetadata : PBCodable <NSCopying> {
    GEOPDAutocompletePlaceContextMetadata * _autocompletePlaceContextMetadata;
    struct { 
        unsigned int has_muid : 1; 
        unsigned int has_placeContextMetadataType : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_autocompletePlaceContextMetadata : 1; 
        unsigned int read_searchPlaceContextMetadata : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    unsigned long long  _muid;
    int  _placeContextMetadataType;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOPDSearchPlaceContextMetadata * _searchPlaceContextMetadata;
    PBUnknownFields * _unknownFields;
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
