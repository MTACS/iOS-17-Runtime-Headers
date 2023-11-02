
@interface ATXNowPlayingDuetDataProvider : ATXDuetDataProvider

+ (long long)supportedCoreDuetStream;
+ (Class)supportedDuetEventClass;

- (id)convertNowPlayingEventsToAppLaunchEvents:(id)arg1;
- (id)mostRecentPlayingNowPlayingEventWithMaxAgeInSeconds:(double)arg1;
- (id)playbackEventsAfterSecondsOfInactivity:(double)arg1 betweenStartDate:(id)arg2 endDate:(id)arg3;

@end
