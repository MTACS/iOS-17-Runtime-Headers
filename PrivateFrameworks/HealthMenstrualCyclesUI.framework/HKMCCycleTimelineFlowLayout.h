
@interface HKMCCycleTimelineFlowLayout : UICollectionViewFlowLayout {
    struct CGSize { 
        double width; 
        double height; 
    }  _cellSize;
    NSIndexPath * _centerIndexPath;
    double  _centerPillHeight;
    HKMCCycleTimelinePillConfiguration * _introPillConfiguration;
    double  _offsetFactor;
    double  _pillAspectRatio;
    NSArray * _pillConfigurations;
    double  _totalZoomWidth;
    double  _yOffset;
    double  _zoomAreaOffset;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _zoomRange;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } configuredSize;

+ (Class)layoutAttributesClass;

- (void).cxx_destruct;
- (id)_configurationAtIndex:(long long)arg1;
- (void)_configureLayoutAttributes:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_pillFrameAtZoomIndex:(long long)arg1;
- (double)_pillOriginXAtZoomIndex:(long long)arg1 centerPill:(bool)arg2;
- (struct CGSize { double x1; double x2; })configuredSize;
- (bool)flipsHorizontallyInOppositeLayoutDirection;
- (id)initWithYOffset:(double)arg1 pillConfigurations:(id)arg2 introPillConfiguration:(id)arg3 pillAspectRatio:(double)arg4;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (void)prepareLayout;
- (bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGPoint { double x1; double x2; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x1; double x2; })arg1 withScrollingVelocity:(struct CGPoint { double x1; double x2; })arg2;

@end
