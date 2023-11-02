
@protocol SFBarAnimating <NSObject>

@required

- (void)beginDraggingWithOffset:(double)arg1;
- (void)endDraggingWithTargetOffset:(double)arg1 velocity:(double)arg2;
- (void)endScrolling;
- (void)updateDraggingWithOffset:(double)arg1;

@end
