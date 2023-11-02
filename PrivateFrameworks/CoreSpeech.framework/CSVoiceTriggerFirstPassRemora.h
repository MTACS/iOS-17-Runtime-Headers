
@interface CSVoiceTriggerFirstPassRemora : NSObject <CSAccessorySiriClientBehaviorMonitorDelegate, CSActivationEventNotificationHandlerDelegate, CSSecondPassProgressProviding> {
    NSMutableDictionary * _accessoryFirstPassGoodnessScores;
    CSAsset * _currentAsset;
    <CSVoiceTriggerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _remoraSecondPassRequests;
    <CSSecondPassProgressDelegate> * _secondPassProgressDelegate;
    CSAudioProvider * _triggeredAudioProvider;
    NSMutableDictionary * _triggeredAudioStreamHoldingByAccessoryId;
}

@property (nonatomic, retain) NSMutableDictionary *accessoryFirstPassGoodnessScores;
@property (nonatomic, retain) CSAsset *currentAsset;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CSVoiceTriggerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSMutableDictionary *remoraSecondPassRequests;
@property (nonatomic) <CSSecondPassProgressDelegate> *secondPassProgressDelegate;
@property (readonly) Class superclass;
@property (nonatomic, retain) CSAudioProvider *triggeredAudioProvider;
@property (nonatomic, retain) NSMutableDictionary *triggeredAudioStreamHoldingByAccessoryId;

- (void).cxx_destruct;
- (void)_cancelAllAudioStreamHoldings;
- (void)_cancelAudioStreamHoldingForAccessoryWithId:(id)arg1;
- (void)_createSecondPassRequestIfNecessaryForActivationEvent:(id)arg1 completion:(id /* block */)arg2;
- (void)_handleRemoraTriggerEvent:(id)arg1 secondPassRequest:(id)arg2 completion:(id /* block */)arg3;
- (void)_handleSecondPassResult:(id)arg1 secondPassRequest:(id)arg2 deviceId:(id)arg3 error:(id)arg4 completion:(id /* block */)arg5;
- (void)_requestStartAudioStreamProviderWithContext:(id)arg1 secondPassRequest:(id)arg2 startStreamOption:(id)arg3 completion:(id /* block */)arg4;
- (void)_reset;
- (void)_setDeviceIds:(id)arg1;
- (void)_setIsSecondPassing:(bool)arg1 forDeviceId:(id)arg2;
- (id)accessoryFirstPassGoodnessScores;
- (void)accessorySiriClientBehaviorMonitor:(id)arg1 didStartStreamWithContext:(id)arg2 successfully:(bool)arg3 option:(id)arg4 withEventUUID:(id)arg5 forAccessory:(id)arg6;
- (void)accessorySiriClientBehaviorMonitor:(id)arg1 didStopStream:(id)arg2 reason:(unsigned long long)arg3 withEventUUID:(id)arg4 forAccessory:(id)arg5;
- (void)accessorySiriClientBehaviorMonitor:(id)arg1 willStartStreamWithContext:(id)arg2 option:(id)arg3 forAccessory:(id)arg4;
- (void)accessorySiriClientBehaviorMonitor:(id)arg1 willStopStream:(id)arg2 reason:(unsigned long long)arg3 forAccessory:(id)arg4;
- (void)activationEventNotificationHandler:(id)arg1 event:(id)arg2 completion:(id /* block */)arg3;
- (void)cancelSecondPassRunning;
- (id)currentAsset;
- (id)delegate;
- (id)init;
- (void)pendingSecondPassTriggerWasClearedForClient:(unsigned long long)arg1 deviceId:(id)arg2;
- (id)queue;
- (id)remoraSecondPassRequests;
- (void)reset;
- (id)secondPassProgressDelegate;
- (void)setAccessoryFirstPassGoodnessScores:(id)arg1;
- (void)setConnectedDeviceIds:(id)arg1;
- (void)setCurrentAsset:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setRemoraSecondPassRequests:(id)arg1;
- (void)setSecondPassProgressDelegate:(id)arg1;
- (void)setTriggeredAudioProvider:(id)arg1;
- (void)setTriggeredAudioStreamHoldingByAccessoryId:(id)arg1;
- (void)start;
- (id)triggeredAudioProvider;
- (id)triggeredAudioStreamHoldingByAccessoryId;

@end
