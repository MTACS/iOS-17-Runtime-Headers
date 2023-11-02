
@interface GEORPAddress : PBCodable <NSCopying> {
    GEOPDAddressObject * _addressObject;
    NSString * _addressString;
    struct { 
        unsigned int read_addressObject : 1; 
        unsigned int read_addressString : 1; 
        unsigned int read_geoAddress : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOAddress * _geoAddress;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
}

@property (nonatomic, retain) GEOPDAddressObject *addressObject;
@property (nonatomic, retain) NSString *addressString;
@property (nonatomic, retain) GEOAddress *geoAddress;
@property (nonatomic, readonly) bool hasAddressObject;
@property (nonatomic, readonly) bool hasAddressString;
@property (nonatomic, readonly) bool hasGeoAddress;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (id)addressObject;
- (id)addressString;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)geoAddress;
- (bool)hasAddressObject;
- (bool)hasAddressString;
- (bool)hasGeoAddress;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAddressObject:(id)arg1;
- (void)setAddressString:(id)arg1;
- (void)setGeoAddress:(id)arg1;
- (void)writeTo:(id)arg1;

@end
