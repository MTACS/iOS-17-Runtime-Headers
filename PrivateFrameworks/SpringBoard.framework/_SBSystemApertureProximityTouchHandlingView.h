
@interface _SBSystemApertureProximityTouchHandlingView : UIView {
    <_SBSystemApertureProximityTouchHandlingViewDelegate> * _delegate;
}

@property (nonatomic) <_SBSystemApertureProximityTouchHandlingViewDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithDelegate:(id)arg1 hitTestsAsOpaque:(bool)arg2;
- (void)setDelegate:(id)arg1;

@end
