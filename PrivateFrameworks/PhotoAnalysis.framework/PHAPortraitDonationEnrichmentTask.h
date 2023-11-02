
@interface PHAPortraitDonationEnrichmentTask : PHAEnrichmentTask

- (bool)currentPlatformIsSupported;
- (id)enrichmentProcessor;
- (id)incrementalKey;
- (double)period;
- (int)priority;
- (void)timeoutFatal:(bool)arg1;

@end
