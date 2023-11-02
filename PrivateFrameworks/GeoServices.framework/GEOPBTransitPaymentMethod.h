
@interface GEOPBTransitPaymentMethod : PBCodable <NSCopying> {
    int  _addValueName;
    struct { 
        unsigned int has_muid : 1; 
        unsigned int has_addValueName : 1; 
        unsigned int has_paymentMethodType : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_identifier : 1; 
        unsigned int read_name : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _identifier;
    unsigned long long  _muid;
    NSString * _name;
    int  _paymentMethodType;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) int addValueName;
@property (nonatomic) bool hasAddValueName;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic) bool hasMuid;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic) bool hasPaymentMethodType;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) unsigned long long muid;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) int paymentMethodType;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsAddValueName:(id)arg1;
- (int)StringAsPaymentMethodType:(id)arg1;
- (int)addValueName;
- (id)addValueNameAsString:(int)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAddValueName;
- (bool)hasIdentifier;
- (bool)hasMuid;
- (bool)hasName;
- (bool)hasPaymentMethodType;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)muid;
- (id)name;
- (int)paymentMethodType;
- (id)paymentMethodTypeAsString:(int)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAddValueName:(int)arg1;
- (void)setHasAddValueName:(bool)arg1;
- (void)setHasMuid:(bool)arg1;
- (void)setHasPaymentMethodType:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMuid:(unsigned long long)arg1;
- (void)setName:(id)arg1;
- (void)setPaymentMethodType:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
