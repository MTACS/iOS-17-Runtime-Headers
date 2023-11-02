
@interface JetEngine.MescalBagContract : NSObject <AMSMescalBagContract> {
    void backing;
}

@property (nonatomic, readonly) id mescalCertificateURL;
@property (nonatomic, readonly) id mescalPrimingURL;
@property (nonatomic, readonly) id mescalSetupURL;
@property (nonatomic, readonly) id mescalSignSapRequests;
@property (nonatomic, readonly) id mescalSignSapResponses;
@property (nonatomic, readonly) id mescalSignedActions;

- (void).cxx_destruct;
- (id)init;
- (id)mescalCertificateURL;
- (id)mescalPrimingURL;
- (id)mescalSetupURL;
- (id)mescalSignSapRequests;
- (id)mescalSignSapResponses;
- (id)mescalSignedActions;

@end
