
@interface PUParallaxLayerLayoutInfo : NSObject {
    bool  _canApplyParallax;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _containerFrame;
    long long  _deviceOrientation;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _headroomFrame;
    double  _headroomVisibilityAmount;
    double  _parallaxAmount;
    struct CGPoint { 
        double x; 
        double y; 
    }  _parallaxVector;
    UIColor * _primaryStyleColor;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _settlingEffectFrame;
    bool  _styleIsHighKey;
    double  _visibilityAmount;
    unsigned long long  _visibilityEdge;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _visibleFrame;
}

@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } additionalContentTransform;
@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } additionalTransform;
@property (nonatomic, readonly) bool canApplyParallax;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } containerFrame;
@property (nonatomic, readonly) long long deviceOrientation;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } headroomFrame;
@property (nonatomic, readonly) double headroomVisibilityAmount;
@property (nonatomic, readonly) double parallaxAmount;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } parallaxVector;
@property (nonatomic, readonly) UIColor *primaryStyleColor;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } settlingEffectFrame;
@property (nonatomic, readonly) bool styleIsHighKey;
@property (nonatomic, readonly) double visibilityAmount;
@property (nonatomic, readonly) unsigned long long visibilityEdge;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleFrame;

- (void).cxx_destruct;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })additionalContentTransform;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })additionalTransform;
- (bool)canApplyParallax;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })containerFrame;
- (id)description;
- (long long)deviceOrientation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })headroomFrame;
- (double)headroomVisibilityAmount;
- (id)initWithDeviceOrientation:(long long)arg1 containerFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 visibleFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 settlingEffectFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 headroomFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 headroomVisibilityAmount:(double)arg6 styleIsHighKey:(bool)arg7 primaryStyleColor:(id)arg8 canApplyParallax:(bool)arg9 parallaxVector:(struct CGPoint { double x1; double x2; })arg10 parallaxAmount:(double)arg11 visibilityAmount:(double)arg12 visibilityEdge:(unsigned long long)arg13;
- (bool)isEqual:(id)arg1;
- (double)parallaxAmount;
- (struct CGPoint { double x1; double x2; })parallaxVector;
- (id)primaryStyleColor;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })settlingEffectFrame;
- (bool)styleIsHighKey;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })viewFrameForLayerFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)visibilityAmount;
- (unsigned long long)visibilityEdge;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleFrame;

@end
