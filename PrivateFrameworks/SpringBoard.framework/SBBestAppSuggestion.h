
@interface SBBestAppSuggestion : NSObject <SBIconContinuityInfo>

@property (nonatomic, readonly, copy) NSString *activityType;
@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSDate *lastUpdateTime;
@property (nonatomic, readonly, copy) NSURL *launchURL;
@property (nonatomic, readonly, copy) NSString *originatingBundleIdentifier;
@property (nonatomic, readonly, copy) NSString *originatingDeviceIdentifier;
@property (nonatomic, readonly, copy) NSString *originatingDeviceName;
@property (nonatomic, readonly, copy) NSString *originatingDeviceType;
@property (nonatomic, readonly, copy) NSString *suggestedLocationName;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;

- (id)activityType;
- (id)bundleIdentifier;
- (id)description;
- (bool)isArrivedAtHomePrediction;
- (bool)isArrivedAtWorkPrediction;
- (bool)isBluetoothAudioPrediction;
- (bool)isBluetoothPrediction;
- (bool)isCallContinuitySuggestion;
- (bool)isCarPlayPrediction;
- (bool)isEligibleForLockScreen;
- (bool)isFirstWakePrediction;
- (bool)isHandoff;
- (bool)isHeadphonesPrediction;
- (bool)isLocallyGeneratedSuggestion;
- (bool)isLocationBasedSuggestion;
- (bool)isLocationPredictionFromSource:(unsigned long long)arg1;
- (bool)isLocationPredictionOfType:(unsigned long long)arg1;
- (bool)isNotificationSuggestion;
- (bool)isOpenURLSuggestion;
- (bool)isPrediction;
- (bool)isSiriSuggestion;
- (id)lastUpdateTime;
- (id)launchURL;
- (bool)launchURLRequiresInboxCopy;
- (id)makeInboxCopyOfLaunchURLToInboxURL:(id)arg1;
- (id)originatingBundleIdentifier;
- (id)originatingDeviceIdentifier;
- (id)originatingDeviceName;
- (id)originatingDeviceType;
- (id)suggestedLocationName;
- (id)uniqueIdentifier;

@end
