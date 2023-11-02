
@protocol SBIconListLayoutAnimating <NSObject>

@required

- (void)iconListView:(void *)arg1 wantsAnimatedLayoutForIconView:(void *)arg2 withParameters:(void *)arg3 alongsideAnimationBlock:(void *)arg4; // needs 4 arg types, found 8: SBIconListView *, SBIconView *, struct SBIconListLayoutAnimationParameters { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; struct SBIconImageInfo { struct CGSize { double x_1_2_1; double x_1_2_2; } x_3_1_1; double x_3_1_2; double x_3_1_3; } x3; bool x4; struct SBIconCoordinate { long long x_5_1_1; long long x_5_1_2; } x5; bool x6; bool x7; unsigned long long x8; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@optional

- (void)iconListView:(void *)arg1 wantsAnimatedRemovalForIconViews:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 7: SBIconListView *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
