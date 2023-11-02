
@interface PSFitnessPlusAnalyticsConsentCoordinator : NSObject {
    AMSAcknowledgePrivacyTask * _acknowledgePrivacyTask;
}

- (void).cxx_destruct;
- (bool)fetchAnalyticsConsent;
- (void)fetchSubscriptionStatusWithCompletion:(id /* block */)arg1;
- (id)init;
- (void)setAnalyticsConsent:(bool)arg1 completion:(id /* block */)arg2;

@end
