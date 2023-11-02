
@interface AXPIFingerModel : NSObject {
    <AXPIFingerModelDelegate> * _delegate;
    double  _force;
    struct CGPoint { 
        double x; 
        double y; 
    }  _location;
    bool  _pressed;
    bool  _selected;
    unsigned long long  _shape;
}

@property (nonatomic, retain) <AXPIFingerModelDelegate> *delegate;
@property (nonatomic) double force;
@property (nonatomic) struct CGPoint { double x1; double x2; } location;
@property (getter=isPressed, nonatomic) bool pressed;
@property (getter=isSelected, nonatomic) bool selected;
@property (nonatomic) unsigned long long shape;

+ (id)fingerModelForLocation:(struct CGPoint { double x1; double x2; })arg1;

- (void).cxx_destruct;
- (id)delegate;
- (id)description;
- (double)force;
- (bool)isPressed;
- (bool)isSelected;
- (struct CGPoint { double x1; double x2; })location;
- (void)setDelegate:(id)arg1;
- (void)setForce:(double)arg1;
- (void)setLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPressed:(bool)arg1;
- (void)setPressed:(bool)arg1 sendDelegateCallback:(bool)arg2;
- (void)setSelected:(bool)arg1;
- (void)setShape:(unsigned long long)arg1;
- (unsigned long long)shape;
- (void)updateWithPropertiesFromFingerModel:(id)arg1;

@end
