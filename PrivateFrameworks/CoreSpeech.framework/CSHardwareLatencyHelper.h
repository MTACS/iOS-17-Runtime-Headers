
@interface CSHardwareLatencyHelper : NSObject

+ (id)sharedInstance;

- (id)_adjustmentSecondsFromLatencyInfo:(id)arg1 error:(id*)arg2;
- (id)_hardwareLatenciesUsingStreamHandle:(unsigned long long)arg1 andVoiceController:(id)arg2;
- (id)_hardwareLatencyAdjustmentSeconds:(id)arg1 hwLatencyType:(unsigned long long)arg2 error:(id*)arg3;
- (id)_hardwareLatencyAdjustmentSecondsUsingStreamHandle:(unsigned long long)arg1 andVoiceController:(id)arg2;
- (bool)_valuesAreMinimalyValidForInfoDictionary:(id)arg1 type:(unsigned long long)arg2;
- (bool)addHWLatencyToOption:(id)arg1 withCorrection:(double)arg2 streamHandle:(unsigned long long)arg3 voiceController:(id)arg4;

@end
