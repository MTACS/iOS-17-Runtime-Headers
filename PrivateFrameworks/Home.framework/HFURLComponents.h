
@interface HFURLComponents : NSObject {
    NSURL * _URL;
    HFHomeKitDispatcher * _homeKitDispatcher;
    NSISO8601DateFormatter * _isoDateFormatter;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) unsigned long long destination;
@property (nonatomic, readonly) HFHomeKitDispatcher *homeKitDispatcher;
@property (nonatomic, readonly) NAFuture *homeKitObjectFuture;
@property (nonatomic, retain) NSISO8601DateFormatter *isoDateFormatter;
@property (nonatomic, readonly) unsigned long long secondaryDestination;

+ (id)_URLComponentsForDestination:(unsigned long long)arg1;
+ (id)_privateSettingsURLHostString:(id)arg1 UUID:(id)arg2 forHome:(id)arg3;
+ (id)_settingsURLHostString:(id)arg1 UUID:(id)arg2 forHome:(id)arg3;
+ (id)_settingsURLHostString:(id)arg1 forHome:(id)arg2;
+ (id)_settingsURLHostString:(id)arg1 scheme:(id)arg2 UUID:(id)arg3 forHome:(id)arg4;
+ (id)aboutImproveSiriAndDictationURL;
+ (id)aboutResidentDeviceURL;
+ (id)accessoryDetailsURLForAccessory:(id)arg1 home:(id)arg2;
+ (id)bridgeSettingsURLForAccessory:(id)arg1 home:(id)arg2;
+ (id)cameraProfileDetailsURLForCameraProfile:(id)arg1 home:(id)arg2;
+ (id)connectedServicesURLForAccessory:(id)arg1 home:(id)arg2;
+ (id)dropInURLComponents;
+ (id)faceRecognitionSettingsURLForHome:(id)arg1;
+ (id)fixSymptomURLForAccessory:(id)arg1 symptom:(id)arg2;
+ (id)fixSymptomURLForAccessoryWithUUID:(id)arg1 symptom:(id)arg2;
+ (id)homeKitObjectURLForDestination:(unsigned long long)arg1 secondaryDestination:(unsigned long long)arg2 UUID:(id)arg3;
+ (id)homeKitObjectURLForDestination:(unsigned long long)arg1 secondaryDestination:(unsigned long long)arg2 UUID:(id)arg3 queryItems:(id)arg4;
+ (bool)isHomeAppURL:(id)arg1;
+ (id)locationPrivacyURL;
+ (id)locksOnboardingURLForHome:(id)arg1;
+ (id)musicLoginURL;
+ (id)musicPrivacyURL;
+ (id)networkRouterSettingsURLForHome:(id)arg1;
+ (id)personalRequestsOptInURL;
+ (id)personalRequestsOptInURLForHomeID:(id)arg1;
+ (id)recognizeMyVoiceOptInURL;
+ (id)roomURLForRoom:(id)arg1;
+ (id)serviceDetailsURLForService:(id)arg1 home:(id)arg2;
+ (id)siriPrivacyURL;
+ (id)symptomFromURL:(id)arg1 accessory:(id)arg2;
+ (id)userLockSettingsURLForHome:(id)arg1;

- (void).cxx_destruct;
- (id)URL;
- (id)_homeKitIdentifier;
- (id)dateForParameter:(id)arg1;
- (id)description;
- (unsigned long long)destination;
- (id)homeKitDispatcher;
- (id)homeKitObjectFuture;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 homeKitDispatcher:(id)arg2;
- (id)isoDateFormatter;
- (unsigned long long)secondaryDestination;
- (void)setIsoDateFormatter:(id)arg1;
- (id)valueForParameter:(id)arg1;

@end
