
@protocol SFLSRDelegate <NSObject>

@required

- (oneway void)localSpeechRecognitionDidDownloadAssetsWithProgress:(unsigned long long)arg1 isStalled:(bool)arg2;
- (oneway void)localSpeechRecognitionDidFail:(NSError *)arg1;
- (oneway void)localSpeechRecognitionDidFinishDownloadingAssets:(NSString *)arg1 error:(NSError *)arg2;
- (oneway void)localSpeechRecognitionDidFinishRecognition:(SFSpeechRecognitionResult *)arg1;
- (oneway void)localSpeechRecognitionDidProcessAudioDuration:(double)arg1;
- (oneway void)localSpeechRecognitionDidRecognizePartialResult:(SFTranscription *)arg1 rawPartialResult:(SFTranscription *)arg2;
- (oneway void)localSpeechRecognitionDidSucceed;

@end
