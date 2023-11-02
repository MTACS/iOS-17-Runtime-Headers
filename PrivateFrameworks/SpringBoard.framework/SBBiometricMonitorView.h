
@interface SBBiometricMonitorView : UIView {
    long long  _matchState;
    long long  _poseState;
    UIView * _poseView;
    long long  _presenceDetectState;
    UIView * _presenceView;
    UIView * _stateView;
}

@property (nonatomic) long long matchState;
@property (nonatomic) long long poseState;
@property (nonatomic) long long presenceDetectState;

- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (long long)matchState;
- (long long)poseState;
- (long long)presenceDetectState;
- (void)setMatchState:(long long)arg1;
- (void)setPoseState:(long long)arg1;
- (void)setPresenceDetectState:(long long)arg1;

@end
