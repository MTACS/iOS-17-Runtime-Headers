
@interface PTEffectPersonSegmentationCVL : NSObject <PTEffectPersonSegmentation> {
    PTMetalContext * _metalContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)lastNetworkVersion;
+ (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })segmentationSizeForColorSize:(struct CGSize { double x1; double x2; })arg1;

- (void).cxx_destruct;
- (id)initWithMetalContext:(id)arg1 colorSize:(struct CGSize { double x1; double x2; })arg2 sharedResources:(id)arg3;
- (id)runPersonSegmentationForPixelBuffer:(struct __CVBuffer { }*)arg1;

@end
