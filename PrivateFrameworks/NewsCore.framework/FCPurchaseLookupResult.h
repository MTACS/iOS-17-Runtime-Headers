
@interface FCPurchaseLookupResult : NSObject {
    NSNumber * _appAdamID;
    FCIntroductoryOffer * _introOffer;
    NSString * _offerName;
    NSNumber * _price;
    NSString * _purchaseID;
    NSString * _subscriptionPeriodInISO_8601;
    NSString * _subscriptionPriceFormatted;
}

- (void).cxx_destruct;

@end
