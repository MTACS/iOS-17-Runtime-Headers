
@interface SUTouchCaptureView : UIControl {
    NSArray * _passThroughViews;
}

@property (nonatomic, retain) NSArray *passThroughViews;

- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)passThroughViews;
- (void)setPassThroughViews:(id)arg1;

@end
