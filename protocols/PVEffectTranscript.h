
@protocol PVEffectTranscript

@required

- (void)clearTranscription;
- (bool)isTranscription;
- (void)resetToDefaultTranscriptionForLocaleID:(NSString *)arg1;
- (void)setTranscriptionText:(NSString *)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })transcriptionDuration;
- (bool)transcriptionHitTest:(struct CGPoint { double x1; double x2; })arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)updateLiveTitlePickerLoopTime:(bool)arg1;

@end
