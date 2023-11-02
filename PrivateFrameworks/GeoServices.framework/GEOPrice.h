
@interface GEOPrice : PBCodable <GEOServerFormatTokenPriceValue, NSCopying> {
    float  _amount;
    NSString * _currencyCode;
    struct { 
        unsigned int has_amount : 1; 
    }  _flags;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) float amount;
@property (nonatomic, readonly) NSString *currencyCode;
@property (nonatomic, retain) NSString *currencyCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasAmount;
@property (nonatomic, readonly) bool hasCurrencyCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, readonly) double value;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (float)amount;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currencyCode;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAmount;
- (bool)hasCurrencyCode;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAmount:(float)arg1;
- (void)setCurrencyCode:(id)arg1;
- (void)setHasAmount:(bool)arg1;
- (id)unknownFields;
- (double)value;
- (void)writeTo:(id)arg1;

@end
