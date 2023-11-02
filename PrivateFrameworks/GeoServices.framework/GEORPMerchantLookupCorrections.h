
@interface GEORPMerchantLookupCorrections : PBCodable <NSCopying> {
    struct { 
        unsigned int has_isCategoryIncorrect : 1; 
        unsigned int has_isMerchantIncorrect : 1; 
        unsigned int has_isOtherIssue : 1; 
    }  _flags;
    bool  _isCategoryIncorrect;
    bool  _isMerchantIncorrect;
    bool  _isOtherIssue;
}

@property (nonatomic) bool hasIsCategoryIncorrect;
@property (nonatomic) bool hasIsMerchantIncorrect;
@property (nonatomic) bool hasIsOtherIssue;
@property (nonatomic) bool isCategoryIncorrect;
@property (nonatomic) bool isMerchantIncorrect;
@property (nonatomic) bool isOtherIssue;

+ (bool)isValid:(id)arg1;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIsCategoryIncorrect;
- (bool)hasIsMerchantIncorrect;
- (bool)hasIsOtherIssue;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isCategoryIncorrect;
- (bool)isEqual:(id)arg1;
- (bool)isMerchantIncorrect;
- (bool)isOtherIssue;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasIsCategoryIncorrect:(bool)arg1;
- (void)setHasIsMerchantIncorrect:(bool)arg1;
- (void)setHasIsOtherIssue:(bool)arg1;
- (void)setIsCategoryIncorrect:(bool)arg1;
- (void)setIsMerchantIncorrect:(bool)arg1;
- (void)setIsOtherIssue:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
