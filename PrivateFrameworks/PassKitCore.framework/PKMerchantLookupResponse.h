
@interface PKMerchantLookupResponse : NSObject {
    PKMapsBrand * _brand;
    long long  _fallbackCategory;
    PKMapsMerchant * _merchant;
    CLPlacemark * _placemark;
    long long  _result;
}

@property (nonatomic, retain) PKMapsBrand *brand;
@property (nonatomic) long long fallbackCategory;
@property (nonatomic, retain) PKMapsMerchant *merchant;
@property (nonatomic, retain) CLPlacemark *placemark;
@property (nonatomic) long long result;

- (void).cxx_destruct;
- (id)brand;
- (long long)fallbackCategory;
- (id)merchant;
- (id)placemark;
- (long long)result;
- (void)setBrand:(id)arg1;
- (void)setFallbackCategory:(long long)arg1;
- (void)setMerchant:(id)arg1;
- (void)setPlacemark:(id)arg1;
- (void)setResult:(long long)arg1;

@end
