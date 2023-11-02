
@interface VisionCoreEspressoNetworkDescriptor : VisionCoreInferenceNetworkDescriptor

@property (nonatomic, readonly) NSURL *ANESpecificURL;

// Image: /System/Library/PrivateFrameworks/VisionCore.framework/VisionCore

- (id)ANESpecificURL;

// Image: /System/Library/Frameworks/Vision.framework/Vision

- (id)URLForComputeDevice:(id)arg1 error:(id*)arg2;
- (id)modelPathForComputeDevice:(id)arg1 error:(id*)arg2;

@end
