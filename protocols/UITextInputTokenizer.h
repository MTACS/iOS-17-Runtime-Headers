
@protocol UITextInputTokenizer <NSObject>

@required

- (bool)isPosition:(UITextPosition *)arg1 atBoundary:(long long)arg2 inDirection:(long long)arg3;
- (bool)isPosition:(UITextPosition *)arg1 withinTextUnit:(long long)arg2 inDirection:(long long)arg3;
- (UITextPosition *)positionFromPosition:(UITextPosition *)arg1 toBoundary:(long long)arg2 inDirection:(long long)arg3;
- (UITextRange *)rangeEnclosingPosition:(UITextPosition *)arg1 withGranularity:(long long)arg2 inDirection:(long long)arg3;

@end
