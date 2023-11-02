
@interface AXPIPinchChainView : UIView {
    <AXPIFingerAppearanceDelegate> * _appearanceDelegate;
    struct CGPoint { 
        double x; 
        double y; 
    }  _endPoint;
    bool  _pressed;
    bool  _selected;
    struct CGPoint { 
        double x; 
        double y; 
    }  _startPoint;
}

@property (nonatomic) <AXPIFingerAppearanceDelegate> *appearanceDelegate;
@property (nonatomic) struct CGPoint { double x1; double x2; } endPoint;
@property (getter=isPressed, nonatomic) bool pressed;
@property (getter=isSelected, nonatomic) bool selected;
@property (nonatomic) struct CGPoint { double x1; double x2; } startPoint;

- (void).cxx_destruct;
- (id)appearanceDelegate;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGPoint { double x1; double x2; })endPoint;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isPressed;
- (bool)isSelected;
- (bool)isUserInteractionEnabled;
- (void)setAppearanceDelegate:(id)arg1;
- (void)setEndPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPressed:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (void)setStartPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })startPoint;

@end
