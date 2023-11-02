
@protocol PXFloatingCardLayout <NSObject>

@required

- (bool)canDrag;
- (void)didUpdateCardHeight:(double)arg1;
- (void)didUpdateCardPosition:(unsigned long long)arg1;
- (double)initialHeight;
- (unsigned long long)initialPosition;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })insets;
- (NSOrderedSet *)snappableHeights;
- (double)width;

@end
