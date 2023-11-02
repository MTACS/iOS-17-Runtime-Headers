
@protocol _UIFeedbackPlayer_Internal <_UIFeedbackPlayer>

@required

- (bool)_internal_playFeedbackData:(NSArray *)arg1 forFeedback:(_UIFeedback *)arg2 atTime:(double)arg3;
- (void)_internal_stopFeedbackData:(NSArray *)arg1 forFeedback:(_UIFeedback *)arg2;

@end
