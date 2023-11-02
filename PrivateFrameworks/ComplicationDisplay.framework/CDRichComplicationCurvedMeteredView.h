
@interface CDRichComplicationCurvedMeteredView : CDRichComplicationCurveView {
    NSArray * _meterLayers;
}

@property (nonatomic, retain) NSArray *meterLayers;

- (void).cxx_destruct;
- (void)_setupShapeLayer:(id)arg1;
- (id)_shapeStrokeColor;
- (void)_updateGradient;
- (void)colorMetersWithProgress:(double)arg1;
- (id /* block */)customizeMeterLayerBlock;
- (id)meterLayers;
- (double)rotationAngleAtProgress:(float)arg1;
- (void)setMeterLayers:(id)arg1;
- (void)setProgress:(double)arg1;

@end
