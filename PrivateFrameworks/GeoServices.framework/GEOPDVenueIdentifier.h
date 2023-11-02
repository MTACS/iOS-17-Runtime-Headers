
@interface GEOPDVenueIdentifier : PBCodable <NSCopying> {
    unsigned long long  _buildingId;
    struct { 
        unsigned long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _containedBys;
    unsigned long long  _featureId;
    unsigned long long  _fixtureId;
    struct { 
        unsigned int has_buildingId : 1; 
        unsigned int has_featureId : 1; 
        unsigned int has_fixtureId : 1; 
        unsigned int has_geminiId : 1; 
        unsigned int has_levelId : 1; 
        unsigned int has_unitId : 1; 
        unsigned int has_venueGeminiId : 1; 
        unsigned int has_venueId : 1; 
        unsigned int has_levelOrdinal : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_containedBys : 1; 
        unsigned int read_sectionIds : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    unsigned long long  _geminiId;
    unsigned long long  _levelId;
    int  _levelOrdinal;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    struct { 
        unsigned long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _sectionIds;
    unsigned long long  _unitId;
    PBUnknownFields * _unknownFields;
    unsigned long long  _venueGeminiId;
    unsigned long long  _venueId;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithVenueID:(unsigned long long)arg1 featureID:(unsigned long long)arg2 businessID:(unsigned long long)arg3;
- (id)initWithVenueID:(unsigned long long)arg1 featureID:(unsigned long long)arg2 businessID:(unsigned long long)arg3 componentIdentifier:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
