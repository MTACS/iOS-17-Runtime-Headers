
@interface SBSimplePasscodeEntryFieldButton : UIView {
    bool  _animatingUnreveal;
    UIColor * _color;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _paddingOutsideRing;
    bool  _revealed;
    UIView * _ringView;
    bool  _useLightStyle;
}

@property (getter=isAnimatingUnreveal, nonatomic) bool animatingUnreveal;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 paddingOutsideRing:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 useLightStyle:(bool)arg3;
- (bool)isAnimatingUnreveal;
- (void)layoutSubviews;
- (void)setAnimatingUnreveal:(bool)arg1;
- (void)setRevealed:(bool)arg1 animated:(bool)arg2;
- (void)setRevealed:(bool)arg1 animated:(bool)arg2 delay:(double)arg3;

@end
