
@protocol SBMixedGridSwitcherProviding <NSObject>

@required

- (double)firstFloatingCardPeekingWidth;
- (unsigned long long)indexOfFirstMainAppLayoutFromAppLayouts:(NSArray *)arg1;
- (bool)isIndexFullyVisible:(unsigned long long)arg1;
- (bool)isIndexVisible:(unsigned long long)arg1;
- (unsigned long long)numberOfFloatingAppLayouts;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfVisibleAppLayouts;
- (bool)reversesFloatingCardDirection;
- (void)setReversesFloatingCardDirection:(bool)arg1;
- (double)unadjustedScaleForIndex:(unsigned long long)arg1;

@end
