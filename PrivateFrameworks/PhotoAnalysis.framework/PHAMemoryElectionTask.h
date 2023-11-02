
@interface PHAMemoryElectionTask : NSObject <PHATask> {
    bool  _createTransientMemories;
    bool  _didProduceContent;
    bool  _forceNotification;
    CLLocation * _location;
    unsigned long long  _requestedCategory;
    PGFeature * _requestedFeature;
    unsigned long long  _requestedTriggerType;
    NSString * _requestedUniqueMemoryIdentifier;
    NSDate * _universalDate;
    bool  _userInitiated;
}

@property (nonatomic) bool createTransientMemories;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool didProduceContent;
@property (nonatomic) bool forceNotification;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double incrementalWindow;
@property (nonatomic, retain) CLLocation *location;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) double period;
@property (nonatomic) unsigned long long requestedCategory;
@property (nonatomic, retain) PGFeature *requestedFeature;
@property (nonatomic) unsigned long long requestedTriggerType;
@property (nonatomic, retain) NSString *requestedUniqueMemoryIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSDate *universalDate;
@property (nonatomic) bool userInitiated;
@property (nonatomic, readonly) unsigned long long version;

+ (id)_filterMemoriesWithAcceptableUserFeedback:(id)arg1 allMemoriesFetchResult:(id)arg2 photoLibrary:(id)arg3;
+ (id)_filterSuggestionsToFeatureBasedOnUserFeedbackForSuggestionsToFeature:(id)arg1 sugestionsFetchResult:(id)arg2 photoLibrary:(id)arg3;
+ (id)_userFeedbackCalculatorWithPhotoLibrary:(id)arg1;
+ (void)findAndSetFeaturedStateForMemoriesAndSuggestionsIfNeededInPhotoLibrary:(id)arg1 loggingConnection:(id)arg2;
+ (void)findMemoriesAndSetFeaturedStateIfNeededInPhotoLibrary:(id)arg1 loggingConnection:(id)arg2;
+ (void)findMemoriesAndSetNeverFeatureStateIfNeededInPhotoLibrary:(id)arg1 loggingConnection:(id)arg2;
+ (void)findSuggestionsAndSetFeaturedStateIfNeededInPhotoLibrary:(id)arg1 loggingConnection:(id)arg2;
+ (bool)reloadAlbumWidgetTimelineWithLoggingConnection:(id)arg1 error:(id*)arg2;
+ (bool)reloadForYouWidgetTimelineWithLoggingConnection:(id)arg1 error:(id*)arg2;
+ (void)sendElectedMemoriesPipelineAnalyticsEventWithCountsOfMemories:(id)arg1 loggingConnection:(id)arg2 analytics:(id)arg3;
+ (void)sendGeneratedMemoriesPipelineAnalyticsEventWithCountsOfMemories:(id)arg1 loggingConnection:(id)arg2 analytics:(id)arg3;
+ (void)sendMemoryTriggersAnalyticsEventWithElectedMemoryType:(id)arg1 triggerType:(id)arg2 loggingConnection:(id)arg3 analytics:(id)arg4;
+ (void)sendNotifiedMemoriesPipelineAnalyticsEventWithMemoryType:(id)arg1 loggingConnection:(id)arg2 analytics:(id)arg3;
+ (void)sendTriggeredMemoriesPipelineAnalyticsEventWithCountsOfMemories:(id)arg1 loggingConnection:(id)arg2 analytics:(id)arg3;

- (void).cxx_destruct;
- (id)_electorConfigurationForExistingMemories:(id)arg1 graphManager:(id)arg2 loggingConnection:(id)arg3;
- (id)_recentlySuggestedMoodsFromExistingMemoriesSortedByCreationDate:(id)arg1;
- (void)collectMetricsOnElectedEnrichedMemories:(id)arg1 loggingConnection:(id)arg2 analytics:(id)arg3;
- (void)collectMetricsOnExistingMemories:(id)arg1 loggingConnection:(id)arg2 analytics:(id)arg3;
- (void)collectMetricsOnMemoriesInGraphWithWorkingContext:(id)arg1 loggingConnection:(id)arg2 analytics:(id)arg3;
- (bool)createTransientMemories;
- (bool)currentPlatformIsSupported;
- (bool)didProduceContent;
- (bool)forceNotification;
- (void)handleNotificationsForMemories:(id)arg1 graphManager:(id)arg2 userFeedbackCalculator:(id)arg3 loggingConnection:(id)arg4;
- (id)incrementalKey;
- (id)init;
- (id)location;
- (id)name;
- (double)period;
- (int)priority;
- (unsigned long long)requestedCategory;
- (id)requestedFeature;
- (unsigned long long)requestedTriggerType;
- (id)requestedUniqueMemoryIdentifier;
- (bool)runWithGraphManager:(id)arg1 progressReporter:(id)arg2 error:(id*)arg3;
- (void)runWithGraphManager:(id)arg1 progressReporter:(id)arg2 reply:(id /* block */)arg3;
- (void)setCreateTransientMemories:(bool)arg1;
- (void)setForceNotification:(bool)arg1;
- (void)setLocation:(id)arg1;
- (void)setRequestedCategory:(unsigned long long)arg1;
- (void)setRequestedFeature:(id)arg1;
- (void)setRequestedTriggerType:(unsigned long long)arg1;
- (void)setRequestedUniqueMemoryIdentifier:(id)arg1;
- (void)setUniversalDate:(id)arg1;
- (void)setUserInitiated:(bool)arg1;
- (bool)shouldRunWithGraphManager:(id)arg1;
- (id)taskClassDependencies;
- (void)timeoutFatal:(bool)arg1;
- (id)universalDate;
- (bool)userInitiated;

@end
