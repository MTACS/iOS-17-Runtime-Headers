
@interface CBTwilightParams : CBChromaticCorrectionParams {
    CBTwilightNightShiftAdaptationParams * _nightShiftAdaptation;
}

@property (readonly) CBTwilightNightShiftAdaptationParams *nightShiftAdaptation;

- (id)initWithService:(unsigned int)arg1;
- (id)nightShiftAdaptation;

@end
