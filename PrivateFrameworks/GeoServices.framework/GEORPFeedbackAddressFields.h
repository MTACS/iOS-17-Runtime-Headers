
@interface GEORPFeedbackAddressFields : PBCodable <NSCopying> {
    NSString * _addressBasic;
    NSString * _addressBuilding;
    NSString * _addressFloor;
    NSString * _addressUnit;
    struct { 
        unsigned int read_addressBasic : 1; 
        unsigned int read_addressBuilding : 1; 
        unsigned int read_addressFloor : 1; 
        unsigned int read_addressUnit : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
}

@property (nonatomic, retain) NSString *addressBasic;
@property (nonatomic, retain) NSString *addressBuilding;
@property (nonatomic, retain) NSString *addressFloor;
@property (nonatomic, retain) NSString *addressUnit;
@property (nonatomic, readonly) bool hasAddressBasic;
@property (nonatomic, readonly) bool hasAddressBuilding;
@property (nonatomic, readonly) bool hasAddressFloor;
@property (nonatomic, readonly) bool hasAddressUnit;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (id)addressBasic;
- (id)addressBuilding;
- (id)addressFloor;
- (id)addressUnit;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAddressBasic;
- (bool)hasAddressBuilding;
- (bool)hasAddressFloor;
- (bool)hasAddressUnit;
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
- (void)setAddressBasic:(id)arg1;
- (void)setAddressBuilding:(id)arg1;
- (void)setAddressFloor:(id)arg1;
- (void)setAddressUnit:(id)arg1;
- (void)writeTo:(id)arg1;

@end
