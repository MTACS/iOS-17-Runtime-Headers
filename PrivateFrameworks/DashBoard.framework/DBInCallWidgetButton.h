
@interface DBInCallWidgetButton : UIButton {
    long long  _inCallButtonType;
    DBInCallWidgetButtonRingView * _ringView;
}

@property (nonatomic, readonly) long long inCallButtonType;
@property (nonatomic, retain) DBInCallWidgetButtonRingView *ringView;

- (void).cxx_destruct;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (long long)inCallButtonType;
- (id)initWithButtonType:(long long)arg1;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (id)ringView;
- (void)setHighlighted:(bool)arg1;
- (void)setRingView:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setupConstraints;
- (void)traitCollectionDidChange:(id)arg1;

@end
