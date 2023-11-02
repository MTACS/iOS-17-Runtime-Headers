
@interface GEOTransitBaseFare : PBCodable <GEOTransitFare, NSCopying> {
    bool  _cashOnly;
    struct { 
        unsigned int has_numberOfLegs : 1; 
        unsigned int has_paymentType : 1; 
        unsigned int has_cashOnly : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_supportedPaymentMethodIndexs : 1; 
        unsigned int read_price : 1; 
        unsigned int read_supportedPaymentMethods : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    unsigned int  _numberOfLegs;
    int  _paymentType;
    GEOTransitPrice * _price;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _supportedPaymentMethodIndexs;
    NSMutableArray * _supportedPaymentMethods;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool cashOnly;
@property (nonatomic) bool cashOnly;
@property (nonatomic, readonly, copy) NSString *currencyCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasCashOnly;
@property (nonatomic) bool hasNumberOfLegs;
@property (nonatomic) bool hasPaymentType;
@property (nonatomic, readonly) bool hasPrice;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned int numberOfLegs;
@property (nonatomic) int paymentType;
@property (nonatomic, retain) GEOTransitPrice *price;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *supportedICCardProviders;
@property (nonatomic, readonly) unsigned int*supportedPaymentMethodIndexs;
@property (nonatomic, readonly) unsigned long long supportedPaymentMethodIndexsCount;
@property (nonatomic, retain) NSMutableArray *supportedPaymentMethods;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, readonly) NSDecimalNumber *value;

+ (bool)isValid:(id)arg1;
+ (Class)supportedPaymentMethodType;

- (void).cxx_destruct;
- (int)StringAsPaymentType:(id)arg1;
- (void)addSupportedPaymentMethod:(id)arg1;
- (void)addSupportedPaymentMethodIndex:(unsigned int)arg1;
- (bool)cashOnly;
- (void)clearSupportedPaymentMethodIndexs;
- (void)clearSupportedPaymentMethods;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currencyCode;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCashOnly;
- (bool)hasNumberOfLegs;
- (bool)hasPaymentType;
- (bool)hasPrice;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (unsigned int)numberOfLegs;
- (int)paymentType;
- (id)paymentTypeAsString:(int)arg1;
- (id)price;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCashOnly:(bool)arg1;
- (void)setHasCashOnly:(bool)arg1;
- (void)setHasNumberOfLegs:(bool)arg1;
- (void)setHasPaymentType:(bool)arg1;
- (void)setNumberOfLegs:(unsigned int)arg1;
- (void)setPaymentType:(int)arg1;
- (void)setPrice:(id)arg1;
- (void)setSupportedPaymentMethodIndexs:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setSupportedPaymentMethods:(id)arg1;
- (id)supportedICCardProviders;
- (id)supportedPaymentMethodAtIndex:(unsigned long long)arg1;
- (unsigned int)supportedPaymentMethodIndexAtIndex:(unsigned long long)arg1;
- (unsigned int*)supportedPaymentMethodIndexs;
- (unsigned long long)supportedPaymentMethodIndexsCount;
- (id)supportedPaymentMethods;
- (unsigned long long)supportedPaymentMethodsCount;
- (long long)type;
- (id)unknownFields;
- (id)value;
- (void)writeTo:(id)arg1;

@end
