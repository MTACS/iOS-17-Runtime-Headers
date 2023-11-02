
@interface ATXHeroAndClipConstants : NSObject {
    NSDictionary * _parameters;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (unsigned long long)appClipSessionLogNegativeSamplesPerDay;
- (unsigned long long)appClipSessionLogPositiveSamplesPerDay;
- (unsigned long long)appClipShadowLogSamplesPerDay;
- (long long)appClipsDecodeErrorCode;
- (id)appClipsErrorDomain;
- (double)appClipsFeedbackHistogramHalfLifeInDays;
- (double)appClipsHighConfidenceScoreThreshold;
- (long long)appClipsLaunchErrorCode;
- (double)appClipsMediumConfidenceScoreThreshold;
- (id)appClipsModelVersion;
- (id)appClipsNotificationCategoryIdentifier;
- (id)appClipsNotificationId;
- (id)appClipsNotificationLockscreenIdentifier;
- (double)appClipsOverallEngagementThreshold;
- (double)appClipsOverallMinRejects;
- (double)appClipsPerAppClipEngagementThreshold;
- (double)appClipsPerAppClipEngagementThresholdNoDecay;
- (double)appClipsPerAppClipMinRejects;
- (double)appClipsPerAppClipMinRejectsNoDecay;
- (unsigned long long)appShadowLogSamplesPerDay;
- (id)defaultHeroPOICategory;
- (double)heroAppEngagementThreshold;
- (int)heroAppIndexNotSet;
- (double)heroAppMinRefreshInterval;
- (double)heroAppMinimumRejects;
- (double)heroAppPredictionExpirationInterval;
- (id)heroAppPredictionsKey;
- (unsigned long long)heroAppSessionLogNegativeSamplesPerDay;
- (unsigned long long)heroAppSessionLogPositiveSamplesPerDay;
- (double)heroAppTileMaxErrorDistance;
- (double)heroAppWorstCaseLocationAccuracy;
- (id)init;

@end
