
@protocol BWRendererResourceProvider <NSObject>

@required

- (BWColorLookupCache *)provideColorLookupCache;
- (BWCoreImageFilterRenderer *)provideCoreImageFilterRenderer;
- (BWMetalColorCubeRenderer *)provideMetalFilterRenderer;
- (BWStillImageCoreImageBlurMapRenderer *)provideStillImageCoreImageBlurMapRenderer;
- (BWStillImageMetalBlurMapRenderer *)provideStillImageMetalBlurMapRenderer;
- (BWStillImageMetalSDOFRenderer *)provideStillImageMetalSDOFRenderer;
- (<BWFilterRenderer> *)provideStreamingSDOFFilterRenderer;

@end
