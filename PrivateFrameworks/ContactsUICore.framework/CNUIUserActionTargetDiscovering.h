
@interface CNUIUserActionTargetDiscovering : NSObject <CNUIUserActionTargetDiscovering> {
    <CNLSApplicationWorkspace> * _applicationWorkspace;
    CNUIUserActionTargetDiscoveryCache * _cache;
    <CNTUCallProviderManager> * _callProviderManager;
    <CNCapabilities> * _capabilities;
    <CNSchedulerProvider> * _highLatencySchedulerProvider;
    <CNMCProfileConnection> * _profileConnection;
    <CNSchedulerProvider> * _schedulerProvider;
}

@property (nonatomic, readonly) <CNLSApplicationWorkspace> *applicationWorkspace;
@property (nonatomic, readonly) CNUIUserActionTargetDiscoveryCache *cache;
@property (nonatomic, readonly) <CNTUCallProviderManager> *callProviderManager;
@property (nonatomic, readonly) <CNCapabilities> *capabilities;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <CNSchedulerProvider> *highLatencySchedulerProvider;
@property (nonatomic, readonly) <CNMCProfileConnection> *profileConnection;
@property (nonatomic, readonly) <CNSchedulerProvider> *schedulerProvider;
@property (readonly) Class superclass;

+ (id)applicationProxiesForIntent:(id)arg1 applicationWorkspace:(id)arg2;
+ (bool)isSkypeAvailableWithEnvironment:(id)arg1;
+ (id)os_log;
+ (bool)shouldIgnoreApplicationProxy:(id)arg1;

- (void).cxx_destruct;
- (id)_targetsForActionType:(id)arg1;
- (id)applicationWorkspace;
- (id)cache;
- (id)callProviderManager;
- (id)capabilities;
- (void)dealloc;
- (id)highLatencySchedulerProvider;
- (id)initWithApplicationWorkspace:(id)arg1 callProviderManager:(id)arg2 profileConnection:(id)arg3 schedulerProvider:(id)arg4 highLatencySchedulerProvider:(id)arg5 capabilities:(id)arg6;
- (id)observableForTargetsChangedForActionType:(id)arg1 schedulerProvider:(id)arg2;
- (id)profileConnection;
- (void)resetTargetsForActionType:(id)arg1;
- (id)schedulerProvider;
- (id)targetForTextWithMessages;
- (id)targetForTextWithSkype;
- (id)targetForVideoWithFaceTime;
- (id)targetForVideoWithSkype;
- (id)targetForVoiceWithFaceTime;
- (id)targetForVoiceWithSkype;
- (id)targetForVoiceWithTelephony;
- (id)targetsForActionType:(id)arg1;
- (id)targetsForDirections;
- (id)targetsForEmail;
- (id)targetsForPay;
- (id)targetsForSendMessageIntent;
- (id)targetsForStartAudioCallIntent;
- (id)targetsForStartVideoCallIntent;
- (id)targetsForText;
- (id)targetsForVideo;
- (id)targetsForVideoWithThirdPartyCallProviders;
- (id)targetsForVoice;
- (id)targetsForVoiceWithThirdPartyCallProviders;
- (id)thirdPartyTargetsForActionTypes:(id)arg1;
- (id)thirdPartyTargetsForBundleIdentifier:(id)arg1;

@end
