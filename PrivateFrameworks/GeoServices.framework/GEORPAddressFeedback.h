
@interface GEORPAddressFeedback : PBCodable <NSCopying> {
    GEORPAddressCorrections * _address;
    struct { 
        unsigned int has_type : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_address : 1; 
        unsigned int read_personalizedMaps : 1; 
        unsigned int read_placeRequest : 1; 
        unsigned int read_place : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEORPPersonalizedMapsContext * _personalizedMaps;
    GEOPDPlace * _place;
    GEOPDPlaceRequest * _placeRequest;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    int  _type;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEORPAddressCorrections *address;
@property (nonatomic, readonly) bool hasAddress;
@property (nonatomic, readonly) bool hasPersonalizedMaps;
@property (nonatomic, readonly) bool hasPlace;
@property (nonatomic, readonly) bool hasPlaceRequest;
@property (nonatomic) bool hasType;
@property (nonatomic, retain) GEORPPersonalizedMapsContext *personalizedMaps;
@property (nonatomic, retain) GEOPDPlace *place;
@property (nonatomic, retain) GEOPDPlaceRequest *placeRequest;
@property (nonatomic) int type;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (id)address;
- (void)clearSensitiveFields:(unsigned long long)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAddress;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasPersonalizedMaps;
- (bool)hasPlace;
- (bool)hasPlaceRequest;
- (bool)hasType;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)personalizedMaps;
- (id)place;
- (id)placeRequest;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAddress:(id)arg1;
- (void)setHasType:(bool)arg1;
- (void)setPersonalizedMaps:(id)arg1;
- (void)setPlace:(id)arg1;
- (void)setPlaceRequest:(id)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
