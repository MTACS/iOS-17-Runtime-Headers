
@interface AMSMarketingItemAction : NSObject {
    NSDictionary * _rawValues;
}

@property (nonatomic, readonly) AMSBuyParams *buyParams;
@property (nonatomic, readonly) NSString *callToActionLabel;
@property (nonatomic, readonly) NSString *disclaimerText;
@property (nonatomic, readonly) bool isDefault;
@property (nonatomic, readonly) bool isFamily;
@property (nonatomic, readonly) bool isRecommended;
@property (nonatomic, readonly) NSString *offerID;
@property (nonatomic, readonly) NSNumber *price;
@property (nonatomic, readonly) NSNumber *priceDiff;
@property (nonatomic, readonly) NSString *priceDiffForDisplay;
@property (nonatomic, readonly) NSString *priceForDisplay;
@property (nonatomic, retain) NSDictionary *rawValues;
@property (nonatomic, readonly) NSArray *serviceComponents;
@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) NSString *valuePropDetail;
@property (nonatomic, readonly) NSString *valuePropInfo;

- (void).cxx_destruct;
- (id)_serviceComponentsFromMap:(id)arg1 withNames:(id)arg2;
- (id)_serviceNames;
- (id)_servicesData;
- (id)buyParams;
- (id)callToActionLabel;
- (id)description;
- (id)disclaimerText;
- (id)dismissLabel;
- (id)freeTrialPeriod;
- (id)inAppID;
- (id)initWithDictionary:(id)arg1;
- (id)introOfferPeriod;
- (id)introOfferPrice;
- (id)introOfferPriceForDisplay;
- (bool)isDefault;
- (bool)isFamily;
- (bool)isRecommended;
- (bool)isYearly;
- (id)name;
- (id)offerID;
- (id)price;
- (id)priceDiff;
- (id)priceDiffForDisplay;
- (id)priceForDisplay;
- (id)priceFormatted;
- (id)priceString;
- (id)rawValues;
- (id)recurringSubscriptionPeriod;
- (id)serviceComponents;
- (void)setRawValues:(id)arg1;
- (id)type;
- (id)url;
- (id)valuePropDetail;
- (id)valuePropInfo;

@end
