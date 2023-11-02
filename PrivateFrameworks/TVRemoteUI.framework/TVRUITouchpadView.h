
@interface TVRUITouchpadView : UIView {
    <TVRUITouchpadDelegate> * _touchDelegate;
}

@property (nonatomic) <TVRUITouchpadDelegate> *touchDelegate;

- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setTouchDelegate:(id)arg1;
- (id)touchDelegate;

@end
