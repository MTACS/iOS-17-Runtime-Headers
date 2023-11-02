
@interface PSPointerHoverRegion : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSArray * _accessories;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _contentBounds;
    double  _contentHoverInverseScale;
    PSMatchMoveSource * _contentMatchMoveSource;
    NSValue * _contentSlipValue;
    unsigned int  _coordinateSpaceSourceContextID;
    unsigned long long  _coordinateSpaceSourceLayerRenderID;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _hitTestBounds;
    long long  _overlayEffectStyle;
    unsigned long long  _pointerLatchingAxes;
    PSPointerPortalSourceCollection * _pointerPortalSourceCollection;
    unsigned long long  _pointerRecenteringAxes;
    PSPointerShape * _pointerShape;
    NSValue * _pointerSlipValue;
    double  _pointerVisualIntensity;
    unsigned long long  _preferredPointerMaterialLuminance;
    bool  _shouldPointerSuppressMirroring;
    bool  _shouldPointerUnderlayContent;
}

@property (nonatomic, readonly, copy) NSArray *accessories;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentBounds;
@property (nonatomic, readonly) double contentHoverInverseScale;
@property (nonatomic, readonly, copy) PSMatchMoveSource *contentMatchMoveSource;
@property (nonatomic, readonly, copy) NSValue *contentSlipValue;
@property (nonatomic, readonly) unsigned int coordinateSpaceSourceContextID;
@property (nonatomic, readonly) unsigned long long coordinateSpaceSourceLayerRenderID;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } hitTestBounds;
@property (nonatomic, readonly) long long overlayEffectStyle;
@property (getter=isOverlayEffectVisible, nonatomic, readonly) bool overlayEffectVisible;
@property (nonatomic, readonly) unsigned long long pointerLatchingAxes;
@property (nonatomic, readonly, copy) PSPointerPortalSourceCollection *pointerPortalSourceCollection;
@property (nonatomic, readonly) unsigned long long pointerRecenteringAxes;
@property (nonatomic, readonly, copy) PSPointerShape *pointerShape;
@property (nonatomic, readonly, copy) NSValue *pointerSlipValue;
@property (nonatomic, readonly) double pointerVisualIntensity;
@property (nonatomic, readonly) unsigned long long preferredPointerMaterialLuminance;
@property (nonatomic, readonly) bool shouldPointerSuppressMirroring;
@property (nonatomic, readonly) bool shouldPointerUnderlayContent;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_copyWithClass:(Class)arg1;
- (id)accessories;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentBounds;
- (double)contentHoverInverseScale;
- (id)contentMatchMoveSource;
- (id)contentSlipValue;
- (unsigned int)coordinateSpaceSourceContextID;
- (unsigned long long)coordinateSpaceSourceLayerRenderID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })hitTestBounds;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isLatching;
- (bool)isNumericDataValid;
- (bool)isOverlayEffectVisible;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (long long)overlayEffectStyle;
- (unsigned long long)pointerLatchingAxes;
- (id)pointerPortalSourceCollection;
- (unsigned long long)pointerRecenteringAxes;
- (id)pointerShape;
- (id)pointerSlipValue;
- (double)pointerVisualIntensity;
- (unsigned long long)preferredPointerMaterialLuminance;
- (bool)shouldPointerSuppressMirroring;
- (bool)shouldPointerUnderlayContent;

@end
