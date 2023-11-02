
@interface GEORPPersonalizedMaps : PBCodable <NSCopying> {
    GEORPAddress * _address;
    int  _addressType;
    struct { 
        unsigned int has_addressType : 1; 
        unsigned int has_placeType : 1; 
    }  _flags;
    int  _placeType;
}

@property (nonatomic, retain) GEORPAddress *address;
@property (nonatomic) int addressType;
@property (nonatomic, readonly) bool hasAddress;
@property (nonatomic) bool hasAddressType;
@property (nonatomic) bool hasPlaceType;
@property (nonatomic) int placeType;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsAddressType:(id)arg1;
- (int)StringAsPlaceType:(id)arg1;
- (id)address;
- (int)addressType;
- (id)addressTypeAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAddress;
- (bool)hasAddressType;
- (bool)hasPlaceType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (int)placeType;
- (id)placeTypeAsString:(int)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAddress:(id)arg1;
- (void)setAddressType:(int)arg1;
- (void)setHasAddressType:(bool)arg1;
- (void)setHasPlaceType:(bool)arg1;
- (void)setPlaceType:(int)arg1;
- (void)writeTo:(id)arg1;

@end
