
@interface AVISOOutputSettingsValidator : AVMediaFileOutputSettingsValidator

- (bool)validateAudioOutputSettings:(id)arg1 reason:(id*)arg2;
- (bool)validateVideoOutputSettings:(id)arg1 reason:(id*)arg2;

@end
