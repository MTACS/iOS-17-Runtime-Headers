
@protocol FIFitnessAppsStateObserverDelegate <NSObject>

@optional

- (void)fitnessAppsStateObserver:(FIFitnessAppsStateObserver *)arg1 applicationInstallStateDidChangeForBundleIdentifiers:(NSArray *)arg2;
- (void)fitnessAppsStateObserver:(FIFitnessAppsStateObserver *)arg1 restrictedStateDidChange:(long long)arg2;

@end
