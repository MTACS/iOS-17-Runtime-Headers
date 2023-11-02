
@interface NTKSiderealColorManager : NSObject {
    NTKAltitudeColorCurve * _astronomicalTwilight;
    NTKAltitudeColorCurve * _astronomicalTwilightCurve_p3;
    NTKAltitudeColorCurve * _civilTwilight;
    NTKAltitudeColorCurve * _civilTwilightCurve_p3;
    NTKAltitudeColorCurve * _dayDiskBloom;
    NSArray * _dayGradient;
    NSArray * _dayGradientCurve_p3;
    NTKAltitudeColorCurve * _dialBackground;
    NTKAltitudeColorCurve * _dialBackgroundCurve_p3;
    NTKAltitudeColorCurve * _innerComplication;
    NTKAltitudeColorCurve * _nauticalTwilight;
    NTKAltitudeColorCurve * _nauticalTwilightCurve_p3;
    NTKAltitudeColorCurve * _outerComplication;
    NSMutableArray * _updateHandlers;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_createElementsFromDict:(id)arg1;
- (id)_init;
- (void)_notifyHandlers;
- (void)addColorUpdateHandler:(id /* block */)arg1;
- (id)astronomicalTwilightColorCurve;
- (id)astronomicalTwilightCurveP3;
- (id)civilTwilightColorCurve;
- (id)civilTwilightCurveP3;
- (id)dayDiskBloomColorCurve;
- (id)dayGradientColorCurves;
- (id)dayGradientCurveP3;
- (void)dealloc;
- (id)dialBackgroundColorCurve;
- (id)dialBackgroundCurveP3;
- (id)innerComplicationColorCurve;
- (id)nauticalTwilightColorCurve;
- (id)nauticalTwilightCurveP3;
- (id)outerComplicationColorCurve;
- (void)setSunAltitude:(double)arg1;

@end
