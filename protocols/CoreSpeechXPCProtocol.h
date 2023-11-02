
@protocol CoreSpeechXPCProtocol

@required

- (void)fetchRemoteVoiceTriggerAssetForLanguageCode:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 9: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSString *, NSError *, void*
- (void)installedVoiceTriggerAssetForLanguageCode:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 9: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSString *, NSError *, void*
- (void)voiceTriggerJarvisLanguageList:(void *)arg1 jarvisSelectedLanguage:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSArray *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)voiceTriggerRTModelWithRequestOptions:(void *)arg1 downloadedModels:(void *)arg2 preinstalledModels:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 11: CSVoiceTriggerRTModelRequestOptions *, NSArray *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CSVoiceTriggerRTModel *, CSVoiceTriggerRTModel *, NSError *, void*

@end
