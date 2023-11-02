
@interface NUVisionDetectionJob : NURenderJob {
    NSArray * _observations;
}

@property (nonatomic, readonly) NUVisionDetectionRequest *detectionRequest;
@property (nonatomic, copy) NSArray *observations;

- (void).cxx_destruct;
- (void)cleanUp;
- (id)detectionRequest;
- (id)initWithRequest:(id)arg1;
- (id)initWithVisionDetectionRequest:(id)arg1;
- (id)observations;
- (bool)render:(out id*)arg1;
- (id)result;
- (id)scalePolicy;
- (void)setObservations:(id)arg1;
- (bool)wantsCompleteStage;
- (bool)wantsOutputGeometry;
- (bool)wantsOutputImage;

@end
