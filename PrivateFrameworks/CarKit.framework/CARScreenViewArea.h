
@interface CARScreenViewArea : NSObject {
    struct NSEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _additionalInsets;
    <CARDisplayInfoProviding> * _displayInfoProvider;
    bool  _displaysTransitionControl;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _safeFrame;
    bool  _shouldApplyDisplayInsets;
    unsigned long long  _statusBarEdge;
    bool  _supportsFocusTransfer;
    bool  _supportsUIOutsideSafeArea;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _unadjustedSafeFrame;
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

@property (nonatomic) struct NSEdgeInsets { double x1; double x2; double x3; double x4; } additionalInsets;
@property (nonatomic) <CARDisplayInfoProviding> *displayInfoProvider;
@property (nonatomic) bool displaysTransitionControl;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } safeFrame;
@property (nonatomic) bool shouldApplyDisplayInsets;
@property (nonatomic) unsigned long long statusBarEdge;
@property (nonatomic) bool supportsFocusTransfer;
@property (nonatomic) bool supportsUIOutsideSafeArea;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } unadjustedSafeFrame;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleFrame;

+ (struct NSEdgeInsets { double x1; double x2; double x3; double x4; })insetsForOEMUIWithDisplaySize:(struct CGSize { double x1; double x2; })arg1 originInDisplay:(struct CGPoint { double x1; double x2; })arg2 safeFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 viewAreaFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
+ (struct NSEdgeInsets { double x1; double x2; double x3; double x4; })insetsForOEMUIWithDisplaySize:(struct CGSize { double x1; double x2; })arg1 safeFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 viewAreaFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;

- (void).cxx_destruct;
- (void)_updateEffectiveSafeFrame;
- (struct NSEdgeInsets { double x1; double x2; double x3; double x4; })additionalInsets;
- (id)description;
- (id)displayInfoProvider;
- (bool)displaysTransitionControl;
- (id)initWithPropertySupplier:(id /* block */)arg1 additionalInsets:(struct NSEdgeInsets { double x1; double x2; double x3; double x4; })arg2 displayInfoProvider:(id)arg3;
- (id)initWithPropertySupplier:(id /* block */)arg1 additionalInsets:(struct NSEdgeInsets { double x1; double x2; double x3; double x4; })arg2 viewAreaDictionary:(id)arg3 wantsCornerMasks:(bool)arg4 displayInfoProvider:(id)arg5;
- (id)initWithPropertySupplier:(id /* block */)arg1 displayInfoProvider:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToViewArea:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })safeFrame;
- (void)setAdditionalInsets:(struct NSEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDisplayInfoProvider:(id)arg1;
- (void)setDisplaysTransitionControl:(bool)arg1;
- (void)setShouldApplyDisplayInsets:(bool)arg1;
- (void)setStatusBarEdge:(unsigned long long)arg1;
- (void)setSupportsFocusTransfer:(bool)arg1;
- (void)setSupportsUIOutsideSafeArea:(bool)arg1;
- (void)setUnadjustedSafeFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)shouldApplyDisplayInsets;
- (unsigned long long)statusBarEdge;
- (bool)supportsFocusTransfer;
- (bool)supportsUIOutsideSafeArea;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })unadjustedSafeFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleFrame;

@end
