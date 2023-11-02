
@interface _DUIPreview : NSObject <NSCopying, NSSecureCoding> {
    bool  _avoidAnimation;
    UIColor * _backgroundColor;
    struct CGPoint { 
        double x; 
        double y; 
    }  _contentOffset;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    unsigned int  _coordinateSpaceSourceContextID;
    unsigned long long  _coordinateSpaceSourceLayerRenderID;
    bool  _hidesSourceView;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialBadgeLocation;
    struct CGPoint { 
        double x; 
        double y; 
    }  _liftAnchorPoint;
    struct CGPoint { 
        double x; 
        double y; 
    }  _originalCenter;
    struct CAPoint3D { 
        double x; 
        double y; 
        double z; 
    }  _originalCenterInCoordinateSpace;
    double  _originalRotation;
    UIBezierPath * _outline;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _overrideStackTransform;
    long long  _preferredStackOrder;
    long long  _previewMode;
    UIBezierPath * _shadowPath;
    _UIDragPreviewShadowProperties * _shadowProperties;
    struct CGSize { 
        double width; 
        double height; 
    }  _viewScaleFactor;
    bool  _wantsSuppressedMask;
}

@property (nonatomic) bool avoidAnimation;
@property (nonatomic, copy) UIColor *backgroundColor;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } boundingSize;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } contentOffset;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } contentSize;
@property (nonatomic) unsigned int coordinateSpaceSourceContextID;
@property (nonatomic) unsigned long long coordinateSpaceSourceLayerRenderID;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } croppedScaledSize;
@property (nonatomic, readonly) UIBezierPath *effectiveShadowPath;
@property (nonatomic) bool hidesSourceView;
@property (nonatomic) struct CGPoint { double x1; double x2; } initialBadgeLocation;
@property (nonatomic, readonly) double liftAlpha;
@property (nonatomic) struct CGPoint { double x1; double x2; } liftAnchorPoint;
@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } liftTransform;
@property (nonatomic) struct CGPoint { double x1; double x2; } originalCenter;
@property (nonatomic) struct CGPoint { double x1; double x2; } originalCenterInCoordinateSpace;
@property (nonatomic) double originalRotation;
@property (nonatomic, copy) UIBezierPath *outline;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } overrideStackTransform;
@property (getter=isOversized, nonatomic, readonly) bool oversized;
@property (nonatomic, readonly) UIDragPreviewParameters *parameters;
@property (nonatomic) long long preferredStackOrder;
@property (nonatomic) long long previewMode;
@property (nonatomic, readonly) double scaleFactor;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } scaledSize;
@property (nonatomic, copy) UIBezierPath *shadowPath;
@property (nonatomic, copy) _UIDragPreviewShadowProperties *shadowProperties;
@property (nonatomic, readonly) double stackAlpha;
@property (nonatomic) bool textMode;
@property (nonatomic, readonly) double topAlpha;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } unscaledAnchorPoint;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } unscaledSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } viewScaleFactor;
@property (nonatomic) bool wantsSuppressedMask;

+ (id)defaultPreviewWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (double)defaultStackAlpha;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_applyPropertiesFromPreviewParameters:(id)arg1;
- (id)_initWithView:(id)arg1 container:(id)arg2 parameters:(id)arg3 platformCenter:(struct CAPoint3D { double x1; double x2; double x3; })arg4;
- (double)_topOffset;
- (bool)avoidAnimation;
- (double)backAlpha;
- (id)backgroundColor;
- (struct CGSize { double x1; double x2; })boundingSize;
- (struct CGPoint { double x1; double x2; })contentOffset;
- (struct CGSize { double x1; double x2; })contentSize;
- (unsigned int)coordinateSpaceSourceContextID;
- (unsigned long long)coordinateSpaceSourceLayerRenderID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CGSize { double x1; double x2; })croppedScaledSize;
- (id)effectiveShadowPath;
- (void)encodeWithCoder:(id)arg1;
- (bool)hidesSourceView;
- (id)init;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 outline:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithView:(id)arg1 container:(id)arg2 parameters:(id)arg3;
- (id)initWithView:(id)arg1 container:(id)arg2 parameters:(id)arg3 center:(struct CGPoint { double x1; double x2; })arg4;
- (struct CGPoint { double x1; double x2; })initialBadgeLocation;
- (bool)isEqual:(id)arg1;
- (bool)isOversized;
- (double)liftAlpha;
- (struct CGPoint { double x1; double x2; })liftAnchorPoint;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })liftTransform;
- (struct CGPoint { double x1; double x2; })originalCenter;
- (struct CGPoint { double x1; double x2; })originalCenterInCoordinateSpace;
- (double)originalRotation;
- (id)outline;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })overrideStackTransform;
- (id)parameters;
- (long long)preferredStackOrder;
- (long long)previewMode;
- (double)scaleFactor;
- (struct CGSize { double x1; double x2; })scaledSize;
- (void)setAvoidAnimation:(bool)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setCoordinateSpaceSourceContextID:(unsigned int)arg1;
- (void)setCoordinateSpaceSourceLayerRenderID:(unsigned long long)arg1;
- (void)setHidesSourceView:(bool)arg1;
- (void)setInitialBadgeLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setLiftAnchorPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setOriginalCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setOriginalCenterInCoordinateSpace:(struct CGPoint { double x1; double x2; })arg1;
- (void)setOriginalRotation:(double)arg1;
- (void)setOutline:(id)arg1;
- (void)setOverrideStackTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setPreferredStackOrder:(long long)arg1;
- (void)setPreviewMode:(long long)arg1;
- (void)setShadowPath:(id)arg1;
- (void)setShadowProperties:(id)arg1;
- (void)setTextMode:(bool)arg1;
- (void)setWantsSuppressedMask:(bool)arg1;
- (id)shadowPath;
- (id)shadowProperties;
- (double)stackAlpha;
- (bool)textMode;
- (double)topAlpha;
- (struct CGPoint { double x1; double x2; })unscaledAnchorPoint;
- (struct CGSize { double x1; double x2; })unscaledSize;
- (struct CGSize { double x1; double x2; })viewScaleFactor;
- (bool)wantsSuppressedMask;

@end
