
@interface IMDOneTimeCodeManager : NSObject {
    <IMDaemonListenerProtocol> * _broadcaster;
    <IMDaemonListenerProtocol> * _broadcasterOverride;
    NSTimer * _codeInvalidationTimer;
    IMOneTimeCodeUtilities * _otcUtilities;
    <IMSyncedSettingsManaging> * _syncedSettingsManager;
    NSArray * _validCodes;
}

@property (nonatomic) bool autoDeletionPreference;
@property (nonatomic, retain) <IMDaemonListenerProtocol> *broadcaster;
@property (nonatomic, retain) <IMDaemonListenerProtocol> *broadcasterOverride;
@property (nonatomic, retain) NSTimer *codeInvalidationTimer;
@property (nonatomic, retain) IMOneTimeCodeUtilities *otcUtilities;
@property (nonatomic, retain) <IMSyncedSettingsManaging> *syncedSettingsManager;
@property (nonatomic, retain) NSArray *validCodes;

+ (id)sharedInstance;

- (id)_localizedStringForKey:(id)arg1;
- (void)_setNewCodeAndPrepareInvalidationTimer:(id)arg1;
- (void)_updateLastMessageTimeStampForChat:(id)arg1;
- (id)_urlForPasswordsIcon;
- (bool)autoDeletionPreference;
- (void)broadcastCodeStatusToClients;
- (id)broadcaster;
- (id)broadcasterOverride;
- (id)codeInvalidationTimer;
- (void)consumeCodeWithGuid:(id)arg1;
- (void)consumeCodeWithGuid:(id)arg1 codeExpired:(bool)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithBroadcaster:(id)arg1 otcUtilities:(id)arg2;
- (void)moveOneTimeCodeToRecentlyDeleted:(id)arg1;
- (void)onboardDeleteVerificationCodesIfNeededWithCompletionHandler:(id /* block */)arg1;
- (void)onboardDeleteVerificationCodesIfNeededWithMessage:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)otcUtilities;
- (void)setAutoDeletionPreference:(bool)arg1;
- (void)setBroadcaster:(id)arg1;
- (void)setBroadcasterOverride:(id)arg1;
- (void)setCodeInvalidationTimer:(id)arg1;
- (void)setOtcUtilities:(id)arg1;
- (void)setSyncedSettingsManager:(id)arg1;
- (void)setValidCodes:(id)arg1;
- (void)startTrackingCode:(id)arg1;
- (id)syncedSettingsManager;
- (id)validCodes;

@end
