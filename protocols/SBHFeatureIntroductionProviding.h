
@protocol SBHFeatureIntroductionProviding <NSObject>

@required

- (void)displayFeatureIntroductionAtLocations:(void *)arg1 presentCompletion:(void *)arg2 dismissCompletion:(void *)arg3; // needs 3 arg types, found 11: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, id /* block */, void*, void, id /* block */, void*
- (NSString *)featureIntroductionIdentifier;
- (void)setupFeatureIntroductionAtLocations:(unsigned long long)arg1;
- (bool)shouldDisplayFeatureIntroductionAtLocations:(unsigned long long)arg1;
- (bool)shouldSetupFeatureIntroductionAtLocations:(unsigned long long)arg1;

@optional

- (bool)shouldDeferAlertsAtLocations:(unsigned long long)arg1;
- (bool)shouldPauseUserInteractionAtLocations:(unsigned long long)arg1;

@end
