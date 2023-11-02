
@protocol CHHapticDeviceCapability

@required

- (<CHHapticParameterAttributes> *)attributesForDynamicParameter:(NSString *)arg1 error:(id*)arg2;
- (<CHHapticParameterAttributes> *)attributesForEventParameter:(NSString *)arg1 eventType:(NSString *)arg2 error:(id*)arg3;
- (bool)supportsAudio;
- (bool)supportsHaptics;

@end
