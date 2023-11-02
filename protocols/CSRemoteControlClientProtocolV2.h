
@protocol CSRemoteControlClientProtocolV2 <NSObject, CSRemoteControlClientProtocolV1>

@required

- (bool)createRemoteVoiceProfileWithAudioFiles:(void *)arg1 aesKey:(void *)arg2 encryptedAudioSampleBypeDepth:(void *)arg3 languageCode:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: NSArray *, NSData *, unsigned long long, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)exchangeRemoteDeviceProtocolInfo:(CSRemoteDeviceProtocolInfo *)arg1;
- (void)fetchAndClearCachedVoiceTriggerEventsWithCompletion:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSArray *, NSArray *, void*
- (void)notifyBluetoothWirelessSplitterStateChanged:(unsigned long long)arg1 shouldDisableSpeakerVerificationInSplitterMode:(bool)arg2;
- (void)notifyVoiceTriggerAssetChangeWithSiriLanguageCode:(NSString *)arg1;

@end
