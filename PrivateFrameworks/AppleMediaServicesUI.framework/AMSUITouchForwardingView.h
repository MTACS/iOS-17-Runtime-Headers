
@interface AMSUITouchForwardingView : UIView {
    NSArray * _passthroughViews;
}

@property (nonatomic, copy) NSArray *passthroughViews;

- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)passthroughViews;
- (void)setPassthroughViews:(id)arg1;

@end
