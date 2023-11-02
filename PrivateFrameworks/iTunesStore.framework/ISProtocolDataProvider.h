
@interface ISProtocolDataProvider : ISDataProvider <NSCopying> {
    SSBiometricAuthenticationContext * _biometricAuthenticationContext;
    NSString * _presentingSceneIdentifier;
    bool  _shouldPostFooterSectionChanged;
    bool  _shouldProcessAccount;
    bool  _shouldProcessAuthenticationDialogs;
    bool  _shouldProcessDialogs;
    bool  _shouldProcessDialogsOutsideDaemon;
    bool  _shouldProcessProtocol;
    bool  _shouldProcessTouchIDDialogs;
    bool  _shouldTriggerDownloads;
}

@property (copy) NSString *presentingSceneIdentifier;
@property bool shouldPostFooterSectionChanged;
@property bool shouldProcessAccount;
@property bool shouldProcessAuthenticationDialogs;
@property bool shouldProcessDialogs;
@property bool shouldProcessDialogsOutsideDaemon;
@property bool shouldProcessProtocol;
@property (readonly) bool shouldProcessTouchIDDialogs;
@property bool shouldTriggerDownloads;

- (void).cxx_destruct;
- (void)_checkBiometricFailureForResponse:(id)arg1;
- (void)_checkDownloadQueues;
- (void)_checkInAppPurchaseQueueForAction:(id)arg1;
- (id)_metricsDictionaryForResponse:(id)arg1;
- (void)_performActionsForResponse:(id)arg1;
- (void)_presentDialog:(id)arg1;
- (bool)_processFailureTypeFromDictionary:(id)arg1 error:(id*)arg2;
- (void)_refreshSubscriptionStatus;
- (void)_selectFooterSection:(id)arg1;
- (bool)_shouldAttemptPasswordPaymentSheetForError:(id)arg1;
- (bool)_shouldFailWithTokenErrorForDialog:(id)arg1 dictionary:(id)arg2 error:(id*)arg3;
- (id)_touchIDDialogForResponse:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (bool)parseData:(id)arg1 returningError:(id*)arg2;
- (id)presentingSceneIdentifier;
- (bool)processDialogFromDictionary:(id)arg1 error:(id*)arg2;
- (bool)processDictionary:(id)arg1 error:(id*)arg2;
- (void)setPresentingSceneIdentifier:(id)arg1;
- (void)setShouldPostFooterSectionChanged:(bool)arg1;
- (void)setShouldProcessAccount:(bool)arg1;
- (void)setShouldProcessAuthenticationDialogs:(bool)arg1;
- (void)setShouldProcessDialogs:(bool)arg1;
- (void)setShouldProcessDialogsOutsideDaemon:(bool)arg1;
- (void)setShouldProcessProtocol:(bool)arg1;
- (void)setShouldTriggerDownloads:(bool)arg1;
- (bool)shouldPostFooterSectionChanged;
- (bool)shouldProcessAccount;
- (bool)shouldProcessAuthenticationDialogs;
- (bool)shouldProcessDialogs;
- (bool)shouldProcessDialogsOutsideDaemon;
- (bool)shouldProcessProtocol;
- (bool)shouldProcessTouchIDDialogs;
- (bool)shouldTriggerDownloads;

@end