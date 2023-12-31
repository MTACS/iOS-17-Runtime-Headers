
@interface PXWidgetSpec : PXFeatureSpec {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentGuideInsets;
    unsigned long long  _detailsOptions;
    double  _distanceBetweenFooterBaselineAndBottom;
    double  _distanceBetweenFooterBaselineAndFooterBottom;
    double  _distanceBetweenFooterTopAndFooterBaseline;
    double  _distanceBetweenFooteredWidgetContentBottomAndNextHeaderBaseline;
    double  _distanceBetweenFooteredWidgetContentBottomAndNextHeaderlessWidgetContentTop;
    double  _distanceBetweenFooterlessWidgetContentBottomAndBottom;
    double  _distanceBetweenFooterlessWidgetContentBottomAndNextHeaderBaseline;
    double  _distanceBetweenFooterlessWidgetContentBottomAndNextHeaderlessWidgetContentTop;
    double  _distanceBetweenHeaderBaselineAndHeaderBottom;
    double  _distanceBetweenHeaderBaselineAndWidgetContentTop;
    double  _distanceBetweenHeaderTopAndHeaderBaseline;
    double  _distanceBetweenMainContentBottomAndCaptionBaseline;
    double  _distanceBetweenMapViewAndAddressTop;
    double  _distanceBetweenTopAndFirstHeaderBaseline;
    double  _distanceBetweenTopAndHeaderlessWidgetContentTop;
    double  _distanceBetweenWidgetContentBottomAndFooterBaseline;
    struct CGSize { 
        double width; 
        double height; 
    }  _interWidgetSpacing;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentGuideInsets;
@property (nonatomic, readonly) unsigned long long detailsOptions;
@property (nonatomic) double distanceBetweenFooterBaselineAndBottom;
@property (nonatomic) double distanceBetweenFooterBaselineAndFooterBottom;
@property (nonatomic) double distanceBetweenFooterTopAndFooterBaseline;
@property (nonatomic) double distanceBetweenFooteredWidgetContentBottomAndNextHeaderBaseline;
@property (nonatomic) double distanceBetweenFooteredWidgetContentBottomAndNextHeaderlessWidgetContentTop;
@property (nonatomic) double distanceBetweenFooterlessWidgetContentBottomAndBottom;
@property (nonatomic) double distanceBetweenFooterlessWidgetContentBottomAndNextHeaderBaseline;
@property (nonatomic) double distanceBetweenFooterlessWidgetContentBottomAndNextHeaderlessWidgetContentTop;
@property (nonatomic) double distanceBetweenHeaderBaselineAndHeaderBottom;
@property (nonatomic) double distanceBetweenHeaderBaselineAndWidgetContentTop;
@property (nonatomic) double distanceBetweenHeaderTopAndHeaderBaseline;
@property (nonatomic, readonly) double distanceBetweenMainContentBottomAndCaptionBaseline;
@property (nonatomic, readonly) double distanceBetweenMapViewAndAddressTop;
@property (nonatomic) double distanceBetweenTopAndFirstHeaderBaseline;
@property (nonatomic) double distanceBetweenTopAndHeaderlessWidgetContentTop;
@property (nonatomic) double distanceBetweenWidgetContentBottomAndFooterBaseline;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } interWidgetSpacing;

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentGuideInsets;
- (unsigned long long)detailsOptions;
- (double)distanceBetweenFooterBaselineAndBottom;
- (double)distanceBetweenFooterBaselineAndFooterBottom;
- (double)distanceBetweenFooterTopAndFooterBaseline;
- (double)distanceBetweenFooteredWidgetContentBottomAndNextHeaderBaseline;
- (double)distanceBetweenFooteredWidgetContentBottomAndNextHeaderlessWidgetContentTop;
- (double)distanceBetweenFooterlessWidgetContentBottomAndBottom;
- (double)distanceBetweenFooterlessWidgetContentBottomAndNextHeaderBaseline;
- (double)distanceBetweenFooterlessWidgetContentBottomAndNextHeaderlessWidgetContentTop;
- (double)distanceBetweenHeaderBaselineAndHeaderBottom;
- (double)distanceBetweenHeaderBaselineAndWidgetContentTop;
- (double)distanceBetweenHeaderTopAndHeaderBaseline;
- (double)distanceBetweenMainContentBottomAndCaptionBaseline;
- (double)distanceBetweenMapViewAndAddressTop;
- (double)distanceBetweenTopAndFirstHeaderBaseline;
- (double)distanceBetweenTopAndHeaderlessWidgetContentTop;
- (double)distanceBetweenWidgetContentBottomAndFooterBaseline;
- (id)init;
- (id)initWithExtendedTraitCollection:(id)arg1 detailsOptions:(unsigned long long)arg2;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 detailsOptions:(unsigned long long)arg3;
- (struct CGSize { double x1; double x2; })interWidgetSpacing;
- (void)setContentGuideInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDistanceBetweenFooterBaselineAndBottom:(double)arg1;
- (void)setDistanceBetweenFooterBaselineAndFooterBottom:(double)arg1;
- (void)setDistanceBetweenFooterTopAndFooterBaseline:(double)arg1;
- (void)setDistanceBetweenFooteredWidgetContentBottomAndNextHeaderBaseline:(double)arg1;
- (void)setDistanceBetweenFooteredWidgetContentBottomAndNextHeaderlessWidgetContentTop:(double)arg1;
- (void)setDistanceBetweenFooterlessWidgetContentBottomAndBottom:(double)arg1;
- (void)setDistanceBetweenFooterlessWidgetContentBottomAndNextHeaderBaseline:(double)arg1;
- (void)setDistanceBetweenFooterlessWidgetContentBottomAndNextHeaderlessWidgetContentTop:(double)arg1;
- (void)setDistanceBetweenHeaderBaselineAndHeaderBottom:(double)arg1;
- (void)setDistanceBetweenHeaderBaselineAndWidgetContentTop:(double)arg1;
- (void)setDistanceBetweenHeaderTopAndHeaderBaseline:(double)arg1;
- (void)setDistanceBetweenTopAndFirstHeaderBaseline:(double)arg1;
- (void)setDistanceBetweenTopAndHeaderlessWidgetContentTop:(double)arg1;
- (void)setDistanceBetweenWidgetContentBottomAndFooterBaseline:(double)arg1;

@end
