
@interface HapticCommandConverter : NSObject {
    HapticServerConfig * _serverConfig;
}

@property (readonly) HapticServerConfig *serverConfig;

- (void).cxx_destruct;
- (id)CHtoAVParameterCurve:(id)arg1;
- (unsigned long long)continuousHapticEventTypeForDefaultSharpness:(bool)arg1;
- (unsigned long long)continuousHapticEventTypeFromSharpness:(float)arg1 sustained:(bool)arg2;
- (id)eventForAudioEventType:(unsigned long long)arg1 time:(double)arg2 eventParams:(id)arg3 duration:(double)arg4;
- (id)eventForContinuousHapticEventType:(int)arg1 time:(double)arg2 params:(id)arg3 duration:(double)arg4;
- (id)eventForDynamicParameterEntry:(id)arg1;
- (id)eventForEventEntry:(id)arg1 engine:(id)arg2 privileged:(bool)arg3;
- (id)eventForLegacyTransientHapticAtTime:(double)arg1 params:(id)arg2 duration:(double)arg3;
- (id)eventForParameterCurveEntry:(id)arg1;
- (id)eventForSPIEventType:(unsigned long long)arg1 time:(double)arg2 eventParams:(id)arg3 duration:(double)arg4;
- (id)eventForTransientHapticAtTime:(double)arg1 params:(id)arg2 duration:(double)arg3;
- (id)initWithServerConfig:(id)arg1;
- (float)limitDynamicParameter:(id)arg1 value:(float)arg2 parameter:(id)arg3;
- (float)limitEventParameter:(id)arg1 value:(float)arg2 parameter:(id)arg3 eventType:(id)arg4;
- (id)serverConfig;
- (unsigned long long)transientHapticEventTypeForDefaultSharpness;
- (unsigned long long)transientHapticEventTypeFromSharpness:(float)arg1;

@end
