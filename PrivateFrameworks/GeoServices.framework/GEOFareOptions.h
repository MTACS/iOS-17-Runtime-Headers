
@interface GEOFareOptions : PBCodable <NSCopying> {
    struct { 
        unsigned int has_paymentType : 1; 
        unsigned int has_preferredSurchargeType : 1; 
    }  _flags;
    int  _paymentType;
    int  _preferredSurchargeType;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasPaymentType;
@property (nonatomic) bool hasPreferredSurchargeType;
@property (nonatomic) int paymentType;
@property (nonatomic) int preferredSurchargeType;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsPaymentType:(id)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPaymentType;
- (bool)hasPreferredSurchargeType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (int)paymentType;
- (id)paymentTypeAsString:(int)arg1;
- (int)preferredSurchargeType;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasPaymentType:(bool)arg1;
- (void)setHasPreferredSurchargeType:(bool)arg1;
- (void)setPaymentType:(int)arg1;
- (void)setPreferredSurchargeType:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
