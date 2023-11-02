
@interface GEOAddressCorrectionUpdateRequest : PBRequest <NSCopying> {
    NSString * _addressID;
    NSMutableArray * _addressResults;
    int  _correctionStatus;
    struct { 
        unsigned int has_correctionStatus : 1; 
        unsigned int read_addressID : 1; 
        unsigned int read_addressResults : 1; 
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
@property (nonatomic, retain) NSMutableArray *addressResults;
@property (nonatomic) int correctionStatus;
@property (nonatomic, readonly) bool hasAddressID;
@property (nonatomic) bool hasCorrectionStatus;
@property (nonatomic, retain) NSMutableArray *significantLocations;

+ (Class)addressResultType;
+ (bool)isValid:(id)arg1;
+ (Class)significantLocationType;

- (void).cxx_destruct;
- (int)StringAsCorrectionStatus:(id)arg1;
- (void)addAddressResult:(id)arg1;
- (void)addSignificantLocation:(id)arg1;
- (id)addressID;
- (id)addressResultAtIndex:(unsigned long long)arg1;
- (id)addressResults;
- (unsigned long long)addressResultsCount;
- (void)clearAddressResults;
- (void)clearSensitiveFields:(unsigned long long)arg1;
- (void)clearSignificantLocations;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)correctionStatus;
- (id)correctionStatusAsString:(int)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAddressID;
- (bool)hasCorrectionStatus;
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
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setAddressID:(id)arg1;
- (void)setAddressResults:(id)arg1;
- (void)setCorrectionStatus:(int)arg1;
- (void)setHasCorrectionStatus:(bool)arg1;
- (void)setSignificantLocations:(id)arg1;
- (id)significantLocationAtIndex:(unsigned long long)arg1;
- (id)significantLocations;
- (unsigned long long)significantLocationsCount;
- (void)writeTo:(id)arg1;

@end
