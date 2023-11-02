
@interface _PIParallaxClockMaterialJob : NURenderJob {
    NSNumber * _luminanceValue;
}

@property (nonatomic, retain) NSNumber *luminanceValue;

- (void).cxx_destruct;
- (id)clockMaterialRequest;
- (id)luminanceValue;
- (bool)render:(out id*)arg1;
- (id)result;
- (id)scalePolicy;
- (void)setLuminanceValue:(id)arg1;
- (bool)wantsCompleteStage;
- (bool)wantsOutputGeometry;
- (bool)wantsOutputImage;
- (bool)wantsRenderStage;

@end
