
@interface WLKStoreOffer : NSObject {
    NSString * _buyParameters;
    NSDictionary * _dictionary;
    NSString * _formattedPrice;
    WLKStoreOfferPeriod * _freeTrialPeriod;
    WLKStoreOfferPeriod * _introOfferPeriod;
    unsigned long long  _offerType;
    NSNumber * _price;
    WLKStoreOfferPeriod * _renewalPeriod;
    unsigned long long  _subscriptionType;
    NSString * _title;
}

@property (nonatomic, readonly) NSString *buyParameters;
@property (nonatomic, readonly) NSDictionary *dictionary;
@property (nonatomic, readonly) NSString *formattedPrice;
@property (nonatomic, readonly) WLKStoreOfferPeriod *freeTrialPeriod;
@property (nonatomic, readonly) WLKStoreOfferPeriod *introOfferPeriod;
@property (nonatomic, readonly) unsigned long long offerType;
@property (nonatomic, readonly) NSNumber *price;
@property (nonatomic, readonly) WLKStoreOfferPeriod *renewalPeriod;
@property (nonatomic, readonly) unsigned long long subscriptionType;
@property (nonatomic, readonly) NSString *title;

// Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit

+ (id)offersWithMAPIDictionaries:(id)arg1;
+ (id)offersWithSubscriptionDictionaries:(id)arg1;

- (void).cxx_destruct;
- (id)buyParameters;
- (id)dictionary;
- (id)formattedPrice;
- (id)freeTrialPeriod;
- (id)initWithMAPIDictionary:(id)arg1;
- (id)initWithSubscriptionDictionary:(id)arg1;
- (id)introOfferPeriod;
- (unsigned long long)offerType;
- (id)price;
- (id)renewalPeriod;
- (bool)specialOfferEligible;
- (unsigned long long)subscriptionType;
- (id)sui_buttonSubtitleWithServiceName:(id)arg1;
- (id)sui_buttonTitle;
- (id)title;

// Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI

- (id)_localize:(id)arg1 token:(id)arg2 value:(id)arg3;
- (id)vui_subscriptionOfferButtonText;
- (id)vui_subscriptionOfferDisclaimerText;

@end
