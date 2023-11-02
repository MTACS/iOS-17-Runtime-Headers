
@interface PHACachingCPAnalyticsPropertiesTask : NSObject <PHAPhotoLibraryTask>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool didProduceContent;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double incrementalWindow;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) double period;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long version;

+ (id)_ageRangeDescriptionFromBirthday:(id)arg1;
+ (id)_fetchDemographicsSummaryWithLoggingConnection:(id)arg1;
+ (id)_fetchLibrarySummaryForPhotoLibrary:(id)arg1 loggingConnection:(id)arg2;
+ (id)_genderDescriptionFromGivenName:(id)arg1;
+ (bool)_hasAppleMusicSubscriptionWithLoggingConnection:(id)arg1;
+ (id)_meContactWithLoggingConnection:(id)arg1;

- (id)_buildPropertyCacheForPhotoLibrary:(id)arg1 loggingConnection:(id)arg2;
- (bool)currentPlatformIsSupported;
- (id)incrementalKey;
- (id)name;
- (double)period;
- (int)priority;
- (bool)runWithGraphManager:(id)arg1 progressReporter:(id)arg2 error:(id*)arg3;
- (bool)runWithPhotoLibrary:(id)arg1 analytics:(id)arg2 progressReporter:(id)arg3 error:(id*)arg4;
- (bool)shouldRunWithGraphManager:(id)arg1;
- (bool)shouldRunWithPhotoLibrary:(id)arg1;
- (id)taskClassDependencies;
- (void)timeoutFatal:(bool)arg1;

@end
