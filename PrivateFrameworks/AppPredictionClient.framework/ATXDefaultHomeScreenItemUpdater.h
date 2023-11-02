
@interface ATXDefaultHomeScreenItemUpdater : NSObject {
    NSDictionary * _descriptorInstallDates;
    NSSet * _descriptors;
    NSObject<OS_dispatch_queue> * _internalQueue;
    <ATXCategoricalHistogramProtocol> * _spotlightAppLaunchHistogram;
    NSUserDefaults * _userDefaults;
}

+ (id)assets;

- (void).cxx_destruct;
- (bool)_isDayZeroExperience;
- (id)_retrieveLastUpdateDate;
- (void)_updateAllDefaultsOnQueueWithReason:(id)arg1;
- (void)_updateAmbientDefaultsOnQueueWithReason:(id)arg1 appLaunchCounts:(id)arg2;
- (void)_updateHomeScreenDefaultsOnQueueWithReason:(id)arg1 appLaunchCounts:(id)arg2;
- (void)dealloc;
- (id)initWithSpotlightAppLaunchHistogram:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)updateDefaultsDueToAmbientConfigUpdate;
- (void)updateDefaultsDueToRelevantHomeScreenConfigUpdate;
- (void)updateDefaultsIfNeededWithSystemDescriptors:(id)arg1 installDatesCache:(id)arg2 reason:(id)arg3;
- (void)updateDefaultsWithSystemDescriptors:(id)arg1 installDatesCache:(id)arg2 reason:(id)arg3;
- (void)waitForPendingAsynchronousOperations;

@end
