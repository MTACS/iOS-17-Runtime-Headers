
@interface SWKeyboardConfiguration : NSObject <NSCopying> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _inputAccessoryViewFrame;
    bool  _isHardwareKeyboard;
    bool  _isKeyboardFloating;
    bool  _isKeyboardSplit;
    bool  _isKeyboardVisible;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _keyboardFrame;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } inputAccessoryViewFrame;
@property (nonatomic) bool isHardwareKeyboard;
@property (nonatomic) bool isKeyboardFloating;
@property (nonatomic) bool isKeyboardSplit;
@property (nonatomic) bool isKeyboardVisible;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } keyboardFrame;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithKeyboardFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inputAccessoryViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 isKeyboardSplit:(bool)arg3 isKeyboardFloating:(bool)arg4 isHardwareKeyboard:(bool)arg5 isKeyboardVisible:(bool)arg6;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })inputAccessoryViewFrame;
- (bool)isEqual:(id)arg1;
- (bool)isHardwareKeyboard;
- (bool)isKeyboardFloating;
- (bool)isKeyboardSplit;
- (bool)isKeyboardVisible;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })keyboardFrame;
- (void)setInputAccessoryViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setIsHardwareKeyboard:(bool)arg1;
- (void)setIsKeyboardFloating:(bool)arg1;
- (void)setIsKeyboardSplit:(bool)arg1;
- (void)setIsKeyboardVisible:(bool)arg1;
- (void)setKeyboardFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
