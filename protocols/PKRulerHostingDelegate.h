
@protocol PKRulerHostingDelegate <NSObject>

@optional

- (bool)rulerHostWantsSharedRuler;
- (NSString *)rulerHostingStringFromPixels:(double)arg1;
- (UIView *)rulerHostingView;

@end
