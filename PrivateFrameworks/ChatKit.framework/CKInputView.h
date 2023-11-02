
@interface CKInputView : UIInputView {
    struct CGSize { 
        double width; 
        double height; 
    }  _lastContentSize;
    long long  _lastContentSizeInterfaceOrientation;
}

@property (nonatomic) struct CGSize { double x1; double x2; } lastContentSize;
@property (nonatomic) long long lastContentSizeInterfaceOrientation;

+ (struct CGSize { double x1; double x2; })defaultContentSize;
+ (struct CGSize { double x1; double x2; })defaultContentSizeLargerThanKeyboard:(bool*)arg1;

- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (struct CGSize { double x1; double x2; })lastContentSize;
- (long long)lastContentSizeInterfaceOrientation;
- (void)setLastContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setLastContentSizeInterfaceOrientation:(long long)arg1;

@end
