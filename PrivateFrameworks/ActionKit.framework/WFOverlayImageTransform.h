
@interface WFOverlayImageTransform : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bounds;
    struct CGPoint { 
        double x; 
        double y; 
    }  _center;
    double  _opacity;
    double  _rotation;
    double  _scale;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic) struct CGPoint { double x1; double x2; } center;
@property (nonatomic) double opacity;
@property (nonatomic) double rotation;
@property (nonatomic) double scale;

- (void)applyToImageFile:(id)arg1 withOverlayImage:(id)arg2 completionHandler:(id /* block */)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (struct CGPoint { double x1; double x2; })center;
- (id)init;
- (id)initForCenteringImage:(id)arg1 inBackgroundImage:(id)arg2;
- (id)initWithCenter:(struct CGPoint { double x1; double x2; })arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 rotation:(double)arg3 scale:(double)arg4 opacity:(double)arg5;
- (double)opacity;
- (double)rotation;
- (double)scale;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setOpacity:(double)arg1;
- (void)setRotation:(double)arg1;
- (void)setScale:(double)arg1;

@end
