
@protocol VTTextDependentSpeakerRecognizerDelegate <NSObject>

@required

- (void)textDependentSpeakerRecognizer:(VTTextDependentSpeakerRecognizer *)arg1 failedWithError:(NSError *)arg2;
- (void)textDependentSpeakerRecognizer:(VTTextDependentSpeakerRecognizer *)arg1 hasSatScore:(float)arg2;

@end
