
@interface VTStateManager : NSObject <VTFirstUnlockMonitorDelegate, VTGestureMonitorDelegate> {
    VTBuiltInRTModel * _builtInRTModel;
    id /* block */  _callbackWithMessageAndTimestamp;
    VTCoreSpeechKeepAliveHandler * _coreSpeechKeepAliveHandler;
    VTPolicy * _enablePolicy;
    VTGestureMonitor * _gestureMonitor;
    VTPhraseSpotter * _phraseSpotter;
    NSObject<OS_dispatch_queue> * _queue;
    VTRemoteDarwinHIDEventNotifier * _remoteDarwinHIDEventNotifier;
    bool  _rtModelDownloaded;
    bool  _voiceTriggerIsEnabled;
    bool  _voiceTriggerIsEnabledOnCoreSpeechDaemon;
    unsigned long long  _wakeGestureHostTime;
    VTXPCServiceServer * _xpcServer;
}

@property (nonatomic, retain) VTCoreSpeechKeepAliveHandler *coreSpeechKeepAliveHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_serviceClient;
+ (void)clearVoiceTriggerCount;
+ (id)firstChanceAudioBuffer;
+ (id)firstChanceTriggeredDate;
+ (id)firstChanceVTEventInfo;
+ (long long)getVoiceTriggerCount;
+ (bool)iPhoneShouldStartVoiceTriggerInCoreSpeech;
+ (bool)isLastTriggerForced;
+ (bool)isLastTriggerSecondChanceTriggered;
+ (void)notifyVoiceTrigger;
+ (void)notifyVoiceTriggeredSiriSessionCancelled;
+ (void)notifyVoiceTriggeredSiriSessionCancelled:(id)arg1;
+ (void)requestAudioCapture:(double)arg1;
+ (id)requestCurrentBuiltInRTModelDictionary;
+ (id)requestCurrentVoiceTriggerAssetDictionary;
+ (void)requestCurrentVoiceTriggerAssetDictionaryWithReply:(id /* block */)arg1;
+ (void)requestForcedSecondChance;
+ (void)requestForcedTriggerEvent;
+ (void)requestPhraseSpotterBypassing:(bool)arg1 timeout:(double)arg2;
+ (void)requestRaiseToSpeakBypassing:(bool)arg1 timeout:(double)arg2;
+ (void)requestVoiceTriggerEnabled:(bool)arg1 forReason:(id)arg2;
+ (void)setCurrentBuiltInRTModelDictionary:(id)arg1;

- (void).cxx_destruct;
- (void)VTFirstUnlockMonitor:(id)arg1 didReceiveFirstUnlock:(bool)arg2;
- (void)_initializeXPCService;
- (void)_notifyStateTransitionToState:(long long)arg1 withStartTimestamp:(unsigned long long)arg2;
- (void)_powerlog:(id)arg1;
- (void)_stateTransitionDidOccur:(bool)arg1 fromCallback:(bool)arg2;
- (id)coreSpeechKeepAliveHandler;
- (void)gestureMonitorDidReceiveSleepGesture:(id)arg1;
- (void)gestureMonitorDidReceiveWakeGesture:(id)arg1;
- (id)getModel;
- (id)getPhraseSpotter;
- (id)initWithProperty:(id)arg1 callbackWithMessage:(id /* block */)arg2;
- (id)initWithProperty:(id)arg1 callbackWithMessageAndTimestamp:(id /* block */)arg2;
- (id)initWithProperty:(id)arg1 phraseSpotter:(id)arg2 enablePolicy:(id)arg3 callbackWithMessageAndTimestamp:(id /* block */)arg4;
- (void)setCoreSpeechKeepAliveHandler:(id)arg1;

@end
