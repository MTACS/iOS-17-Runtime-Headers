
@interface HPSSpatialProfileSoundHapticManager : NSObject {
    bool  _dynamicEnrollmentFeedback;
    CHHapticEngine * _engine;
    <CHHapticAdvancedPatternPlayer> * _enrollGuidancePlayer;
    <CHHapticAdvancedPatternPlayer> * _enrollmentCompletedPlayer;
    <CHHapticAdvancedPatternPlayer> * _scanCompletedPlayer;
    <CHHapticAdvancedPatternPlayer> * _scanErrorPlayer;
    <CHHapticAdvancedPatternPlayer> * _scanFirstTickPlayer;
    <CHHapticAdvancedPatternPlayer> * _scanInProgressPlayer;
    <CHHapticAdvancedPatternPlayer> * _scanLockPlayer;
    <CHHapticAdvancedPatternPlayer> * _scanSecondTickPlayer;
    NSObject<OS_dispatch_queue> * _soundHapticSerialQueue;
}

- (void).cxx_destruct;
- (id)init;
- (id)initPlayerWithFileName:(id)arg1;
- (bool)isEnrollGuidancePlaying;
- (void)pauseEnrollGuidancePlayer;
- (void)pauseProgressPlayer;
- (void)playEnrollGuidance:(int)arg1;
- (void)playProgressPlayer:(int)arg1;
- (void)readDynamicEnrollmentFeedback;
- (void)setEnrollGuidancePitch:(float)arg1;
- (void)setProgressPlayerPitch:(float)arg1;
- (void)setupPlayers;
- (void)start;
- (void)stop;
- (void)triggerSoundHapticForEarCaptureState:(int)arg1 completion:(id /* block */)arg2;
- (void)triggerSoundHapticForEnrollmentState:(int)arg1 completion:(id /* block */)arg2;

@end
