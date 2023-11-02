
@interface MKStandardCalloutView : MKCalloutView {
    struct { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGPoint { 
            double x; 
            double y; 
        } offset; 
        long long position; 
        struct CGPoint { 
            double x; 
            double y; 
        } desiredPoint; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } desiredBounds; 
    }  _anchor;
    bool  _animatingMapToShow;
    UIVisualEffectView * _backdropView;
    MKSmallCalloutView * _calloutView;
    _MKCalloutLayer * _contentStrokeLayer;
    UIView * _contentView;
    bool  _dismissed;
    struct { 
        unsigned int animated : 1; 
        unsigned int didMoveCalled : 1; 
        unsigned int hasPendingAnimatedLayout : 1; 
        unsigned int needsCalloutUpdate : 1; 
        unsigned int isObserving : 1; 
        unsigned int reserved : 26; 
    }  _flags;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _frame;
    bool  _hideTitle;
    _MKCalloutLayer * _maskLayer;
    _MKStandardCalloutMaskView * _maskView;
    struct { 
        double margin; 
        double cornerRadius; 
        double arrowBase; 
        double arrowHeight; 
        bool useRadialSmoothing; 
        union { 
            struct { 
                double arrowBaseRadius; 
                double arrowRadius; 
            } radialSmoothing; 
            struct { 
                double arrowSmoothing; 
                double arrowPointFactor; 
            } nonRadialSmoothing; 
        } ; 
        bool alignDetailViewBaseline; 
        bool scaleVerticalPaddingForDynamicType; 
        struct UIEdgeInsets { 
            double top; 
            double left; 
            double bottom; 
            double right; 
        } padding; 
    }  _metrics;
    UIMotionEffectGroup * _motionEffect;
    long long  _style;
}

@property (nonatomic) bool hideTitle;

+ (double)defaultHeight;
+ (Class)layerClass;

- (void).cxx_destruct;
- (void)_adaptToUserInterfaceStyle;
- (void)_addAccessoryTargetForView:(id)arg1;
- (void)_calculateActualAnchorPoint:(struct CGPoint { double x1; double x2; }*)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 forDesiredAnchorPoint:(struct CGPoint { double x1; double x2; })arg3 boundaryRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (long long)_calculateAnchorPosition:(struct CGPoint { double x1; double x2; }*)arg1 visibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2;
- (void)_calloutAccessoryControlTapped:(id)arg1;
- (void)_frameDidChange;
- (void)_layoutSubviews:(bool)arg1;
- (void)_markDidMoveCalled;
- (struct CGPoint { double x1; double x2; })_originForScale:(double)arg1;
- (void)_removeAccessoryTargetForView:(id)arg1;
- (void)_runBounceAnimationWithCompletionBlock:(id /* block */)arg1;
- (void)_setNeedsCalloutUpdate;
- (void)_setOriginForScale:(double)arg1;
- (void)_showFromAnchorPoint:(struct CGPoint { double x1; double x2; })arg1 boundaryRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 animate:(bool)arg3 completionBlock:(id /* block */)arg4;
- (void)_startObservingAnnotationView:(id)arg1;
- (void)_stopObservingAnnotationView:(id)arg1;
- (void)_updateCallout;
- (void)_updateCalloutAnimated:(bool)arg1;
- (struct CGPoint { double x1; double x2; })anchorPoint;
- (long long)anchorPosition;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)annotationViewFrameDidChange;
- (void)completeBounceAnimation;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)dismissAnimated:(bool)arg1 completionBlock:(id /* block */)arg2;
- (void)forceAnchorPosition:(long long)arg1;
- (bool)hasPendingVisibility;
- (bool)hideTitle;
- (id)initWithAnnotationView:(id)arg1;
- (bool)isLeftAnchored;
- (void)motionEffectDidUpdate:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (struct CGPoint { double x1; double x2; })offset;
- (void)setDetailView:(id)arg1 animated:(bool)arg2;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHideTitle:(bool)arg1;
- (void)setLeftView:(id)arg1 backgroundColor:(id)arg2 animated:(bool)arg3;
- (void)setOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setRightView:(id)arg1 animated:(bool)arg2;
- (void)setSubtitle:(id)arg1;
- (void)setSubtitle:(id)arg1 animated:(bool)arg2;
- (void)setTitle:(id)arg1;
- (void)showAnimated:(bool)arg1 completionBlock:(id /* block */)arg2;
- (id)subtitle;
- (void)traitEnvironment:(id)arg1 didChangeTraitCollection:(id)arg2;
- (void)updateConstraints;

@end
