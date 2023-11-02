
@interface UIKBKeyplaneTransformationContext : NSObject {
    UIKBTree * _activeKeyboard;
    UIKBTree * _activeKeyplane;
    NSString * _currentKeyplaneName;
    struct CGSize { 
        double width; 
        double height; 
    }  _keyboardSize;
    double  _resizingOffset;
    UIKBScreenTraits * _screenTraits;
    bool  _usesScriptSwitch;
}

@property (nonatomic, retain) UIKBTree *activeKeyboard;
@property (nonatomic, retain) UIKBTree *activeKeyplane;
@property (nonatomic, retain) NSString *currentKeyplaneName;
@property (nonatomic) struct CGSize { double x1; double x2; } keyboardSize;
@property (nonatomic) double resizingOffset;
@property (nonatomic, retain) UIKBScreenTraits *screenTraits;
@property (nonatomic) bool usesScriptSwitch;

- (void).cxx_destruct;
- (id)activeKeyboard;
- (id)activeKeyplane;
- (id)currentKeyplaneName;
- (struct CGSize { double x1; double x2; })keyboardSize;
- (double)resizingOffset;
- (id)screenTraits;
- (void)setActiveKeyboard:(id)arg1;
- (void)setActiveKeyplane:(id)arg1;
- (void)setCurrentKeyplaneName:(id)arg1;
- (void)setKeyboardSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setResizingOffset:(double)arg1;
- (void)setScreenTraits:(id)arg1;
- (void)setUsesScriptSwitch:(bool)arg1;
- (bool)usesScriptSwitch;

@end
