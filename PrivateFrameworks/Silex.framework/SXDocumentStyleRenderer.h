
@interface SXDocumentStyleRenderer : NSObject <SXDocumentStyleRenderer, SXViewportChangeListener> {
    <SXGradientFactory> * _gradientFactory;
    UIView * _topBackgroundView;
    SXViewport * _viewport;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <SXGradientFactory> *gradientFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIView *topBackgroundView;
@property (nonatomic, readonly) SXViewport *viewport;

- (void).cxx_destruct;
- (void)applyBackgroundColorForStyle:(id)arg1 onView:(id)arg2;
- (void)applyStyle:(id)arg1 onView:(id)arg2;
- (void)applyTopBackgroundForStyle:(id)arg1 onView:(id)arg2;
- (id)gradientFactory;
- (id)initWithViewport:(id)arg1 gradientFactory:(id)arg2;
- (void)layoutTopBackgroundView;
- (void)setTopBackgroundView:(id)arg1;
- (id)topBackgroundView;
- (id)viewport;
- (void)viewport:(id)arg1 boundsDidChangeFromBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;

@end
