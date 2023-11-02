
@interface PPLocalConnectionsStore : NSObject <PPFeedbackAccepting, PPFeedbackProcessing> {
    PPConnectionsDonationStore * _donationStore;
    NSCache * _identifierToSourceBundleMap;
    NSCache * _nameToIdentifierMap;
    PPConnectionsPredictionStore * _predictionStore;
}

+ (id)defaultStore;

- (void).cxx_destruct;
- (id)init;
- (id)initWithPredictionStore:(id)arg1 donationStore:(id)arg2;
- (void)processFeedback:(id)arg1;
- (id)recentLocationDonationsSinceDate:(id)arg1 error:(id*)arg2;
- (id)recentLocationsForConsumer:(unsigned long long)arg1 criteria:(id)arg2 limit:(unsigned long long)arg3 explanationSet:(id)arg4 timeout:(unsigned long long)arg5 error:(id*)arg6;
- (void)registerFeedback:(id)arg1 completion:(id /* block */)arg2;

@end
