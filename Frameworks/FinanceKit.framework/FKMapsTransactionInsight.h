
@interface FKMapsTransactionInsight : NSObject <NSCopying> {
    FKMapsBrand * _brand;
    unsigned long long  _fallbackCategory;
    FKMapsMerchant * _merchant;
    NSDate * _updatedAt;
}

@property (nonatomic, copy) FKMapsBrand *brand;
@property (nonatomic) unsigned long long fallbackCategory;
@property (nonatomic, copy) FKMapsMerchant *merchant;
@property (nonatomic, copy) NSDate *updatedAt;

- (void).cxx_destruct;
- (id)brand;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)fallbackCategory;
- (unsigned long long)hash;
- (id)initWithUpdatedAt:(id)arg1 fallbackCategory:(unsigned long long)arg2 merchant:(id)arg3 brand:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)merchant;
- (void)setBrand:(id)arg1;
- (void)setFallbackCategory:(unsigned long long)arg1;
- (void)setMerchant:(id)arg1;
- (void)setUpdatedAt:(id)arg1;
- (id)updatedAt;

@end
