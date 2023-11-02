
@interface PVMotionEffectTranscriptionComponent : PVMotionEffectComponent <PVEffectTranscript> {
    NSNumber * _disableWordFadeOutForPreview;
    NSNumber * _isSingleWordTranscription;
    NSNumber * _isTranscription;
}

+ (id)motionEffectPropertyKeyToPublishedParameterNameMap;

- (void).cxx_destruct;
- (void)clearTranscription;
- (void)computeLoopMarkerBasedOnTranscription_NoLock:(const void*)arg1;
- (bool)disableWordFadeOutForPreview;
- (void)disableWordFadeOutIfNecessary_NoLock:(const void*)arg1;
- (void)effect:(id)arg1 updateProperties:(id)arg2 allProperties:(id)arg3;
- (bool)isSingleWordTranscription;
- (bool)isTranscription;
- (void)motionEffect:(id)arg1 didBecomeReady:(const void*)arg2 properties:(id)arg3;
- (void)motionEffect:(id)arg1 didLoad:(const void*)arg2;
- (void)resetToDefaultTranscriptionForLocaleID:(id)arg1;
- (void)setTranscriptionText:(id)arg1;
- (void)setupTranscriptionParameters_NoLock:(id)arg1 documentInfo:(const void*)arg2;
- (bool)shouldDisableWordFadeOut_NoLock:(const void*)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })transcriptionDuration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })transcriptionDuration_NoLock:(const void*)arg1;
- (bool)transcriptionHitTest:(struct CGPoint { double x1; double x2; })arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)updateLiveTitlePickerLoopTime:(bool)arg1;

@end
