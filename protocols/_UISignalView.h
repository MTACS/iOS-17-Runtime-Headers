
@protocol _UISignalView <NSObject>

@required

- (UIColor *)activeColor;
- (UIColor *)inactiveColor;
- (id)initWithSizeCategory:(long long)arg1;
- (long long)numberOfActiveBars;
- (long long)numberOfBars;
- (void)setActiveColor:(UIColor *)arg1;
- (void)setInactiveColor:(UIColor *)arg1;
- (void)setNumberOfActiveBars:(long long)arg1;
- (void)setNumberOfBars:(long long)arg1;
- (void)setSignalMode:(long long)arg1;
- (void)setSizeCategory:(long long)arg1;
- (long long)signalMode;
- (long long)sizeCategory;

@end
