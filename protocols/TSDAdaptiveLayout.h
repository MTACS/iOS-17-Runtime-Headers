
@protocol TSDAdaptiveLayout

@required

- (struct CGPoint { double x1; double x2; })applyAdaptiveLayoutTo:(TSDLayout *)arg1 info:(NSObject<TSDInfo> *)arg2 offset:(struct CGPoint { double x1; double x2; })arg3;
- (void)beginDynamicAdaptiveLayout;
- (void)endDynamicAdaptiveLayout;

@end
