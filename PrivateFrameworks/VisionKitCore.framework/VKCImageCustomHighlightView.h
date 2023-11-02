
@interface VKCImageCustomHighlightView : VKCImageBaseOverlayView {
    UIBezierPath * _borderedNormalizedHighlightPath;
    CAShapeLayer * _highlightColorLayer;
    NSMutableArray * _highlightDots;
    CAShapeLayer * _highlightLayer;
    NSArray * _highlightRanges;
    CALayer * _highlightShadowLayer;
    <VKCImageCustomHighlightViewDelegate> * _highlightViewDelegate;
    bool  _isConfiguringHighlights;
    NSArray * _matchedRanges;
    UIBezierPath * _normalizedHighlightPath;
    NSArray * _selectionRects;
}

@property (nonatomic, retain) UIBezierPath *borderedNormalizedHighlightPath;
@property (nonatomic, readonly) UIColor *highlightColor;
@property (nonatomic, retain) CAShapeLayer *highlightColorLayer;
@property (nonatomic, retain) NSMutableArray *highlightDots;
@property (nonatomic, retain) CAShapeLayer *highlightLayer;
@property (nonatomic, retain) NSArray *highlightRanges;
@property (nonatomic, retain) CALayer *highlightShadowLayer;
@property (nonatomic) <VKCImageCustomHighlightViewDelegate> *highlightViewDelegate;
@property (nonatomic) bool isConfiguringHighlights;
@property (nonatomic, retain) NSArray *matchedRanges;
@property (nonatomic, retain) UIBezierPath *normalizedHighlightPath;
@property (nonatomic, retain) NSArray *selectionRects;

- (void).cxx_destruct;
- (void)_configureHighlightDotForRanges:(id)arg1;
- (void)beginHighlightWithRanges:(id)arg1 animated:(bool)arg2;
- (id)borderedNormalizedHighlightPath;
- (void)clearHighlightsAnimated:(bool)arg1;
- (void)clearHighlightsAnimated:(bool)arg1 hideLayers:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })currentContentsRectInLayerCoordinates;
- (id)highlightColor;
- (id)highlightColorLayer;
- (id)highlightDots;
- (id)highlightLayer;
- (id)highlightRanges;
- (id)highlightShadowLayer;
- (id)highlightViewDelegate;
- (id)initWithDelegate:(id)arg1;
- (bool)isConfiguringHighlights;
- (void)layoutSubviews;
- (id)matchedRanges;
- (id)normalizedHighlightPath;
- (void)normalizedVisibleRectDidChange;
- (void)performHighlightForRanges:(id)arg1 animated:(bool)arg2 isReplacingResults:(bool)arg3;
- (id)selectionRects;
- (void)setBorderedNormalizedHighlightPath:(id)arg1;
- (void)setHighlightColorLayer:(id)arg1;
- (void)setHighlightDots:(id)arg1;
- (void)setHighlightLayer:(id)arg1;
- (void)setHighlightRanges:(id)arg1;
- (void)setHighlightShadowLayer:(id)arg1;
- (void)setHighlightViewDelegate:(id)arg1;
- (void)setIsConfiguringHighlights:(bool)arg1;
- (void)setMatchedRanges:(id)arg1;
- (void)setNormalizedHighlightPath:(id)arg1;
- (void)setSelectionRects:(id)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformForHighlightLayerInCurrentBounds;
- (void)updateHighlightLayerGeometry;
- (void)updateHighlightLayerGeometryIfVisible;

@end
