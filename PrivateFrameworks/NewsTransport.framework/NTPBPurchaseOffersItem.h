
@interface NTPBPurchaseOffersItem : PBCodable <NSCopying> {
    struct { 
        unsigned int purchaseType : 1; 
    }  _has;
    NSString * _purchaseId;
    int  _purchaseType;
}

@property (nonatomic, readonly) bool hasPurchaseId;
@property (nonatomic) bool hasPurchaseType;
@property (nonatomic, retain) NSString *purchaseId;
@property (nonatomic) int purchaseType;

- (void).cxx_destruct;
- (int)StringAsPurchaseType:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPurchaseId;
- (bool)hasPurchaseType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)purchaseId;
- (int)purchaseType;
- (id)purchaseTypeAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasPurchaseType:(bool)arg1;
- (void)setPurchaseId:(id)arg1;
- (void)setPurchaseType:(int)arg1;
- (void)writeTo:(id)arg1;

@end
