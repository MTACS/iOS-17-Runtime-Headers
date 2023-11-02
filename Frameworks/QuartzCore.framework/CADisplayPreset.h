
@interface CADisplayPreset : NSObject {
    bool  _allowAutoBrightness;
    bool  _allowNightShift;
    bool  _allowTrueTone;
    bool  _isReference;
    double  _maxSliderBrightness;
    double  _minSliderBrightness;
    CAUserAdjustment * _userAdjustment;
}

@property (readonly) bool allowAutoBrightness;
@property (readonly) bool allowNightShift;
@property (readonly) bool allowTrueTone;
@property (readonly) bool isReference;
@property (readonly) double maxSliderBrightness;
@property (readonly) double minSliderBrightness;
@property (readonly) CAUserAdjustment *userAdjustment;

- (bool)allowAutoBrightness;
- (bool)allowNightShift;
- (bool)allowTrueTone;
- (void)applyUserAdjustmentCommand:(id)arg1;
- (void)dealloc;
- (id)initWithIsReference:(bool)arg1 userAdjustment:(id)arg2;
- (bool)isReference;
- (double)maxSliderBrightness;
- (double)minSliderBrightness;
- (id)userAdjustment;
- (id)userAdjustmentCommand;

@end
