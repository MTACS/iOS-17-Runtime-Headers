
@interface PXUIAutoScroller : PXAutoScroller {
    CADisplayLink * _displayLink;
}

@property (nonatomic, retain) CADisplayLink *displayLink;

- (void).cxx_destruct;
- (void)_handleDisplayLink:(id)arg1;
- (bool)autoscrollWithOffset:(struct CGPoint { double x1; double x2; })arg1;
- (id)displayLink;
- (void)setDisplayLink:(id)arg1;
- (void)startRepeating;
- (void)stopRepeating;
- (void)updateWithGestureRecognizer:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRectForScrollView:(id)arg1;

@end
