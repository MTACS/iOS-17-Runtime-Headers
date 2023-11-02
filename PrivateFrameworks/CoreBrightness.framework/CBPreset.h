
@interface CBPreset : NSObject {
    bool  _autoBrighnessDisabled;
    bool  _brightnessDisabled;
    bool  _nightShiftDisabled;
    bool  _referenceMode;
    bool  _trueToneDisabled;
}

@property (readonly) bool autoBrighnessDisabled;
@property (readonly) bool brightnessDisabled;
@property (readonly) bool nightShiftDisabled;
@property (readonly) bool referenceMode;
@property (readonly) bool trueToneDisabled;

+ (id)newActive:(unsigned long long)arg1;

- (bool)autoBrighnessDisabled;
- (bool)brightnessDisabled;
- (id)initWithCAPreset:(id)arg1;
- (bool)nightShiftDisabled;
- (bool)referenceMode;
- (bool)trueToneDisabled;

@end
