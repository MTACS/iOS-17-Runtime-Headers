
@protocol CAMControlStatusBarOrientable <NSObject>

@required

- (long long)orientation;
- (void)setOrientation:(long long)arg1;
- (void)setOrientation:(long long)arg1 animated:(bool)arg2;
- (bool)supportsOrientations;

@end
