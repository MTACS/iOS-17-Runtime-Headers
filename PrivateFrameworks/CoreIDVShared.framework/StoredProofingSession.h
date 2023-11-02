
@interface StoredProofingSession : NSManagedObject

@property (nonatomic) bool canUploadOnExpensiveNetwork;
@property (nonatomic) long long cloudKitUploadsMaxRetryCount;
@property (nonatomic) long long connectToWifiReminderInDays;
@property (nonatomic, copy) NSString *country;
@property (nonatomic, copy) NSDate *createdAt;
@property (nonatomic, copy) NSString *credentialIdentifier;
@property (nonatomic) bool didNotifyOnUploadsCompletion;
@property (nonatomic) bool didShowWifiReminderAlert;
@property (nonatomic) bool hasUserConsentToShareBiomeData;
@property (nonatomic, copy) NSString *idType;
@property (nonatomic) bool isAutoProvisioningRetryComplete;
@property (nonatomic, copy) NSString *lastExecutedActionIdentifier;
@property (nonatomic, copy) NSString *learnMoreURLString;
@property (nonatomic) long long manualCheckInterval;
@property (nonatomic, copy) NSString *pairingID;
@property (nonatomic, copy) NSString *partnerSchemeID;
@property (nonatomic, copy) NSString *productIdentifier;
@property (nonatomic) long long proofingActionStatus;
@property (nonatomic, copy) NSString *proofingSessionID;
@property (nonatomic, copy) NSString *provisioningCredentialID;
@property (nonatomic, copy) NSDate *provisioningFailureDate;
@property (nonatomic) long long provisioningRetryTimeout;
@property (nonatomic, copy) NSString *provisioningTargetInstanceID;
@property (nonatomic) bool shouldScheduleUploads;
@property (nonatomic) bool shouldShowNotificationOnWatch;
@property (nonatomic, copy) NSString *state;
@property (nonatomic) long long target;
@property (nonatomic) long long totalUploadAssetsFileSizeInBytes;
@property (nonatomic, retain) NSSet *uploadAssets;
@property (nonatomic, copy) NSString *workflowID;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
