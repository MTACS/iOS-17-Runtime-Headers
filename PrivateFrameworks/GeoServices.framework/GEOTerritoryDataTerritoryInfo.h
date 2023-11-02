
@interface GEOTerritoryDataTerritoryInfo : PBCodable <NSCopying> {
    unsigned long long  _featureId;
    struct { 
        unsigned int has_featureId : 1; 
        unsigned int has_nameId : 1; 
        unsigned int read_interestedPartys : 1; 
        unsigned int read_territoryTypes : 1; 
        unsigned int read_interestedPartyCountryCode : 1; 
        unsigned int read_name : 1; 
        unsigned int read_polygon : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _interestedPartyCountryCode;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _interestedPartys;
    NSString * _name;
    unsigned int  _nameId;
    GEOTerritoryDataPolygon * _polygon;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _territoryTypes;
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
