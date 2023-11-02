
@interface HMDHomeModel : HMDBackingStoreModelObject

@property (nonatomic, copy) NSNumber *analysisOptions;
@property (nonatomic, copy) NSNumber *chipFabricID;
@property (nonatomic, copy) NSNumber *chipFabricIndex;
@property (nonatomic, copy) NSData *chipIntermediateCertificate;
@property (nonatomic, copy) NSDictionary *chipKeyValueStore;
@property (nonatomic, copy) NSNumber *chipLastNodeID;
@property (nonatomic, copy) NSData *chipOperationalCertificate;
@property (nonatomic, copy) NSData *chipRootCertificate;
@property (nonatomic, retain) NSDate *creationDate;
@property (nonatomic, retain) NSString *defaultRoomUUID;
@property (nonatomic, copy) NSNumber *didOnboardAnalysis;
@property (nonatomic, copy) NSNumber *didOnboardLocationServices;
@property (nonatomic, retain) NSData *encodedNaturalLightingContext;
@property (nonatomic, retain) NSDate *firstHAPAccessoryAddedDate;
@property (nonatomic, copy) NSNumber *hasAnyUserAcknowledgedCameraRecordingOnboarding;
@property (nonatomic, copy) NSNumber *hasOnboardedForAccessCode;
@property (nonatomic, copy) NSNumber *hasOnboardedForWalletKey;
@property (nonatomic, retain) NSData *homeLocationData;
@property (nonatomic, copy) NSNumber *locationServicesEnabled;
@property (nonatomic, copy) NSNumber *multiUserEnabled;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, copy) HMDNaturalLightingContext *naturalLightingContext;
@property (nonatomic, retain) NSNumber *networkProtectionMode;
@property (nonatomic, retain) NSString *ownerName;
@property (nonatomic, retain) NSData *ownerPublicKey;
@property (nonatomic, retain) NSString *ownerUUID;
@property (nonatomic, retain) NSString *ownerUserID;
@property (nonatomic, retain) NSNumber *presenceAuthorizationStatus;
@property (nonatomic, retain) NSNumber *presenceComputeStatus;
@property (nonatomic, retain) NSString *primaryResidentUUID;
@property (nonatomic, copy) HMDHomeKitVersion *sharedHomeSourceVersion;
@property (nonatomic, copy) NSNumber *siriPhraseOptions;
@property (nonatomic, copy) NSNumber *soundCheckEnabled;

+ (id)properties;

- (id)audioAnalysisClassifierOptions;
- (id)naturalLightingContext;
- (void)setAudioAnalysisClassifierOptions:(id)arg1;
- (void)setNaturalLightingContext:(id)arg1;

@end
