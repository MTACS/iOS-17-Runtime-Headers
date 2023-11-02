
@interface WFKeyboard : NSObject {
    long long  _animationCurve;
    double  _animationDuration;
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
    bool  _visible;
}

@property (nonatomic, readonly) long long animationCurve;
@property (nonatomic, readonly) double animationDuration;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } keyboardFrame;
@property (getter=isVisible, nonatomic, readonly) bool visible;

+ (void)beginObservingKeyboardNotifications;
+ (id)sharedKeyboard;

- (long long)animationCurve;
- (double)animationDuration;
- (void)dealloc;
- (id)init;
- (bool)isVisible;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })keyboardFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })keyboardFrameInView:(id)arg1;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)keyboardWillChangeVisible:(id)arg1;

@end
