
@interface VCPInterAssetAnalyzer : NSObject

+ (bool)canUseLastFrameOfAsset:(id)arg1 withResources:(id)arg2;
+ (struct CGSize { double x1; double x2; })thumbnailSizeForAsset:(id)arg1 withResources:(id)arg2;

- (int)_generateLastFrameDistanceDescriptor:(id*)arg1 withDescriptorClass:(Class)arg2 forAsset:(id)arg3;
- (struct __CVBuffer { }*)_getThumbnailForAsset:(id)arg1 withResouces:(id)arg2 andPixelFormat:(int)arg3;
- (int)computeDistance:(float*)arg1 fromArray:(id)arg2 toArray:(id)arg3;
- (int)computeDistance:(float*)arg1 withDescriptorClass:(id)arg2 fromAsset:(id)arg3 toAsset:(id)arg4;
- (int)generateDistanceDescriptor:(id*)arg1 withDescriptorClass:(Class)arg2 forAsset:(id)arg3 withResources:(id)arg4 lastFrame:(bool)arg5;
- (id)init;

@end
