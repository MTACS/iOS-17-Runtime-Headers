
@interface ATXCDNDownloaderTriggerManager : NSObject {
    <ATXProactiveCDNDownloaderProtocol> * _cdnDownloader;
    ATXHeroAppManager * _heroAppManager;
    ATXHeroClipManager * _heroClipManager;
    ATXLocationManager * _locationManager;
    <ATXPredictionContextBuilderProtocol> * _predictionContextBuilder;
    NSObject<OS_dispatch_queue> * _queue;
    ATXTimeBucketedRateLimiter * _rateLimiter;
    id  _restrictionChangedNotificationToken;
    ATXHeroDataServer * _server;
    int  _siriSettingsChangedNotificationToken;
}

@property (nonatomic, readonly) <ATXProactiveCDNDownloaderProtocol> *cdnDownloader;
@property (nonatomic, readonly) ATXHeroAppManager *heroAppManager;
@property (nonatomic, readonly) ATXHeroClipManager *heroClipManager;
@property (nonatomic, readonly) <ATXPredictionContextBuilderProtocol> *predictionContextBuilder;
@property (nonatomic, readonly) ATXTimeBucketedRateLimiter *rateLimiter;
@property (nonatomic, readonly) ATXHeroDataServer *server;

+ (bool)_locationIsStaleOrNotAccurateEnough:(id)arg1 now:(id)arg2;

- (void).cxx_destruct;
- (void)_forwardHeroAppPredictionsToHeroAppPredictionsServer:(id)arg1;
- (void)_registerForRestrictionChangedNotifications;
- (void)_registerForSiriSettingsChangedNotifications;
- (id)cdnDownloader;
- (void)forwardLocationToCDNDownloaderAndHandleReply;
- (void)handleProfileChangedNotification;
- (void)handleSiriSettingsChangedNotification;
- (id)heroAppManager;
- (id)heroClipManager;
- (id)init;
- (id)initWithCDNDownloader:(id)arg1 heroAppServer:(id)arg2 heroClipManager:(id)arg3 heroAppManager:(id)arg4 predictionContextBuilder:(id)arg5 nudgeRegistrar:(Class)arg6 locationManager:(id)arg7;
- (id)initWithCDNDownloader:(id)arg1 predictionContextBuilder:(id)arg2 nudgeRegistrar:(Class)arg3;
- (id)predictionContextBuilder;
- (void)queryAndHandlePredictionsFromCDNDownloader;
- (id)rateLimiter;
- (id)requestHighQualityLocationWithHundredMeterAccuracy;
- (id)server;

@end
