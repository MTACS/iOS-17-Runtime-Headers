
@interface HKAxisConfiguration : NSObject {
    <HKAxisLabelDataSource> * _labelDataSource;
    NSNumber * _maxLabelWidth;
    long long  _maxLabels;
    long long  _minLabels;
    bool  _overrideNoTopBaseline;
    HKAxisStyle * _preferredStyle;
    HKCoordinateTransform * _transform;
    <HKZoomScale> * _zoomScaleEngine;
}

@property (nonatomic) <HKAxisLabelDataSource> *labelDataSource;
@property (nonatomic, retain) NSNumber *maxLabelWidth;
@property (nonatomic) long long maxLabels;
@property (nonatomic) long long minLabels;
@property (nonatomic) bool overrideNoTopBaseline;
@property (nonatomic, retain) HKAxisStyle *preferredStyle;
@property (nonatomic, retain) HKCoordinateTransform *transform;
@property (nonatomic, retain) <HKZoomScale> *zoomScaleEngine;

- (void).cxx_destruct;
- (void)applyOverridesFromAxisConfiguration:(id)arg1;
- (id)init;
- (id)labelDataSource;
- (id)maxLabelWidth;
- (long long)maxLabels;
- (long long)minLabels;
- (bool)overrideNoTopBaseline;
- (id)preferredStyle;
- (void)setLabelDataSource:(id)arg1;
- (void)setMaxLabelWidth:(id)arg1;
- (void)setMaxLabels:(long long)arg1;
- (void)setMinLabels:(long long)arg1;
- (void)setOverrideNoTopBaseline:(bool)arg1;
- (void)setPreferredStyle:(id)arg1;
- (void)setTransform:(id)arg1;
- (void)setZoomScaleEngine:(id)arg1;
- (id)transform;
- (id)zoomScaleEngine;

@end
