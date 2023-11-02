
@interface AXPIFingerLayer : CAShapeLayer {
    <AXPIFingerAppearanceDelegate> * _appearanceDelegate;
    bool  _isSelected;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _outerFrame;
    bool  _pressed;
    unsigned long long  _shape;
}

@property (nonatomic) <AXPIFingerAppearanceDelegate> *appearanceDelegate;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } outerFrame;
@property (getter=isPressed, nonatomic) bool pressed;
@property (getter=isSelected, nonatomic) bool selected;
@property (nonatomic) unsigned long long shape;

- (void).cxx_destruct;
- (id)appearanceDelegate;
- (id)initWithAppearanceDelegate:(id)arg1;
- (bool)isPressed;
- (bool)isSelected;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })outerFrame;
- (void)setAppearanceDelegate:(id)arg1;
- (void)setPressed:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (void)setShape:(unsigned long long)arg1;
- (unsigned long long)shape;

@end
