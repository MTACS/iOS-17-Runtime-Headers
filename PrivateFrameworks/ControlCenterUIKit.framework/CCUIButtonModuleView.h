
@interface CCUIButtonModuleView : UIControl <UIGestureRecognizerDelegate> {
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _contentEdgeInsets;
    double  _glyphAlpha;
    UIColor * _glyphColor;
    UIImage * _glyphImage;
    UIImageView * _glyphImageView;
    CCUICAPackageDescription * _glyphPackageDescription;
    CCUICAPackageView * _glyphPackageView;
    double  _glyphScale;
    NSString * _glyphState;
    UIView * _highlightedBackgroundView;
    UIColor * _selectedGlyphColor;
    UIImage * _selectedGlyphImage;
    MTVisualStylingProvider * _visualStylingProvider;
}

@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } contentEdgeInsets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double glyphAlpha;
@property (nonatomic, retain) UIColor *glyphColor;
@property (nonatomic, retain) UIImage *glyphImage;
@property (nonatomic, readonly) UIImageView *glyphImageView;
@property (nonatomic, retain) CCUICAPackageDescription *glyphPackageDescription;
@property (nonatomic) double glyphScale;
@property (nonatomic, copy) NSString *glyphState;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIColor *selectedGlyphColor;
@property (nonatomic, retain) UIImage *selectedGlyphImage;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)_continuousCornerRadius;
- (void)_handlePressGesture:(id)arg1;
- (void)_setContinuousCornerRadius:(double)arg1;
- (void)_setGlyphAlpha:(double)arg1;
- (void)_setGlyphImage:(id)arg1;
- (void)_setGlyphPackageDescription:(id)arg1;
- (void)_setGlyphScale:(double)arg1;
- (void)_setGlyphState:(id)arg1;
- (id)_tintColorForSelectedState:(bool)arg1;
- (void)_updateForStateChange;
- (void)_updateGlyphImageViewVisualStyling;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })contentEdgeInsets;
- (void)didMoveToWindow;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (double)glyphAlpha;
- (id)glyphColor;
- (id)glyphImage;
- (id)glyphImageView;
- (id)glyphPackageDescription;
- (double)glyphScale;
- (id)glyphState;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)selectedGlyphColor;
- (id)selectedGlyphImage;
- (void)setContentEdgeInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setEnabled:(bool)arg1;
- (void)setGlyphAlpha:(double)arg1;
- (void)setGlyphColor:(id)arg1;
- (void)setGlyphImage:(id)arg1;
- (void)setGlyphPackageDescription:(id)arg1;
- (void)setGlyphScale:(double)arg1;
- (void)setGlyphState:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSelectedGlyphColor:(id)arg1;
- (void)setSelectedGlyphImage:(id)arg1;

@end
