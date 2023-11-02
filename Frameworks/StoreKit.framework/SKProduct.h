
@interface SKProduct : NSObject {
    id  _internal;
}

@property (nonatomic, readonly) NSArray *contentLengths;
@property (nonatomic, readonly) NSString *contentVersion;
@property (nonatomic, readonly) NSArray *discounts;
@property (nonatomic, readonly) NSArray *downloadContentLengths;
@property (nonatomic, readonly) NSString *downloadContentVersion;
@property (nonatomic, readonly) bool downloadable;
@property (nonatomic, readonly) SKProductDiscount *introductoryPrice;
@property (nonatomic, readonly) bool isDownloadable;
@property (nonatomic, readonly) bool isFamilyShareable;
@property (nonatomic, readonly) NSString *localizedDescription;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, readonly) NSDecimalNumber *price;
@property (nonatomic, readonly) NSLocale *priceLocale;
@property (nonatomic, readonly) NSString *productIdentifier;
@property (nonatomic, readonly) NSString *subscriptionGroupIdentifier;
@property (nonatomic, readonly) SKProductSubscriptionPeriod *subscriptionPeriod;

- (void).cxx_destruct;
- (void)_setContentVersion:(id)arg1;
- (void)_setDiscounts:(id)arg1;
- (void)_setDownloadContentLengths:(id)arg1;
- (void)_setDownloadable:(bool)arg1;
- (void)_setFamilyShareable:(bool)arg1;
- (void)_setIntroductoryPrice:(id)arg1;
- (void)_setLocalizedDescription:(id)arg1;
- (void)_setLocalizedTitle:(id)arg1;
- (void)_setPrice:(id)arg1;
- (void)_setPriceLocale:(id)arg1;
- (void)_setProductIdentifier:(id)arg1;
- (void)_setSubscriptionGroupIdentifier:(id)arg1;
- (void)_setSubscriptionPeriod:(id)arg1;
- (id)contentLengths;
- (id)contentVersion;
- (id)discounts;
- (id)downloadContentLengths;
- (id)downloadContentVersion;
- (bool)downloadable;
- (id)init;
- (id)introductoryPrice;
- (bool)isDownloadable;
- (bool)isFamilyShareable;
- (id)localizedDescription;
- (id)localizedTitle;
- (id)price;
- (id)priceLocale;
- (id)productIdentifier;
- (id)subscriptionGroupIdentifier;
- (id)subscriptionPeriod;

@end
