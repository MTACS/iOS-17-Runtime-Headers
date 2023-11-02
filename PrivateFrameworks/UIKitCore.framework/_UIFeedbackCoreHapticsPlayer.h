
@interface _UIFeedbackCoreHapticsPlayer : NSObject <_UIFeedbackPlayer_Internal> {
    <CHHapticPatternPlayer> * _coreHapticsPlayer;
    _UIFeedbackCoreHapticsEngine * _hapticEngine;
    NSObject<OS_dispatch_queue> * _internalQueue;
    id /* block */  _invalidationBlock;
}

@property (nonatomic, retain) <CHHapticPatternPlayer> *coreHapticsPlayer;
@property (nonatomic) _UIFeedbackCoreHapticsEngine *hapticEngine;
@property (nonatomic, copy) id /* block */ invalidationBlock;

- (void).cxx_destruct;
- (id)_internal_createEventsForFeedbackData:(id)arg1 engine:(id)arg2 parameters:(id*)arg3 parameterCurves:(id*)arg4;
- (id)_internal_createEventsForFileFeedbackData:(id)arg1 engine:(id)arg2 parameters:(id*)arg3 parameterCurves:(id*)arg4;
- (id)_internal_createEventsForLegacyFeedbackData:(id)arg1;
- (id)_internal_createEventsForLibraryFeedbackData:(id)arg1 engine:(id)arg2 parameters:(id*)arg3 parameterCurves:(id*)arg4;
- (id)_internal_createEventsForTransientHapticData:(id)arg1;
- (id)_internal_createFixedParameterForParameters:(id)arg1 withKey:(id)arg2 forEventType:(id)arg3;
- (id)_internal_createPatternForFeedbackData:(id)arg1 feedback:(id)arg2 engine:(id)arg3;
- (id)_internal_createPlayerWithPattern:(id)arg1;
- (bool)_internal_playFeedbackData:(id)arg1 forFeedback:(id)arg2 atTime:(double)arg3;
- (void)_internal_stopFeedbackData:(id)arg1 forFeedback:(id)arg2;
- (void)_internal_updateValueForParameters:(id)arg1 withKey:(id)arg2;
- (void)_playFeedback:(id)arg1 atTime:(double)arg2;
- (void)_stopFeedback:(id)arg1;
- (void)_updateValueForParameters:(id)arg1 withKey:(id)arg2;
- (id)coreHapticsPlayer;
- (id)hapticEngine;
- (id)initWithEngine:(id)arg1;
- (id /* block */)invalidationBlock;
- (void)setCoreHapticsPlayer:(id)arg1;
- (void)setHapticEngine:(id)arg1;
- (void)setInvalidationBlock:(id /* block */)arg1;

@end
