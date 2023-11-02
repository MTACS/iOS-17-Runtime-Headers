
@interface ATXMagicalMomentsAppPredictor : NSObject {
    ATXCoreDuetContextHelper * _contextHelper;
    ATXTimeBucketedRateLimiter * _rateLimiter;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)addNowPlayingEventsToAppLaunches:(id)arg1;
- (id)fetchAppLaunchEventsForTraining;
- (id)generateAppLaunchCountedSetFromAppLaunches:(id)arg1;
- (id)init;
- (void)trainWithXPCActivity:(id)arg1;

@end
