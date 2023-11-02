
@protocol BWEspressoInferenceTensorMemoryProvider <NSObject>

@required

- (struct __IOSurface { }*)backingMemoryForMetadataRequirement:(BWInferenceMetadataRequirement *)arg1 bindingName:(NSString *)arg2 surfaceProperties:(NSDictionary *)arg3;

@end
