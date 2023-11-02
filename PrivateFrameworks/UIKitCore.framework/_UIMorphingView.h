
@interface _UIMorphingView : UIView {
    NSMutableOrderedSet * _contentViews;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _initialBounds;
    UIView * _opacityPairSourceView;
    double  _progress;
    bool  _useOpacityPairFilter;
}

@property (nonatomic, retain) NSMutableOrderedSet *contentViews;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } initialBounds;
@property (nonatomic) UIView *opacityPairSourceView;
@property (nonatomic) double progress;
@property (nonatomic) bool useOpacityPairFilter;

- (void).cxx_destruct;
- (id)_currentDestinationView;
- (void)_updateMorphProgress;
- (void)addContentView:(id)arg1;
- (id)contentViews;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })initialBounds;
- (id)opacityPairSourceView;
- (double)progress;
- (void)setContentViews:(id)arg1;
- (void)setInitialBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setOpacityPairSourceView:(id)arg1;
- (void)setProgress:(double)arg1;
- (void)setUseOpacityPairFilter:(bool)arg1;
- (bool)useOpacityPairFilter;

@end
