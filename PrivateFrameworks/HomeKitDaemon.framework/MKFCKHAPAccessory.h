
@interface MKFCKHAPAccessory : MKFCKAccessory

@property (nonatomic, retain) MKFCKHome *activeNetworkRouterInHome;
@property (nonatomic) bool airPlayEnabled;
@property (nonatomic) bool announceEnabled;
@property (nonatomic) long long cameraAccessModeAtHome;
@property (nonatomic) long long cameraAccessModeNotAtHome;
@property (nonatomic, retain) NSSet *cameraActivityZones;
@property (nonatomic) bool cameraActivityZonesIncludedForSignificantEventDetection;
@property (nonatomic) long long cameraRecordingEventTriggers;
@property (nonatomic, copy) NSNumber *category;
@property (nonatomic, copy) NSNumber *certificationStatus;
@property (nonatomic) bool doorbellChimeEnabled;
@property (nonatomic) bool hasDismissedHomePodHasNonMemberMediaAccountWarning;
@property (nonatomic) bool hasOnboardedForNaturalLighting;
@property (nonatomic, retain) NSArray *initialServiceTypes;
@property (nonatomic) bool interactionHoldDurationEnabled;
@property (nonatomic) long long interactionHoldDurationSeconds;
@property (nonatomic) bool interactionIgnoreRepeatEnabled;
@property (nonatomic) long long interactionIgnoreRepeatSeconds;
@property (nonatomic) bool interactionTouchAccommodationsEnabled;
@property (nonatomic) bool lightWhenUsingSiriEnabled;
@property (nonatomic) long long matterNodeID;
@property (nonatomic) long long matterProductID;
@property (nonatomic) long long matterVendorID;
@property (nonatomic) long long needsOnboarding;
@property (nonatomic, retain) NSData *publicKey;
@property (nonatomic, retain) NSDictionary *serviceApplicationData;
@property (nonatomic, retain) NSDictionary *serviceAssociatedServiceTypes;
@property (nonatomic, retain) NSDictionary *serviceConfiguredNames;
@property (nonatomic, retain) NSDictionary *serviceProperties;
@property (nonatomic) bool shareSiriAnalytics;
@property (nonatomic) bool shareSpeakerAnalytics;
@property (nonatomic) bool siriEnabled;
@property (nonatomic) bool siriEndpointEnabled;
@property (nonatomic, copy) NSString *siriLanguageCode;
@property (nonatomic, copy) NSString *siriLanguageVoiceCode;
@property (nonatomic, copy) NSString *siriLanguageVoiceGenderCode;
@property (nonatomic, copy) NSString *siriLanguageVoiceName;
@property (nonatomic) bool soundAlertEnabled;
@property (nonatomic, copy) NSString *uniqueIdentifier;
@property (nonatomic) long long visionDoubleTapSettingsTimeoutInterval;
@property (nonatomic) long long visionSpeakingRate;
@property (nonatomic) bool visionVoiceOverAudioDuckingEnabled;
@property (nonatomic) bool visionVoiceOverEnabled;

+ (id)fetchRequest;
+ (id)fetchWithLocalModel:(id)arg1 context:(id)arg2;

- (bool)exportFromLocalModel:(id)arg1 updatedProperties:(id)arg2 context:(id)arg3;
- (id)fetchLocalModelWithContext:(id)arg1;
- (bool)importIntoLocalModel:(id)arg1 updatedProperties:(id)arg2 context:(id)arg3;

@end
