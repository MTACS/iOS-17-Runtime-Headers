
@interface CSP2PService : NSObject {
    <CSADCompanionServiceProvider> * _adCompanionServiceProvider;
    NSString * _lastCommunicatedPeer;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_semaphore> * _sema;
    NSString * _voiceIdentificationBatchId;
    NSString * _voiceTriggerBatchId;
}

@property (nonatomic) <CSADCompanionServiceProvider> *adCompanionServiceProvider;
@property (nonatomic, retain) NSString *lastCommunicatedPeer;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *sema;
@property (nonatomic, retain) NSString *voiceIdentificationBatchId;
@property (nonatomic, retain) NSString *voiceTriggerBatchId;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_compressFilesInDirectory:(id)arg1 matchingPredicate:(id)arg2 compressedFileAvailable:(id /* block */)arg3;
- (void)_compressFilesInDirectory:(id)arg1 matchingPredicate:(id)arg2 sortedByCreationDate:(bool)arg3 compressedFileAvailable:(id /* block */)arg4;
- (void)_createDirectoryIfDoesNotExist:(id)arg1;
- (id)_getContentsOfDirectory:(id)arg1;
- (void)_getHomeUserIdForSharedSiriId:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_processFetchVoiceProfileCommandFromPeerId:(id)arg1 requestInfo:(id)arg2 withReply:(id /* block */)arg3;
- (void)_processGradingDataFetchCommandWithRequest:(id)arg1 fromSenderID:(id)arg2 withReply:(id /* block */)arg3;
- (void)_processGradingDataFetchCommandWithRequest:(id)arg1 ofLogType:(unsigned long long)arg2 fromSenderID:(id)arg3 withReply:(id /* block */)arg4;
- (void)_processParallelRecordingCommandWithRequest:(id)arg1 fromSenderID:(id)arg2 withReply:(id /* block */)arg3;
- (void)_processRemoteHeySiriCommandWithRequest:(id)arg1 fromSenderID:(id)arg2 withReply:(id /* block */)arg3;
- (void)_processReverseTransferVoiceProfileCommandFromPeerId:(id)arg1 requestInfo:(id)arg2 withReply:(id /* block */)arg3;
- (void)_processVoiceProfileDeleteCommandWithRequest:(id)arg1 fromSenderID:(id)arg2 withReply:(id /* block */)arg3;
- (void)_processVoiceProfileListQueryCommandFromPeerId:(id)arg1 requestInfo:(id)arg2 withReply:(id /* block */)arg3;
- (void)_processVoiceProfileUpdateTriggerFromPeerId:(id)arg1 requestInfo:(id)arg2 withReply:(id /* block */)arg3;
- (void)_receiveParallelRecordingFromPeerId:(id)arg1 recordingInfo:(id)arg2 withReply:(id /* block */)arg3;
- (void)_receiveVoiceGradingDataFromPeerId:(id)arg1 requestInfo:(id)arg2 withReply:(id /* block */)arg3;
- (void)_receiveVoiceProfileFromPeerId:(id)arg1 voiceProfileInfo:(id)arg2 withReply:(id /* block */)arg3;
- (void)_sendAcousticGradingDataToPeerId:(id)arg1;
- (void)_sendCoreSpeechGradingDataToPeerId:(id)arg1;
- (void)_sendCoreSpeechGradingDataToPeerId:(id)arg1 forLogType:(unsigned long long)arg2;
- (void)_sendCoreSpeechMagusGradingDataToPeerId:(id)arg1;
- (void)_sendGeckoSpeechLogsToPeerId:(id)arg1;
- (void)_sendGradingData:(id)arg1 withFileName:(id)arg2 toPeerId:(id)arg3 withCompressedFlag:(bool)arg4 withUncompressedDataSize:(unsigned long long)arg5 withBatchId:(id)arg6 withRetainFileFlag:(bool)arg7 withFilePrefix:(id)arg8;
- (id)_sendGradingData:(id)arg1 withFileName:(id)arg2 toPeerId:(id)arg3 withCompressedFlag:(bool)arg4 withUncompressedDataSize:(unsigned long long)arg5 withBatchId:(id)arg6 withRetainFileFlag:(bool)arg7 withFilePrefix:(id)arg8 withCompletion:(id /* block */)arg9;
- (void)_sendVoiceProfile:(id)arg1 toPeerId:(id)arg2;
- (void)_sendVoiceProfileUpdateTriggerToPeerId:(id)arg1 forLocale:(id)arg2;
- (void)_sendVoiceTriggerGradingDataToPeerId:(id)arg1;
- (id)_sha1:(id)arg1;
- (id)_spIdSiriDebugGradingDataRootDirectory;
- (id)_spIdSiriDebugTrainedUsersFilePathForLocale:(id)arg1;
- (id)_spIdSiriDebugVTDataDirectory;
- (id)_spIdSiriDebugVoiceProfileCacheDirectoryForProfile:(id)arg1 locale:(id)arg2;
- (id)_spIdSiriDebugVoiceProfileRootDirectoryForProfile:(id)arg1 locale:(id)arg2;
- (id)_spIdSiriDebugVoiceProfileStoreRootDirectory;
- (id)_spIdSiriDebugVoiceProfileStoreRootDirectoryForLocale:(id)arg1;
- (id)_speakerRecognitionAudioLogsGradingDir;
- (id)adCompanionServiceProvider;
- (bool)fileURL:(id)arg1 matchesFileNamePattern:(id)arg2;
- (id)init;
- (bool)isHeadlessDeviceDataCollectionModeEnabled;
- (bool)isInternalWithoutProfile;
- (id)lastCommunicatedPeer;
- (void)processRemoteCommandWithPayload:(id)arg1 fromPeer:(id)arg2 withReply:(id /* block */)arg3;
- (id)queue;
- (id)sema;
- (void)sendAcousticGradingDataToNearbyPeer;
- (void)sendCoreSpeechGradingDataToNearbyPeer;
- (void)sendGeckoSpeechLogsToCompanion;
- (void)sendVTNearMissGradingDataToCompanion;
- (void)sendVoiceProfileUpdatedMessageToNearbyPeerForLocale:(id)arg1;
- (void)setAdCompanionServiceProvider:(id)arg1;
- (void)setLastCommunicatedPeer:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setSema:(id)arg1;
- (void)setVoiceIdentificationBatchId:(id)arg1;
- (void)setVoiceTriggerBatchId:(id)arg1;
- (bool)shouldTransferVoiceTriggerLogFileWithURL:(id)arg1;
- (id)voiceIdentificationBatchId;
- (id)voiceTriggerBatchId;

@end
