
@interface GEOAddressCorrectionAddress : PBCodable <NSCopying> {
    NSString * _addressID;
    GEOLocation * _addressLocation;
    struct { 
        unsigned int has_radiusInMeters : 1; 
        unsigned int read_addressID : 1; 
        unsigned int read_addressLocation : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    double  _radiusInMeters;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
}

@property (nonatomic, retain) NSString *addressID;
@property (nonatomic, retain) GEOLocation *addressLocation;
@property (nonatomic, readonly) bool hasAddressID;
@property (nonatomic, readonly) bool hasAddressLocation;
@property (nonatomic) bool hasRadiusInMeters;
@property (nonatomic) double radiusInMeters;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (id)addressID;
- (id)addressLocation;
- (void)clearSensitiveFields:(unsigned long long)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAddressID;
- (bool)hasAddressLocation;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasRadiusInMeters;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (double)radiusInMeters;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAddressID:(id)arg1;
- (void)setAddressLocation:(id)arg1;
- (void)setHasRadiusInMeters:(bool)arg1;
- (void)setRadiusInMeters:(double)arg1;
- (void)writeTo:(id)arg1;

@end
