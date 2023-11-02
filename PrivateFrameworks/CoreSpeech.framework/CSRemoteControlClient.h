
@interface CSRemoteControlClient : NSObject <CSRemoteControlClientProtocolV4> {
    OS_xpc_remote_connection * _connection;
    OS_remote_device * _device;
    NSString * _deviceId;
    CSRemoteDeviceProtocolInfo * _deviceProtocolInfo;
    unsigned int  _deviceType;
    CSDispatchGroup * _deviceWaitingGroup;
    NSHashTable * _observers;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) OS_remote_device *device;
@property (nonatomic, readonly, copy) NSString *deviceId;
@property (nonatomic, readonly) CSRemoteDeviceProtocolInfo *deviceProtocolInfo;
@property (nonatomic, readonly) unsigned int deviceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_dictionaryWithContentsOfXPCObject:(id)arg1;
- (void)_fetchDataFromAudioFileUrl:(id)arg1 aesKey:(id)arg2 encryptedAudioSampleBypeDepth:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (id)_getMyriadInfoFromServerMessage:(id)arg1;
- (void)_handleServerError:(id)arg1;
- (void)_handleServerEvent:(id)arg1;
- (void)_handleServerMessage:(id)arg1;
- (void)_invalidate;
- (void)_transferAudioData:(id)arg1 numSamples:(unsigned long long)arg2 remoteWavFilePath:(id)arg3 completion:(id /* block */)arg4;
- (void)_transferFile:(id)arg1 at:(id)arg2 completion:(id /* block */)arg3;
- (void)addObserver:(id)arg1;
- (void)clearTriggerCount:(id /* block */)arg1;
- (bool)createRemoteVoiceProfileWithAudioFiles:(id)arg1 aesKey:(id)arg2 encryptedAudioSampleBypeDepth:(unsigned long long)arg3 languageCode:(id)arg4 completion:(id /* block */)arg5;
- (void)dealloc;
- (id)description;
- (id)device;
- (id)deviceId;
- (id)deviceProtocolInfo;
- (unsigned int)deviceType;
- (void)didDeviceConnect:(id)arg1;
- (void)didDeviceDisconnect:(id)arg1;
- (void)exchangeRemoteDeviceProtocolInfo:(id)arg1;
- (void)fetchAndClearCachedVoiceTriggerEventsWithCompletion:(id /* block */)arg1;
- (void)getFirstPassRunningMode:(id /* block */)arg1;
- (void)getTriggerCount:(id /* block */)arg1;
- (id)initWithRemoteDevice:(id)arg1;
- (void)invalidate;
- (void)invalidateInterstitialWithLevel:(long long)arg1;
- (bool)isConnected;
- (bool)isConnectedDeviceDarwin;
- (bool)isConnectedDeviceGibraltar;
- (void)notifyBluetoothWirelessSplitterStateChanged:(unsigned long long)arg1 shouldDisableSpeakerVerificationInSplitterMode:(bool)arg2;
- (void)notifyVoiceTriggerAssetChangeWithSiriLanguageCode:(id)arg1;
- (void)readAndClearVoiceTriggeredTokenWithCompletion:(id /* block */)arg1;
- (void)readVoiceTriggeredTokenWithCompletion:(id /* block */)arg1;
- (void)removeObserver:(id)arg1;
- (void)setSelfTriggerEnable:(bool)arg1 withCompletion:(id /* block */)arg2;
- (void)setUserSelectedVoiceTriggerPhraseType:(unsigned long long)arg1;
- (void)setVoiceTriggerEnable:(bool)arg1 withCompletion:(id /* block */)arg2;
- (bool)transferInterstitialAudioFiles:(id)arg1 interstitialLevel:(long long)arg2 completion:(id /* block */)arg3;
- (void)transferVoiceTriggerAsset:(id)arg1 forLanguageCode:(id)arg2 completion:(id /* block */)arg3;
- (bool)transferVoiceTriggerSpeakerModel:(id)arg1 forAsset:(id)arg2;
- (void)voiceTriggerEnabledWithCompletion:(id /* block */)arg1;
- (bool)waitingForConnection:(double)arg1 error:(id*)arg2;

@end
