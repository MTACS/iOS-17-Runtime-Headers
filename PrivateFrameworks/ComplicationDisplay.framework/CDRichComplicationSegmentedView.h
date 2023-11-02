
@interface CDRichComplicationSegmentedView : CDRichComplicationCurveView {
    NSMutableArray * _segments;
}

@property (nonatomic, retain) NSMutableArray *segments;

+ (bool)isXL;

- (void).cxx_destruct;
- (void)_addSegmentsToLayer:(id)arg1;
- (double)_arcAngleWithOuterRadius:(double)arg1 segmentGapAngle:(double)arg2 numberOfSegments:(unsigned long long)arg3;
- (id)_colorForSegment:(id)arg1;
- (long long)_segmentShapeStyleForIndex:(unsigned long long)arg1 angle:(double)arg2;
- (void)_setupShapeLayer:(id)arg1;
- (id)_shapeStrokeColor;
- (void)_updateSegmentsWithColors:(id)arg1;
- (id)segments;
- (void)setGradientColors:(id)arg1;
- (void)setGradientColors:(id)arg1 locations:(id)arg2;
- (void)setProgress:(double)arg1;
- (void)setSegments:(id)arg1;

@end
