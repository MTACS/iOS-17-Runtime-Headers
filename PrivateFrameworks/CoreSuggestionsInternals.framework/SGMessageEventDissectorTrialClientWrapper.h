
@interface SGMessageEventDissectorTrialClientWrapper : SGTrialClientWrapper {
    _PASLock * _lock;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)eventClassifierModelPath;
- (id)eventClassifierThreshold;
- (id)eventExtractionAssetsPath;
- (id)init;
- (id)messageProcessingLimit;
- (id)rateLimitInterval;
- (void)updateFactors;

@end
