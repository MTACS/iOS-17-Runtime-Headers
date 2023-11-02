
@interface CPAnalytics : NSObject {
    NSObject<OS_dispatch_queue> * _eventsQueue;
    PHPhotoLibrary * _photoLibrary;
    CPAnalyticsDestinationsRegistry * _registry;
    long long  _signpostUniqueValue;
    CPAnalyticsSystemProperties * _systemProperties;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *eventsQueue;
@property (nonatomic, retain) PHPhotoLibrary *photoLibrary;
@property (nonatomic, readonly) CPAnalyticsDestinationsRegistry *registry;
@property (nonatomic, readonly) CPAnalyticsSystemProperties *systemProperties;

+ (void)activateEventQueue;
+ (void)addDestination:(id)arg1;
+ (id)bucketNameForDouble:(double)arg1 bucketLimits:(id)arg2 numberFormatter:(id)arg3;
+ (id)bucketNameForInteger:(long long)arg1 bucketLimits:(long long)arg2;
+ (id)creationDateForSignpost:(long long)arg1;
+ (void)endSignpost:(long long)arg1 forEventName:(id)arg2 withPayload:(id)arg3;
+ (bool)isAllowed;
+ (void)releasePhotoLibrary;
+ (void)removeDestination:(id)arg1;
+ (void)sendEvent:(id)arg1 withPayload:(id)arg2;
+ (void)setupSystemPropertyProvidersForLibrary:(id)arg1;
+ (void)setupWithConfigurationAtURL:(id)arg1;
+ (void)setupWithConfigurationFilename:(id)arg1 inBundle:(id)arg2;
+ (id)sharedInstance;
+ (void)startAppTracking;
+ (long long)startSignpost;
+ (void)startViewTracking;
+ (id)systemPropertyForKey:(id)arg1;
+ (void)updateWithConfigurationFilename:(id)arg1 inBundle:(id)arg2;

- (void).cxx_destruct;
- (void)_setupSystemPropertyProviders;
- (void)activateEventQueue;
- (void)addDestination:(id)arg1;
- (void)endSignpost:(long long)arg1 forEventName:(id)arg2 withPayload:(id)arg3;
- (id)eventsQueue;
- (long long)generateNextSignpostID;
- (id)init;
- (id)photoLibrary;
- (id)registry;
- (void)releasePhotoLibrary;
- (void)removeDestination:(id)arg1;
- (void)sendEvent:(id)arg1 withPayload:(id)arg2;
- (void)setPhotoLibrary:(id)arg1;
- (void)setupSystemPropertyProvidersForLibrary:(id)arg1;
- (void)setupWithConfigurationAtURL:(id)arg1;
- (void)setupWithConfigurationFilename:(id)arg1 inBundle:(id)arg2;
- (long long)startSignpost;
- (id)systemProperties;
- (void)updateWithConfigurationFilename:(id)arg1 inBundle:(id)arg2;

@end
