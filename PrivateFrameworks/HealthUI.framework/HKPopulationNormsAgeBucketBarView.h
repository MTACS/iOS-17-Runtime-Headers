
@interface HKPopulationNormsAgeBucketBarView : UIView {
    NSArray * _ascendingThresholds;
    UIColor * _highlightColor;
    CATextLayer * _highlightedBottomLabelLayer;
    CALayer * _highlightedLayer;
    double  _highlightedSectionMaxY;
    double  _highlightedSectionMinY;
    unsigned long long  _highlightedSegmentIndex;
    NSDictionary * _highlightedTextLayerAttributes;
    CATextLayer * _highlightedTopLabelLayer;
    double  _referenceMaxY;
    double  _referenceMinY;
    CALayer * _segmentsLayer;
    CALayer * _underlyingBarLayer;
    double  _visibleBarMaxY;
    double  _visibleBarMinY;
}

@property (nonatomic, retain) NSArray *ascendingThresholds;
@property (nonatomic, retain) UIColor *highlightColor;
@property (nonatomic, retain) CATextLayer *highlightedBottomLabelLayer;
@property (nonatomic, retain) CALayer *highlightedLayer;
@property (nonatomic) double highlightedSectionMaxY;
@property (nonatomic) double highlightedSectionMinY;
@property (nonatomic) unsigned long long highlightedSegmentIndex;
@property (nonatomic, retain) NSDictionary *highlightedTextLayerAttributes;
@property (nonatomic, retain) CATextLayer *highlightedTopLabelLayer;
@property (nonatomic) double referenceMaxY;
@property (nonatomic) double referenceMinY;
@property (nonatomic, retain) CALayer *segmentsLayer;
@property (nonatomic, retain) CALayer *underlyingBarLayer;
@property (nonatomic) double visibleBarMaxY;
@property (nonatomic) double visibleBarMinY;

- (void).cxx_destruct;
- (bool)_bottomSegmentIsHighlighted;
- (bool)_topSegmentIsHighlighted;
- (id)ascendingThresholds;
- (id)highlightColor;
- (id)highlightedBottomLabelLayer;
- (id)highlightedLayer;
- (double)highlightedSectionMaxY;
- (double)highlightedSectionMinY;
- (unsigned long long)highlightedSegmentIndex;
- (id)highlightedTextLayerAttributes;
- (id)highlightedTopLabelLayer;
- (id)initWithReferenceMinY:(double)arg1 referenceMaxY:(double)arg2 highlightColor:(id)arg3;
- (void)layoutSublayersOfLayer:(id)arg1;
- (double)referenceMaxY;
- (double)referenceMinY;
- (id)segmentsLayer;
- (void)setAscendingThresholds:(id)arg1;
- (void)setHighlightColor:(id)arg1;
- (void)setHighlightedBottomLabelLayer:(id)arg1;
- (void)setHighlightedLayer:(id)arg1;
- (void)setHighlightedSectionMaxY:(double)arg1;
- (void)setHighlightedSectionMinY:(double)arg1;
- (void)setHighlightedSegmentIndex:(unsigned long long)arg1;
- (void)setHighlightedTextLayerAttributes:(id)arg1;
- (void)setHighlightedTopLabelLayer:(id)arg1;
- (void)setReferenceMaxY:(double)arg1;
- (void)setReferenceMinY:(double)arg1;
- (void)setSegmentsLayer:(id)arg1;
- (void)setUnderlyingBarLayer:(id)arg1;
- (void)setVisibleBarMaxY:(double)arg1;
- (void)setVisibleBarMinY:(double)arg1;
- (id)underlyingBarLayer;
- (void)updateWithAscendingThresholds:(id)arg1 currentHighlightIndex:(unsigned long long)arg2;
- (double)visibleBarMaxY;
- (double)visibleBarMinY;

@end
