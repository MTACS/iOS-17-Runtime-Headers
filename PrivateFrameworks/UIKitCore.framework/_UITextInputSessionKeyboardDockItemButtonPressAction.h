
@interface _UITextInputSessionKeyboardDockItemButtonPressAction : _UITextInputSessionAction {
    unsigned long long  _buttonPressResult;
    struct CGSize { 
        double width; 
        double height; 
    }  _buttonSize;
    unsigned long long  _buttonType;
    struct CGPoint { 
        double x; 
        double y; 
    }  _touchDownPoint;
    double  _touchDuration;
    struct CGPoint { 
        double x; 
        double y; 
    }  _touchUpPoint;
    long long  _uiOrientation;
}

@property (nonatomic) unsigned long long buttonPressResult;
@property (nonatomic) struct CGSize { double x1; double x2; } buttonSize;
@property (nonatomic) unsigned long long buttonType;
@property (nonatomic) struct CGPoint { double x1; double x2; } touchDownPoint;
@property (nonatomic) double touchDuration;
@property (nonatomic) struct CGPoint { double x1; double x2; } touchUpPoint;
@property (nonatomic) long long uiOrientation;

- (unsigned long long)buttonPressResult;
- (struct CGSize { double x1; double x2; })buttonSize;
- (unsigned long long)buttonType;
- (id)description;
- (long long)inputActionCount;
- (void)setButtonPressResult:(unsigned long long)arg1;
- (void)setButtonSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setButtonType:(unsigned long long)arg1;
- (void)setTouchDownPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTouchDuration:(double)arg1;
- (void)setTouchUpPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setUiOrientation:(long long)arg1;
- (struct CGPoint { double x1; double x2; })touchDownPoint;
- (double)touchDuration;
- (struct CGPoint { double x1; double x2; })touchUpPoint;
- (long long)uiOrientation;

@end
