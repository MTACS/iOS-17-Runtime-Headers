
@interface IMDowntimeController : NSObject <TUCallProviderManagerDelegate> {
    DMFApplicationPolicyMonitor * _appPolicyMonitor;
    NSMutableDictionary * _bundleIDPolicyMap;
    TUCallProviderManager * _callProviderManager;
    bool  _isRunningFromMacMessagesApp;
    bool  _needsNotificationsRegistering;
    IMCommLimitsPolicyCache * _policyCache;
    NSObject<OS_dispatch_queue> * _screenTimeDispatchQueue;
    NSObject<OS_dispatch_queue> * _setupDispatchQueue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _stateLock;
    STConversation * _stateLock_STConversation;
    NSSet * _stateLock_emergencyNumbersSet;
}

@property (nonatomic, retain) DMFApplicationPolicyMonitor *appPolicyMonitor;
@property (nonatomic, retain) NSMutableDictionary *bundleIDPolicyMap;
@property (nonatomic, retain) TUCallProviderManager *callProviderManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isRunningFromMacMessagesApp;
@property (nonatomic, retain) IMCommLimitsPolicyCache *policyCache;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *screenTimeDispatchQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *setupDispatchQueue;
@property (readonly) Class superclass;

+ (id)fetchEmergencyNumbersSetWithProviderManager:(id)arg1;
+ (bool)isContactLimitsFeatureEnabled;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)STConversation;
- (void)_addObserversToChat:(id)arg1;
- (bool)_allowedToShowConversationWithHandleIDs:(id)arg1 sync:(bool)arg2 context:(id*)arg3 participantIDsHash:(id)arg4 trackingChat:(id)arg5;
- (void)_doRegisterForScreenTimeNotifications;
- (void)_participantsForChatDidChange:(id)arg1;
- (bool)allowedToShowAppExtensionWithBundleIdentifier:(id)arg1;
- (bool)allowedToShowConversationForChat:(id)arg1 sync:(bool)arg2;
- (bool)allowedToShowConversationWithHandleIDs:(id)arg1 sync:(bool)arg2 context:(id*)arg3;
- (bool)allowedToShowConversationWithHandleIDs:(id)arg1 sync:(bool)arg2 context:(id*)arg3 participantIDsHash:(id)arg4;
- (id)appPolicyMonitor;
- (id)bundleIDPolicyMap;
- (id)callProviderManager;
- (id)conversationContextForChat:(id)arg1;
- (id)emergencyNumbers;
- (void)fetchScreenTimeAppPolicy;
- (void)getSTConversation:(id /* block */)arg1;
- (id)init;
- (void)initializeContext:(id)arg1 participantIDsHash:(id)arg2 trackingChat:(id)arg3;
- (bool)isDowntimeLimited;
- (bool)isEmergencyHandle:(id)arg1;
- (bool)isRunningFromMacMessagesApp;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)policyCache;
- (void)providersChangedForProviderManager:(id)arg1;
- (void)registerForScreenTimeNotifications;
- (id)screenTimeDispatchQueue;
- (void)setAppPolicyMonitor:(id)arg1;
- (void)setBundleIDPolicyMap:(id)arg1;
- (void)setCallProviderManager:(id)arg1;
- (void)setEmergencyNumbers:(id)arg1;
- (void)setIsRunningFromMacMessagesApp:(bool)arg1;
- (void)setPolicyCache:(id)arg1;
- (void)setScreenTimeDispatchQueue:(id)arg1;
- (void)setSetupDispatchQueue:(id)arg1;
- (id)setupDispatchQueue;

@end
