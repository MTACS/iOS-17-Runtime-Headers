
@interface _BCUCoverEffectsShadow : NSObject {
    NSString * _blendMode;
    struct CGImage { } * _image;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _insets;
}

@property (nonatomic, readonly) NSString *blendMode;
@property (nonatomic, readonly) struct CGImage { }*image;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } insets;

- (void).cxx_destruct;
- (id)blendMode;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentsCenter;
- (struct CGImage { }*)image;
- (id)initWithImage:(struct CGImage { }*)arg1 insets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (id)initWithImage:(struct CGImage { }*)arg1 insets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 blendMode:(id)arg3;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })insets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })roundedInsetsWithSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })size;

@end
