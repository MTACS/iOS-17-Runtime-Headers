
@protocol CSRemoteControlClientProtocolV1 <NSObject>

@required

- (void)clearTriggerCount:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)getFirstPassRunningMode:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)getTriggerCount:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*
- (void)invalidateInterstitialWithLevel:(long long)arg1;
- (void)readAndClearVoiceTriggeredTokenWithCompletion:(void *)arg1; // needs 1 arg types, found 9: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSData *, NSDictionary *, unsigned long long, void*
- (void)readVoiceTriggeredTokenWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)setVoiceTriggerEnable:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (bool)transferInterstitialAudioFiles:(void *)arg1 interstitialLevel:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSArray *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)transferVoiceTriggerAsset:(void *)arg1 forLanguageCode:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: CSAsset *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (bool)transferVoiceTriggerSpeakerModel:(SSRVoiceProfile *)arg1 forAsset:(CSAsset *)arg2;
- (void)voiceTriggerEnabledWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, bool, void*

@end
