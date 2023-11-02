
@interface VNModelResourceDescriptor : VNResourceDescriptor

@property (readonly) NSURL *modelURL;

+ (id)descriptorForModelURL:(id)arg1;
+ (id)descriptorForVisionCoreInferenceNetworkDescriptor:(id)arg1;

- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)modelURL;

@end
