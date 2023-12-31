
@protocol AVOutputSettingsValidation

@required

- (bool)validateAudioOutputSettings:(AVAudioOutputSettings *)arg1 reason:(id*)arg2;
- (bool)validateVideoOutputSettings:(AVVideoOutputSettings *)arg1 reason:(id*)arg2;

@end
