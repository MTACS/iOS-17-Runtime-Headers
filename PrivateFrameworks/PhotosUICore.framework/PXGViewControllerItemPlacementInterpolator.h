
@interface PXGViewControllerItemPlacementInterpolator : NSObject {
    bool  _allowsAdjustedTargetPlacement;
    bool  _alwaysHideSource;
    bool  _alwaysHideTarget;
    bool  _animatesCornerRadius;
    bool  _animatesDisplayedAssetContentsRect;
    bool  _animatesNormalizedDisplayedAssetRect;
    bool  _animatesNormalizedSubtitleRect;
    bool  _animatesNormalizedTitleRect;
    UIView * _containerView;
    double  _duration;
    CAMediaTimingFunction * _fadeTimingFunction;
    bool  _hasValidGeometry;
    long long  _layering;
    CAMediaTimingFunction * _mainTimingFunction;
    CAMediaTimingFunction * _secondaryTimingFunction;
    PXGItemPlacement * _sourcePlacement;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _sourceRect;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _sourceRectVelocity;
    PXGItemPlacement * _targetPlacement;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _targetRect;
    double  _time;
}

@property (nonatomic) double time;

- (void).cxx_destruct;
- (id)adjustedPlacement:(id)arg1;
- (id)init;
- (id)initWithSourcePlacement:(id)arg1 targetPlacement:(id)arg2 layering:(long long)arg3 containerView:(id)arg4 duration:(double)arg5;
- (void)setTime:(double)arg1;
- (double)time;

@end
