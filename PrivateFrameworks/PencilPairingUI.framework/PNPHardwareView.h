
@interface PNPHardwareView : UIView {
    unsigned long long  _animationType;
    PNPSyntheticPencilInteractionEventSource * _eventSource;
    PNPPencilView * _pencilView;
}

@property (nonatomic) unsigned long long animationType;

- (void).cxx_destruct;
- (unsigned long long)animationType;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setAnimationType:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
