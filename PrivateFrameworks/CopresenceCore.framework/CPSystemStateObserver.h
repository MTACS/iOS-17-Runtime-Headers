
@interface CPSystemStateObserver : NSObject <CPAudioPolicyStateObserver, CPSystemStateObserver, TUConversationManagerDelegate> {
    void $__lazy_storage_$__allowScreenSharing;
    void $__lazy_storage_$__allowSharePlay;
    void $__lazy_storage_$_screenTimeAllowed;
    void audioRoutePolicyManager;
    void carPlayConnected;
    void carplayObserver;
    void conversationManager;
    void isLockdownModeEnabled;
    void isScreening;
    void lock;
    void managedConfigObserver;
    void observers;
}

@property (nonatomic, readonly) bool allowScreenSharing;
@property (nonatomic, readonly) bool allowSharePlay;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1 withQueue:(id)arg2;
- (bool)allowScreenSharing;
- (bool)allowSharePlay;
- (void)audioPolicyManager:(id)arg1 sharePlayAllowedStateChanged:(bool)arg2;
- (void)conversationManager:(id)arg1 screeningChangedForConversation:(id)arg2;
- (void)conversationManager:(id)arg1 stateChangedForConversation:(id)arg2;
- (id)init;
- (id)initWithQueue:(id)arg1;

@end
