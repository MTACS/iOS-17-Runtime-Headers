
@interface CPFeatureFlags : NSObject <CPFeatureFlags>

@property (nonatomic, readonly) bool autoGameCenterEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool expanseEnabled;
@property (nonatomic, readonly) bool expanseParticipantIDHashed;
@property (nonatomic, readonly) bool expanseTopicStateEnabled;
@property (nonatomic, readonly) bool fastSyncPresenceSeparationEnabled;
@property (nonatomic, readonly) bool fastSyncRecoveryMessageHandlingEnabled;
@property (nonatomic, readonly) bool gameCenterFastSyncTransport;
@property (nonatomic, readonly) bool gameCenterSharePlayIntegration;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool mochiEnabled;
@property (nonatomic, readonly) bool newApplicationLauncherEnabled;
@property (nonatomic, readonly) bool qrPluginEncryptionEnabled;
@property (nonatomic, readonly) bool sharePlayAttachmentLedgerEnabled;
@property (nonatomic, readonly) bool sharePlayInFaceTimeCanvasEnabled;
@property (nonatomic, readonly) bool sharePlayLiteEnabled;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool unreliableMessengerEnabled;
@property (nonatomic, readonly) bool wranglerEnabled;

- (bool)autoGameCenterEnabled;
- (bool)expanseEnabled;
- (bool)expanseParticipantIDHashed;
- (bool)expanseTopicStateEnabled;
- (bool)fastSyncPresenceSeparationEnabled;
- (bool)fastSyncRecoveryMessageHandlingEnabled;
- (bool)gameCenterFastSyncTransport;
- (bool)gameCenterSharePlayIntegration;
- (bool)mochiEnabled;
- (bool)newApplicationLauncherEnabled;
- (bool)qrPluginEncryptionEnabled;
- (bool)sharePlayAttachmentLedgerEnabled;
- (bool)sharePlayInFaceTimeCanvasEnabled;
- (bool)sharePlayLiteEnabled;
- (bool)unreliableMessengerEnabled;
- (bool)wranglerEnabled;

@end
