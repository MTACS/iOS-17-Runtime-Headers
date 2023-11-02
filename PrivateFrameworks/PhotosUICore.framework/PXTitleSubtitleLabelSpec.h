
@interface PXTitleSubtitleLabelSpec : PXViewSpec {
    double  _distanceBetweenTitleBaselineAndSubtitleBaseline;
    double  _interLabelSpacing;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _padding;
    PXLabelSpec * _subtitleLabelSpec;
    PXLabelSpec * _titleLabelSpec;
}

@property (nonatomic) double distanceBetweenTitleBaselineAndSubtitleBaseline;
@property (nonatomic) double interLabelSpacing;
@property (nonatomic, readonly) double maximumTitleSubtitleHeight;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } padding;
@property (nonatomic, retain) PXLabelSpec *subtitleLabelSpec;
@property (nonatomic, retain) PXLabelSpec *titleLabelSpec;

+ (id)memoriesTitleSubtitleSpecForContext:(struct { long long x1; long long x2; long long x3; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_4_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_4_1_2; } x4; struct UIEdgeInsets { double x_5_1_1; double x_5_1_2; double x_5_1_3; double x_5_1_4; } x5; bool x6; })arg1;
+ (id)memoriesTitleSubtitleSpecForTileKind:(long long)arg1 featureSpec:(id)arg2 boundedByRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
+ (id)memoriesTitleSubtitleSpecForTileKind:(long long)arg1 gadgetSpec:(id)arg2 boundedByRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
+ (id)memoriesTitleSubtitleSpecForTileKind:(long long)arg1 viewMode:(id)arg2 boundedByRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
+ (id)memoriesTitleSubtitleSpecForViewSpecDescriptor:(struct PXViewSpecDescriptor { long long x1; unsigned long long x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; })arg1 featureSpec:(id)arg2;
+ (id)px_headerTitleSubtitleLabelSpecForZoomLevel:(long long)arg1 featureSpec:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)distanceBetweenTitleBaselineAndSubtitleBaseline;
- (unsigned long long)hash;
- (double)interLabelSpacing;
- (bool)isEqual:(id)arg1;
- (double)maximumTitleSubtitleHeight;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })padding;
- (void)setDistanceBetweenTitleBaselineAndSubtitleBaseline:(double)arg1;
- (void)setInterLabelSpacing:(double)arg1;
- (void)setPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSubtitleLabelSpec:(id)arg1;
- (void)setTitleLabelSpec:(id)arg1;
- (id)subtitleLabelSpec;
- (id)titleLabelSpec;

@end
