
@interface DCXPCActivityController : NSObject

+ (id)sharedInstance;

- (id)_activityCriteriaWithFrequency:(double)arg1;
- (void)_performMetadataRefreshForActivity:(id)arg1;
- (void)_registerActivityWithInterval:(double)arg1;
- (void)start;
- (void)updateActivityScheduleWithAsset:(id)arg1;

@end
