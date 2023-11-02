
@protocol PXOneUpPresentationConfiguration <NSObject>

@required

- (unsigned long long)activity;
- (long long)interactiveMode;
- (bool)isAnimated;
- (void)setActivity:(unsigned long long)arg1;
- (void)setAnimated:(bool)arg1;
- (void)setInteractiveMode:(long long)arg1;

@end
