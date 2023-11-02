
@protocol _UIFeedbackPlayer

@required

- (void)_playFeedback:(_UIFeedback *)arg1 atTime:(double)arg2;
- (void)_stopFeedback:(_UIFeedback *)arg1;
- (void)_updateValueForParameters:(_UIFeedbackParameters *)arg1 withKey:(NSString *)arg2;
- (id /* block */)invalidationBlock:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL
- (void)setInvalidationBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
