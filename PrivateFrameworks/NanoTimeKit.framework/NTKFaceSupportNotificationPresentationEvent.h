
@interface NTKFaceSupportNotificationPresentationEvent : NSObject <NTKFaceSupportAnalyticsRepresentable> {
    long long  _artworkUsed;
    NSString * _bundleIdentifier;
    double  _delayFromBundleUnlock;
    double  _delayFromServerPush;
    long long  _optOutSources;
    long long  _schedulingErrorCode;
    long long  _status;
}

@property (nonatomic, readonly) long long artworkUsed;
@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) double delayFromBundleUnlock;
@property (nonatomic, readonly) double delayFromServerPush;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *ntkfs_analyticsEventName;
@property (nonatomic, readonly) NSDictionary *ntkfs_analyticsJSONRepresentation;
@property (nonatomic, readonly) long long optOutSources;
@property (nonatomic, readonly) long long schedulingErrorCode;
@property (nonatomic, readonly) long long status;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)artworkUsed;
- (id)bundleIdentifier;
- (double)delayFromBundleUnlock;
- (double)delayFromServerPush;
- (id)initWithBundleIdentifier:(id)arg1 status:(long long)arg2 artworkUsed:(long long)arg3 delayFromServerPush:(double)arg4 delayFromBundleUnlock:(double)arg5 schedulingErrorCode:(long long)arg6 optOutSources:(long long)arg7;
- (id)ntkfs_analyticsEventName;
- (id)ntkfs_analyticsJSONRepresentation;
- (long long)optOutSources;
- (long long)schedulingErrorCode;
- (long long)status;

@end
