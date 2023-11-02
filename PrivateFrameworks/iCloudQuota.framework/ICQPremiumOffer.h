
@interface ICQPremiumOffer : ICQOffer {
    NSNumber * _bundleQuotaInfo;
    NSNumber * _commerceQuotaInfo;
    bool  _dismissed;
    bool  _isBadgeApp;
    ICQOpportunityBubbleSpecification * _opportunityBubble;
    bool  _shouldStartOnDeviceJourney;
}

@property (nonatomic, retain) NSNumber *bundleQuotaInfo;
@property (nonatomic, retain) NSNumber *commerceQuotaInfo;
@property (nonatomic) bool dismissed;
@property (nonatomic) bool isBadgeApp;
@property (nonatomic, retain) ICQOpportunityBubbleSpecification *opportunityBubble;
@property (nonatomic) bool shouldStartOnDeviceJourney;

- (void).cxx_destruct;
- (id)_ICQOpportunityBubbleSpecificationForServerDict:(id)arg1 bundleId:(id)arg2;
- (id)_bundleStorageLevelFromServerDict:(id)arg1;
- (id)_commerceStorageLevelFromServerDict:(id)arg1;
- (bool)_hasFollowupEnabledFromServerDict:(id)arg1;
- (id)_parseQuotaInfo:(id)arg1;
- (id)_serverUIURLFromOfferContents;
- (id)bundleQuotaInfo;
- (id)commerceQuotaInfo;
- (bool)dismissed;
- (bool)getBadgeAppFromServerDict:(id)arg1;
- (id)initWithServerDictionary:(id)arg1 accountAltDSID:(id)arg2 notificationID:(id)arg3 retrievalDate:(id)arg4 callbackInterval:(double)arg5 bundleIdentifier:(id)arg6;
- (bool)isBadgeApp;
- (id)opportunityBubble;
- (id)serverUIURL;
- (void)setBundleQuotaInfo:(id)arg1;
- (void)setCommerceQuotaInfo:(id)arg1;
- (void)setDismissed:(bool)arg1;
- (void)setIsBadgeApp:(bool)arg1;
- (void)setOpportunityBubble:(id)arg1;
- (void)setShouldStartOnDeviceJourney:(bool)arg1;
- (void)shouldShowOpportunityBubbleWithCompletion:(id /* block */)arg1;
- (void)shouldShowOpportunityBubbleWithDisplayRuleResult:(bool)arg1 completion:(id /* block */)arg2;
- (bool)shouldStartOnDeviceJourney;

@end
