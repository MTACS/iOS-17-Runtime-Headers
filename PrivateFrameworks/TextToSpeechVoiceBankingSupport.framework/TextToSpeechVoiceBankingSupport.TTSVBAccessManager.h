
@interface TextToSpeechVoiceBankingSupport.TTSVBAccessManager : NSObject <ACMonitoredAccountStoreDelegateProtocol> {
    void $__lazy_storage_$_accountStore;
    void calloutQueue;
    void currentChallengeContext;
    void eventHandler;
    void isMonitoringAccountChanges;
    void operationQueue;
    void tccNotifyToken;
}

- (void).cxx_destruct;
- (void)accountCredentialChanged:(id)arg1;
- (void)accountWasAdded:(id)arg1;
- (void)accountWasModified:(id)arg1;
- (void)accountWasRemoved:(id)arg1;
- (void)dealloc;
- (id)init;

@end
