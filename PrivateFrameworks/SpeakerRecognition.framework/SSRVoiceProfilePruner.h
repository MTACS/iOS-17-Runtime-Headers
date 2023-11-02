
@interface SSRVoiceProfilePruner : NSObject <SSRSpeakerRecognitionControllerDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (unsigned long long)_deleteUtterances:(id)arg1;
- (void)_getScoresForAudio:(id)arg1 withController:(id)arg2 withDetector:(id)arg3 forProfile:(id)arg4 withCompletion:(id /* block */)arg5;
- (id)_retrainVoiceProfile:(id)arg1 withAsset:(id)arg2;
- (void)pruneVoiceProfile:(id)arg1 forSpIdType:(unsigned long long)arg2 withAsset:(id)arg3;

@end
