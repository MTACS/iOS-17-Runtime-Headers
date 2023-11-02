
@protocol MFAudioSessionControlling

@required

- (void)activateAudioSessionWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSError *, void*
- (void)deactivateAudioSessionIfIdle:(long long)arg1;
- (void)setInhibitSpeechDetection:(bool)arg1;
- (void)updateAudioSessionWithConfiguration:(MFAudioSessionConfiguration *)arg1;

@end
