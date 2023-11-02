
@interface ICQDaemonOfferStub : NSObject {
    ICQDaemonOfferConditions * _conditionsWhenChosen;
    NSDictionary * _serverDict;
}

@property (getter=isBuddyOffer, nonatomic, readonly) bool buddyOffer;
@property (nonatomic, copy) ICQDaemonOfferConditions *conditionsWhenChosen;
@property (nonatomic, readonly) ICQDaemonOfferCriteria *criteria;
@property (getter=isDefaultOffer, nonatomic, readonly) bool defaultOffer;
@property (nonatomic, readonly) NSString *offerId;
@property (nonatomic, readonly) NSDictionary *offerResetPayload;
@property (nonatomic, readonly) NSString *offerResetURL;
@property (getter=isPremiumOffer, nonatomic, readonly) bool premiumOffer;
@property (nonatomic, readonly) NSDictionary *serverDictionary;

- (void).cxx_destruct;
- (id)conditionsWhenChosen;
- (id)criteria;
- (id)initWithServerDictionary:(id)arg1;
- (bool)isBuddyOffer;
- (bool)isDefaultOffer;
- (bool)isPremiumOffer;
- (Class)offerClass;
- (id)offerId;
- (id)offerResetPayload;
- (id)offerResetURL;
- (id)persistedOffer;
- (long long)requestType;
- (id)serverDictionary;
- (void)setConditionsWhenChosen:(id)arg1;

@end
