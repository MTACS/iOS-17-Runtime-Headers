
@interface VKFrameInfo : NSObject {
    struct CGSize { 
        double width; 
        double height; 
    }  _dimensions;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _imageToLayerTransform;
    double  _luminosity;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _regionOfInterest;
    unsigned long long  _sceneStability;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _visionToCroppedImageTransform;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _visionToLayerTransform;
}

@property (nonatomic) struct CGSize { double x1; double x2; } dimensions;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } imageToLayerTransform;
@property (nonatomic) double luminosity;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } regionOfInterest;
@property (nonatomic) unsigned long long sceneStability;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } visionToCroppedImageTransform;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } visionToLayerTransform;

- (struct CGSize { double x1; double x2; })dimensions;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })imageToLayerTransform;
- (double)luminosity;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })regionOfInterest;
- (unsigned long long)sceneStability;
- (void)setDimensions:(struct CGSize { double x1; double x2; })arg1;
- (void)setImageToLayerTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setLuminosity:(double)arg1;
- (void)setRegionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSceneStability:(unsigned long long)arg1;
- (void)setVisionToCroppedImageTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setVisionToLayerTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })visionToCroppedImageTransform;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })visionToLayerTransform;

@end
