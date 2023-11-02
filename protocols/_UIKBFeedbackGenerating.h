
@protocol _UIKBFeedbackGenerating <NSObject>

@required

- (void)actionOccurred:(long long)arg1;
- (void)actionOccurred:(long long)arg1 atLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)activateWithCompletionBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)deactivate;
- (bool)isActive;

@end
