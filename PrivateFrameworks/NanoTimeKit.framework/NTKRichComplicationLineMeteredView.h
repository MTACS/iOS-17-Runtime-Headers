
@interface NTKRichComplicationLineMeteredView : NTKRichComplicationLineView {
    NSArray * _meterLayers;
}

@property (nonatomic, retain) NSArray *meterLayers;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })_pointAtProgress:(float)arg1;
- (void)_setupShapeLayer:(id)arg1;
- (id)_shapeStrokeColor;
- (void)_updateGradient;
- (void)colorMetersWithProgress:(double)arg1;
- (id)meterLayers;
- (void)setMeterLayers:(id)arg1;
- (void)setProgress:(double)arg1;

@end
