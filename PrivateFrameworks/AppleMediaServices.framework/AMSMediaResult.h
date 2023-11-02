
@interface AMSMediaResult : AMSURLResult {
    NSDictionary * _responseDictionary;
}

@property (nonatomic, readonly) NSArray *responseDataItems;
@property (nonatomic, readonly) NSDictionary *responseDictionary;

// Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices

- (void).cxx_destruct;
- (id)initWithResult:(id)arg1;
- (id)responseDataItems;
- (id)responseDictionary;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

- (id)fc_appAdamID;
- (id)fc_bundleID;
- (id)fc_externalVersionID;
- (id)fc_introductoryOffers;
- (id)fc_offerName;
- (id)fc_subscriptionPeriodInISO_8601;
- (bool)isPeriodValid:(id)arg1;

@end
