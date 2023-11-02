
@interface GEOTransitSurcharge : PBCodable <NSCopying> {
    struct { 
        unsigned int has_numberOfLegs : 1; 
        unsigned int has_paymentType : 1; 
    }  _flags;
    unsigned int  _numberOfLegs;
    int  _paymentType;
    NSMutableArray * _surchargeUnits;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasNumberOfLegs;
@property (nonatomic) bool hasPaymentType;
@property (nonatomic) unsigned int numberOfLegs;
@property (nonatomic) int paymentType;
@property (nonatomic, retain) NSMutableArray *surchargeUnits;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;
+ (Class)surchargeUnitType;

- (void).cxx_destruct;
- (int)StringAsPaymentType:(id)arg1;
- (void)addSurchargeUnit:(id)arg1;
- (void)clearSurchargeUnits;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasNumberOfLegs;
- (bool)hasPaymentType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (unsigned int)numberOfLegs;
- (int)paymentType;
- (id)paymentTypeAsString:(int)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasNumberOfLegs:(bool)arg1;
- (void)setHasPaymentType:(bool)arg1;
- (void)setNumberOfLegs:(unsigned int)arg1;
- (void)setPaymentType:(int)arg1;
- (void)setSurchargeUnits:(id)arg1;
- (id)surchargeUnitAtIndex:(unsigned long long)arg1;
- (id)surchargeUnits;
- (unsigned long long)surchargeUnitsCount;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
