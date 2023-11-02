
@interface SKProductInternal : NSObject {
    NSString * _contentVersion;
    NSArray * _discounts;
    NSArray * _downloadContentLengths;
    bool  _downloadable;
    bool  _familyShareable;
    SKProductDiscount * _introductoryPrice;
    NSString * _localizedDescription;
    NSString * _localizedTitle;
    NSDecimalNumber * _price;
    NSLocale * _priceLocale;
    NSString * _productIdentifier;
    NSString * _subscriptionGroupIdentifier;
    SKProductSubscriptionPeriod * _subscriptionPeriod;
}

- (void).cxx_destruct;

@end
