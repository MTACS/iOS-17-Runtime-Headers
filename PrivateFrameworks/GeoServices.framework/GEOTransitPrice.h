
@interface GEOTransitPrice : PBCodable <NSCopying> {
    int  _amountInCents;
    NSString * _currencyCode;
    struct { 
        unsigned int has_amountInCents : 1; 
        unsigned int has_subunit : 1; 
    }  _flags;
    unsigned int  _subunit;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) int amountInCents;
@property (nonatomic, retain) NSString *currencyCode;
@property (nonatomic) bool hasAmountInCents;
@property (nonatomic, readonly) bool hasCurrencyCode;
@property (nonatomic) bool hasSubunit;
@property (nonatomic) unsigned int subunit;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)amountInCents;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currencyCode;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAmountInCents;
- (bool)hasCurrencyCode;
- (bool)hasSubunit;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAmountInCents:(int)arg1;
- (void)setCurrencyCode:(id)arg1;
- (void)setHasAmountInCents:(bool)arg1;
- (void)setHasSubunit:(bool)arg1;
- (void)setSubunit:(unsigned int)arg1;
- (unsigned int)subunit;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
