
@interface PPConnectionsParameters : NSObject {
    NSDictionary * _assets;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (long long)appSwitcherPredictionExpiry;
- (double)calendarEventLocationExpirySeconds;
- (double)calendarEventLocationLookaheadTimeSeconds;
- (id)donationAllowedApps;
- (id)donationAllowedWebsites;
- (id)donationBlockedApps;
- (id)donationBlockedWebsites;
- (long long)expirySeconds;
- (double)foundInAppsSourceExpirySeconds;
- (double)foundInAppsSourceLookBackSeconds;
- (id)init;
- (double)linguisticTriggerExpirySeconds;
- (double)locationAppLastUseTimeoutSeconds;
- (long long)locationAppPredictionInstallHalflife;
- (long long)locationAppPredictionInstallMaxScore;
- (long long)locationAppPredictionLaunchTimeOfDayFactor;
- (long long)locationAppPredictionOverallLaunchFactor;
- (id)locationPredictionBlockedApps;
- (double)namedEntitySourceExpirySeconds;
- (double)namedEntitySourceLookBackSeconds;
- (double)pasteboardItemExpirySeconds;
- (unsigned long long)quickTypePredictionLimit;
- (bool)shouldUseAllowedApps;
- (bool)shouldUseAllowedWebsite;
- (unsigned long long)userActivityBatchSize;
- (double)userActivityCandidateScore;
- (double)userActivityExpirySeconds;

@end
