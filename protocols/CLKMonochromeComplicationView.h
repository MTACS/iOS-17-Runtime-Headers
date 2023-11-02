
@protocol CLKMonochromeComplicationView <NSObject>

@required

- (<CLKMonochromeFilterProvider> *)filterProvider;
- (void)setFilterProvider:(id <CLKMonochromeFilterProvider>)arg1;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;

@end
