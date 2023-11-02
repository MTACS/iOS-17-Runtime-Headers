
@protocol CPFeatureFlags <NSObject>

@required

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
