
@interface iCloudSubscriptionOptimizerClient.FailsafeNewOfferResponse : ISONewOfferResponse

@property (nonatomic, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (id)error;
- (id)init;
- (bool)shouldDisplayOfferNow;
- (id)toContext;

@end
