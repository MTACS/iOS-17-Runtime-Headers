
@interface PICropAutoCalculator : NUAutoCalculator <NUTimeBased, PIFaceObservingAutoCalculator> {
    NSNumber * _autoStraightenDominantAngleDiffThreshold;
    NSNumber * _autoStraightenVerticalAngleThreshold;
    bool  _debugFilesEnabled;
    NSString * _debugFilesPrefix;
    PIFaceObservationCache * _faceObservationCache;
    double  _maxAutoStraighten;
    double  _minAutoStraighten;
    bool  _shouldPerformAutoCrop;
    bool  _shouldPerformAutoStraighten;
    bool  _shouldUseAutoStraightenVerticalDetector;
}

@property (copy) NSNumber *autoStraightenDominantAngleDiffThreshold;
@property (copy) NSNumber *autoStraightenVerticalAngleThreshold;
@property (readonly, copy) NSString *debugDescription;
@property bool debugFilesEnabled;
@property (copy) NSString *debugFilesPrefix;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PIFaceObservationCache *faceObservationCache;
@property (readonly) unsigned long long hash;
@property double maxAutoStraighten;
@property double minAutoStraighten;
@property bool shouldPerformAutoCrop;
@property bool shouldPerformAutoStraighten;
@property bool shouldUseAutoStraightenVerticalDetector;
@property (readonly) Class superclass;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } time;

+ (id)updateCropAdjustment:(id)arg1 after:(id)arg2 error:(out id*)arg3;

- (void).cxx_destruct;
- (id)autoStraightenDominantAngleDiffThreshold;
- (id)autoStraightenVerticalAngleThreshold;
- (bool)debugFilesEnabled;
- (id)debugFilesPrefix;
- (id)faceObservationCache;
- (id)imageProperties:(out id*)arg1;
- (id)initWithComposition:(id)arg1;
- (double)maxAutoStraighten;
- (double)minAutoStraighten;
- (void)setAutoStraightenDominantAngleDiffThreshold:(id)arg1;
- (void)setAutoStraightenVerticalAngleThreshold:(id)arg1;
- (void)setDebugFilesEnabled:(bool)arg1;
- (void)setDebugFilesPrefix:(id)arg1;
- (void)setFaceObservationCache:(id)arg1;
- (void)setMaxAutoStraighten:(double)arg1;
- (void)setMinAutoStraighten:(double)arg1;
- (void)setShouldPerformAutoCrop:(bool)arg1;
- (void)setShouldPerformAutoStraighten:(bool)arg1;
- (void)setShouldUseAutoStraightenVerticalDetector:(bool)arg1;
- (bool)shouldPerformAutoCrop;
- (bool)shouldPerformAutoStraighten;
- (bool)shouldUseAutoStraightenVerticalDetector;
- (void)submit:(id /* block */)arg1;
- (bool)undoExifOrientation:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; }*)arg1 error:(out id*)arg2;

@end
