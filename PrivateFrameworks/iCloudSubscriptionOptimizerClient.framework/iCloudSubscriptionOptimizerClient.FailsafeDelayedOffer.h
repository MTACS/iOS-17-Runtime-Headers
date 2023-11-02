
@interface iCloudSubscriptionOptimizerClient.FailsafeDelayedOffer : ISODelayedOffer

@property (nonatomic, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *description;

- (id)debugDescription;
- (id)description;
- (id)init;
- (id)newOfferResponse;

@end
