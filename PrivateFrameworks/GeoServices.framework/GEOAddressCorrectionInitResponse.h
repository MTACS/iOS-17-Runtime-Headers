
@interface GEOAddressCorrectionInitResponse : PBCodable <NSCopying> {
    NSMutableArray * _address;
    NSString * _addressID;
    GEOLocation * _addressLocation;
    struct { 
        unsigned int has_numberOfVisitsBucketSize : 1; 
        unsigned int has_statusCode : 1; 
        unsigned int read_addressID : 1; 
        unsigned int read_addressLocation : 1; 
        unsigned int read_address : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    unsigned int  _numberOfVisitsBucketSize;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    int  _statusCode;
}

@property (nonatomic, retain) NSMutableArray *address;
@property (nonatomic, retain) NSString *addressID;
@property (nonatomic, retain) GEOLocation *addressLocation;
@property (nonatomic, readonly) bool hasAddressID;
@property (nonatomic, readonly) bool hasAddressLocation;
@property (nonatomic) bool hasNumberOfVisitsBucketSize;
@property (nonatomic) bool hasStatusCode;
@property (nonatomic) unsigned int numberOfVisitsBucketSize;
@property (nonatomic) int statusCode;

+ (Class)addressType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsStatusCode:(id)arg1;
- (void)addAddress:(id)arg1;
- (id)address;
- (id)addressAtIndex:(unsigned long long)arg1;
- (unsigned long long)addressCount;
- (id)addressID;
- (id)addressLocation;
- (void)clearAddress;
- (void)clearSensitiveFields:(unsigned long long)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAddressID;
- (bool)hasAddressLocation;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasNumberOfVisitsBucketSize;
- (bool)hasStatusCode;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (unsigned int)numberOfVisitsBucketSize;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAddress:(id)arg1;
- (void)setAddressID:(id)arg1;
- (void)setAddressLocation:(id)arg1;
- (void)setHasNumberOfVisitsBucketSize:(bool)arg1;
- (void)setHasStatusCode:(bool)arg1;
- (void)setNumberOfVisitsBucketSize:(unsigned int)arg1;
- (void)setStatusCode:(int)arg1;
- (int)statusCode;
- (id)statusCodeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
