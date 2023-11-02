
@interface PTFrameRateRangeSettings : PTSettings <BSDescriptionProviding> {
    int  _maximum;
    int  _minimum;
    int  _preferred;
    unsigned long long  _preset;
    unsigned short  _reason;
    unsigned short  _reasonComponent;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct CAFrameRateRange { float x1; float x2; float x3; } frameRateRange;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned int highFrameRateReason;
@property (nonatomic) int maximum;
@property (nonatomic) int minimum;
@property (nonatomic) int preferred;
@property (nonatomic) unsigned long long preset;
@property (nonatomic) unsigned short reason;
@property (nonatomic) unsigned short reasonComponent;
@property (readonly) Class superclass;

+ (bool)ignoresKey:(id)arg1;
+ (id)settingsControllerModule;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)drillDownSummary;
- (struct CAFrameRateRange { float x1; float x2; float x3; })frameRateRange;
- (unsigned int)highFrameRateReason;
- (int)maximum;
- (int)minimum;
- (int)preferred;
- (unsigned long long)preset;
- (unsigned short)reason;
- (unsigned short)reasonComponent;
- (void)setDefaultValues;
- (void)setFrameRateRange:(struct CAFrameRateRange { float x1; float x2; float x3; })arg1;
- (void)setFrameRateRange:(struct CAFrameRateRange { float x1; float x2; float x3; })arg1 highFrameRateReason:(unsigned int)arg2;
- (void)setFrameRateRange:(struct CAFrameRateRange { float x1; float x2; float x3; })arg1 reasonComponent:(unsigned short)arg2 reason:(unsigned short)arg3;
- (void)setHighFrameRateReason:(unsigned int)arg1;
- (void)setMaximum:(int)arg1;
- (void)setMinimum:(int)arg1;
- (void)setPreferred:(int)arg1;
- (void)setPreset:(unsigned long long)arg1;
- (void)setReason:(unsigned short)arg1;
- (void)setReasonComponent:(unsigned short)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)validate;

@end
