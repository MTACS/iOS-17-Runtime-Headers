
@interface SFUnifiedTabBarLayoutConfiguration : NSObject {
    SFUnifiedTabBarMetrics * _barMetrics;
    bool  _flipped;
    struct CGPoint { 
        double x; 
        double y; 
    }  _midpointForCenteredContent;
    UIScrollView * _scrollView;
    bool  _shouldSlideInNewTrailingTab;
    bool  _standalone;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _visibleRectOverride;
}

@property (nonatomic, retain) SFUnifiedTabBarMetrics *barMetrics;
@property (nonatomic) bool flipped;
@property (nonatomic) struct CGPoint { double x1; double x2; } midpointForCenteredContent;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (nonatomic) bool shouldSlideInNewTrailingTab;
@property (getter=isStandalone, nonatomic) bool standalone;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleRectOverride;

- (void).cxx_destruct;
- (id)barMetrics;
- (bool)flipped;
- (id)initWithScrollView:(id)arg1;
- (bool)isStandalone;
- (struct CGPoint { double x1; double x2; })midpointForCenteredContent;
- (id)scrollView;
- (void)setBarMetrics:(id)arg1;
- (void)setFlipped:(bool)arg1;
- (void)setMidpointForCenteredContent:(struct CGPoint { double x1; double x2; })arg1;
- (void)setShouldSlideInNewTrailingTab:(bool)arg1;
- (void)setStandalone:(bool)arg1;
- (void)setVisibleRectOverride:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)shouldSlideInNewTrailingTab;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRectOverride;

@end
