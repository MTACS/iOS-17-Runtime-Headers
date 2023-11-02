
@interface _WKExtrinsicButton : UIButton {
    struct CGSize { 
        double width; 
        double height; 
    }  _extrinsicContentSize;
}

@property (nonatomic) struct CGSize { double x1; double x2; } extrinsicContentSize;

- (struct CGSize { double x1; double x2; })extrinsicContentSize;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)setExtrinsicContentSize:(struct CGSize { double x1; double x2; })arg1;

@end
