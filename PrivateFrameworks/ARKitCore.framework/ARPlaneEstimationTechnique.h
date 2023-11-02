
@interface ARPlaneEstimationTechnique : ARTechnique <ARWorldTrackingTechniqueObserver> {
    ARPlaneData * _planeResultData;
    ARRawSceneUnderstandingData * _rawSceneUnderstandingData;
    NSObject<OS_dispatch_semaphore> * _semaphoreResult;
    ARWorldTrackingTechnique * _worldTrackingTechnique;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) ARWorldTrackingTechnique *worldTrackingTechnique;

+ (id)_detectPlanesWithDetector:(struct CV3DSurfaceDetectionContext { }*)arg1 types:(unsigned long long)arg2 camera:(id)arg3 referenceFeaturePoints:(id)arg4 referenceOriginTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg5;
+ (id)detectPlanes:(unsigned long long)arg1 withFrame:(id)arg2;

- (void).cxx_destruct;
- (id)_fullDescription;
- (void)dealloc;
- (id)initWithTrackingTechnique:(id)arg1;
- (bool)isBusy;
- (bool)isEqual:(id)arg1;
- (bool)reconfigurableFrom:(id)arg1;
- (void)reconfigureFrom:(id)arg1;
- (void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2;
- (id)resultDataClasses;
- (void)setWorldTrackingTechnique:(id)arg1;
- (void)siblingTechniquesDidChange:(id)arg1;
- (void)technique:(id)arg1 didDetectPlane:(id)arg2 timestamp:(double)arg3;
- (void)technique:(id)arg1 didOutputSceneUnderstandingData:(id)arg2 timestamp:(double)arg3;
- (id)worldTrackingTechnique;

@end
