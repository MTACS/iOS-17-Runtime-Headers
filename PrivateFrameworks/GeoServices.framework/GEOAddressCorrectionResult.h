
@interface GEOAddressCorrectionResult : PBCodable <NSCopying> {
    NSString * _addressID;
    struct { 
        unsigned int read_addressID : 1; 
        unsigned int read_significantLocations : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSMutableArray * _significantLocations;
}

@property (nonatomic, retain) NSString *addressID;
@property (nonatomic, readonly) bool hasAddressID;
@property (nonatomic, retain) NSMutableArray *significantLocations;

+ (bool)isValid:(id)arg1;
+ (Class)significantLocationType;

- (void).cxx_destruct;
- (void)addSignificantLocation:(id)arg1;
- (id)addressID;
- (void)clearSensitiveFields:(unsigned long long)arg1;
- (void)clearSignificantLocations;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAddressID;
- (bool)hasGreenTeaWithValue:(bool)arg1;
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
- (void)setAddressID:(id)arg1;
- (void)setSignificantLocations:(id)arg1;
- (id)significantLocationAtIndex:(unsigned long long)arg1;
- (id)significantLocations;
- (unsigned long long)significantLocationsCount;
- (void)writeTo:(id)arg1;

@end
