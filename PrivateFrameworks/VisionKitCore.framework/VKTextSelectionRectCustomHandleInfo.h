
@interface VKTextSelectionRectCustomHandleInfo : UITextSelectionRectCustomHandleInfo {
    struct CGPoint { 
        double x; 
        double y; 
    }  _bottomLeft;
    struct CGPoint { 
        double x; 
        double y; 
    }  _bottomRight;
    struct CGPoint { 
        double x; 
        double y; 
    }  _topLeft;
    struct CGPoint { 
        double x; 
        double y; 
    }  _topRight;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } bottomLeft;
@property (nonatomic) struct CGPoint { double x1; double x2; } bottomRight;
@property (nonatomic) struct CGPoint { double x1; double x2; } topLeft;
@property (nonatomic) struct CGPoint { double x1; double x2; } topRight;

- (struct CGPoint { double x1; double x2; })bottomLeft;
- (struct CGPoint { double x1; double x2; })bottomRight;
- (void)setBottomLeft:(struct CGPoint { double x1; double x2; })arg1;
- (void)setBottomRight:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTopLeft:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTopRight:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })topLeft;
- (struct CGPoint { double x1; double x2; })topRight;

@end
