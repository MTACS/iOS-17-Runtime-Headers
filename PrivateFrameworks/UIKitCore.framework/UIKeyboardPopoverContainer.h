
@interface UIKeyboardPopoverContainer : NSObject {
    _UIKeyboardPopoverAffordance * _affordance;
    double  _arrowOffset;
    UIKBVisualEffectView * _backdrop;
    unsigned long long  _direction;
    NSLayoutConstraint * _keyboardAreaHeight;
    _UIPopoverView * _popover;
    _UIKeyboardPopover * _popoverContainerView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _targetFull;
}

@property (readonly, retain) UIView *affordance;
@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;

+ (double)arrowHeight;
+ (id)borderColor;
+ (double)borderWidth;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
+ (double)cornerRadius;
+ (double)dragAreaHeight;
+ (double)edgeOffset;
+ (double)extraWidth;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameAtOffset:(struct CGPoint { double x1; double x2; })arg1 keyboardSize:(struct CGSize { double x1; double x2; })arg2 screenSize:(struct CGSize { double x1; double x2; })arg3;
+ (id)pillColor;
+ (double)pillCornerRadius;
+ (double)pillDistanceToEdge;
+ (struct CGSize { double x1; double x2; })pillSize;
+ (id)propertiesForSpecificKeyboardFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 onScreenSize:(struct CGSize { double x1; double x2; })arg2;
+ (id)propertiesForTargetRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withHeight:(double)arg2 onScreenSize:(struct CGSize { double x1; double x2; })arg3;
+ (id)shadowColor;
+ (struct CGSize { double x1; double x2; })shadowOffset;
+ (double)shadowOpacity;
+ (double)shadowRadius;

- (void).cxx_destruct;
- (void)_updateKeyboardLayoutGuideForPopover:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)affordance;
- (void)applyProperties:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (id)initWithView:(id)arg1 usingBackdropStyle:(long long)arg2;
- (void)invalidate;
- (void)updateBackdropStyle:(long long)arg1;

@end
