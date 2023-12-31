
@interface _SpacingView : UIView {
    struct CGSize { 
        double width; 
        double height; 
    }  _spacingSize;
}

@property (readonly) struct CGSize { double x1; double x2; } spacingSize;

- (id)initWithWidth:(double)arg1 height:(double)arg2;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (struct CGSize { double x1; double x2; })spacingSize;

@end
