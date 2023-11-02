
@interface ATXAppIntentMonitor : NSObject {
    _ATXAppLaunchSequenceManager * _appActionLaunchSequenceManager;
    _ATXAppInfoManager * _appInfoManager;
    NSObject<OS_dispatch_queue> * _appIntentHistoryQueue;
    _ATXAppLaunchHistogramManager * _appLaunchHistogramManager;
    ATXInternalAppRegistrationNotification * _appRegistrationListener;
    _PASSimpleCoalescingTimer * _coalescedIntentOrActivityDeletion;
    <_CDLocalContext> * _context;
    _ATXDataStore * _dataStore;
    PETDistributionEventTracker * _donatedActionInCacheTracker;
    PETScalarEventTracker * _donatedActionsTracker;
    NSObject<OS_dispatch_queue> * _donationQueue;
    _ATXDuetHelper * _duetHelper;
    <ATXPredictionContextBuilderProtocol> * _predictionContextBuilder;
    NSMutableSet * _registrations;
    ATXSafariIntentEventQualityFilter * _safariIntentQualityFilter;
    NSUserDefaults * _userDefaults;
    unsigned long long  deletionHandlerToken;
}

- (void).cxx_destruct;
- (id)_appActionLaunchSequenceManager;
- (void)_displayDonationOnLockscreenWithAction:(id)arg1;
- (void)_handleCompletedIntentForForUUID:(id)arg1 atxIntentSource:(long long)arg2;
- (bool)_isWhitelistedDaemonDonationBundleId:(id)arg1;
- (void)_listenToActivityStream;
- (void)_listenToIntentStream;
- (void)_logIntentPredictionsForIntentEvent:(id)arg1 context:(id)arg2;
- (void)_respondToIntentStreamChangingWithContext:(id)arg1;
- (void)_syncForTests;
- (void)_updateActionPredictionHistogramsForIntentEvent:(id)arg1 weight:(float)arg2 context:(id)arg3;
- (void)_updateActionPredictionHistogramsRemovingActionUUIDs:(id)arg1;
- (id)adjustedEndDateForOneSecondFlooringWithAppSessionEndDate:(id)arg1;
- (id)adjustedEndDateForTombstoneStreamQuery:(id)arg1;
- (id)adjustedStartDateForOneSecondFlooringWithAppSessionStartDate:(id)arg1;
- (id)adjustedStartDateForTombstoneStreamQuery:(id)arg1;
- (void)coalescedHandleIntentOrActivityDeletion;
- (void)dealloc;
- (id)deletionHighWaterMarkForDefaultsKey:(id)arg1 currentDate:(id)arg2;
- (id)fetchIntentEventsForAppSessionWithBundleId:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (id)fetchNSUAEventsForAppSessionWithBundleId:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (void)handleAppRegistrationForBundleIds:(id)arg1;
- (void)handleDonationImmediatelyForBundleId:(id)arg1 intentType:(id)arg2 contextValue:(id)arg3 isDonatedBySiri:(bool)arg4 isWhitelistedDaemonDonationBundleId:(bool)arg5;
- (void)handleIntentOrActivityDeletion;
- (id)init;
- (id)initWithAppLaunchHistogramManager:(id)arg1 appInfoManager:(id)arg2 appActionLaunchSequenceManager:(id)arg3 dataStore:(id)arg4;
- (id)initWithAppLaunchHistogramManager:(id)arg1 appInfoManager:(id)arg2 appActionLaunchSequenceManager:(id)arg3 duetHelper:(id)arg4 dataStore:(id)arg5 predictionContextBuilder:(id)arg6 userDefaults:(id)arg7 safariIntentFilter:(id)arg8;
- (void)processIntentDonationsDuringAppSessionForBundleId:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 globals:(id)arg4;
- (void)processNSUADonationsDuringAppSessionForBundleId:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 globals:(id)arg4;
- (void)removeDonationFromLockscreenForAction:(id)arg1;
- (bool)sessionStartedBeforeDonationForStartDate:(id)arg1 latestDonationDate:(id)arg2;
- (void)setDeletionHighWaterMark:(id)arg1 defaultsKey:(id)arg2;
- (bool)shouldAcceptMessageDonation:(id)arg1;
- (bool)shouldProcessIntentDonationsForSessionStartDate:(id)arg1;
- (bool)shouldProcessNSUADonationsForSessionStartDate:(id)arg1;
- (void)start;
- (void)stop;
- (void)updateActionPredictionPipelineForAppSession:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (void)updateActionPredictionPipelineForIntentEvent:(id)arg1 weight:(float)arg2 appSessionStartDate:(id)arg3 appSessionEndDate:(id)arg4;
- (void)updateActionPredictionPipelineForIntentEvent:(id)arg1 weight:(float)arg2 appSessionStartDate:(id)arg3 appSessionEndDate:(id)arg4 context:(id)arg5;
- (void)updateActionPredictionSlotResolutionForIntentEvent:(id)arg1 weight:(float)arg2 prevLocationUUID:(id)arg3 locationUUID:(id)arg4 currentMotionType:(long long)arg5 appSessionStartDate:(id)arg6 appSessionEndDate:(id)arg7 geohash:(long long)arg8 coarseGeohash:(long long)arg9;

@end
