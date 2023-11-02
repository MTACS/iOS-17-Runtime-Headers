
@interface MRUEqualizerView : UIView <MRUVisualStylingProviderObserver> {
    bool  _animating;
    NSArray * _barViews;
    double  _spacing;
    MRUVisualStylingProvider * _stylingProvider;
    long long  _visualStyle;
    double  _width;
}

@property (getter=isAnimating, nonatomic) bool animating;
@property (nonatomic, retain) NSArray *barViews;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double spacing;
@property (nonatomic, retain) MRUVisualStylingProvider *stylingProvider;
@property (readonly) Class superclass;
@property (nonatomic) long long visualStyle;
@property (nonatomic) double width;

- (void).cxx_destruct;
- (id)barViews;
- (id)initWithNumberOfBars:(unsigned long long)arg1 width:(double)arg2 spacing:(double)arg3;
- (bool)isAnimating;
- (void)layoutSubviews;
- (void)setAnimating:(bool)arg1;
- (void)setBarViews:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSpacing:(double)arg1;
- (void)setStylingProvider:(id)arg1;
- (void)setVisualStyle:(long long)arg1;
- (void)setWidth:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (double)spacing;
- (void)startAnimating;
- (void)stopAnimating;
- (id)stylingProvider;
- (void)updateBarHeights;
- (void)updateVisualStyling;
- (long long)visualStyle;
- (void)visualStylingProviderDidChange:(id)arg1;
- (double)width;

@end
