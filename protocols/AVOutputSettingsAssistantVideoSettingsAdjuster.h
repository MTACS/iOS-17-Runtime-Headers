
@protocol AVOutputSettingsAssistantVideoSettingsAdjuster <NSObject>

@required

- (long long)averageBitRateForSourceFormatDescription:(struct opaqueCMFormatDescription { }*)arg1 andTargetFrameRate:(float)arg2 andEncoderSpecification:(NSDictionary *)arg3;
- (NSDictionary *)colorSpaceFromSourceFormatDescriptions:(NSArray *)arg1 andRendererColorSpace:(NSDictionary *)arg2;

@end
