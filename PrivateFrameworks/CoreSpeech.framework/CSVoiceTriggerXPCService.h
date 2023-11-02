
@interface CSVoiceTriggerXPCService : NSObject <CSVoiceTriggerXPCClientDelegate> {
    NSObject<OS_dispatch_queue> * _queue;
    CSVoiceTriggerXPCClient * _xpcClient;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (nonatomic, retain) CSVoiceTriggerXPCClient *xpcClient;

+ (id)sharedService;

- (void).cxx_destruct;
- (id)_createXPCClientConnectionIfNeeded:(id)arg1;
- (void)_teardownXPCClientIfNeeded;
- (void)enableVoiceTrigger:(bool)arg1 withAssertion:(id)arg2;
- (void)enableVoiceTrigger:(bool)arg1 withAssertion:(id)arg2 xpcClient:(id)arg3;
- (id)fetchVoiceTriggerDailyStats;
- (id)init;
- (void)notifyVoiceTriggeredSiriSessionCancelled;
- (void)notifyVoiceTriggeredSiriSessionCancelledWithXpcClient:(id)arg1;
- (id)queue;
- (void)setPhraseSpotterBypassing:(bool)arg1 timeout:(double)arg2;
- (void)setPhraseSpotterBypassing:(bool)arg1 timeout:(double)arg2 xpcClient:(id)arg3;
- (void)setQueue:(id)arg1;
- (void)setRaiseToSpeakBypassing:(bool)arg1 timeout:(double)arg2;
- (void)setRaiseToSpeakBypassing:(bool)arg1 timeout:(double)arg2 xpcClient:(id)arg3;
- (void)setXpcClient:(id)arg1;
- (void)voiceTriggerXPCClient:(id)arg1 didDisconnect:(bool)arg2;
- (id)xpcClient;

@end
