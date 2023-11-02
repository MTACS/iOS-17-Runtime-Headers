
@interface SBAlwaysOnBrightnessCurveController : NSObject {
    BrightnessSystemClient * _brightnessSystemClient;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _lock_didSetAlwaysOnBrightnessCurve;
    bool  _lock_useAlwaysOnBrightnessCurve;
}

@property (getter=isUsingAlwaysOnBrightnessCurve, nonatomic, readonly) bool useAlwaysOnBrightnessCurve;

- (void).cxx_destruct;
- (id)init;
- (id)initWithBrightnessSystemClient:(id)arg1;
- (bool)isUsingAlwaysOnBrightnessCurve;
- (void)setUseAlwaysOnBrightnessCurve:(bool)arg1 withRampDuration:(double)arg2;

@end
