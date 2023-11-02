
@interface VNObjectTrackerLegacyFaceCore : VNTracker {
    NSDictionary * _detectOptions;
    FaceCoreDetector * _detector;
    NSDictionary * _extractOptions;
}

+ (id)_convertOptionsToFaceCoreDetectOptions:(id)arg1;
+ (id)_convertOptionsToFaceCoreExtractOptions:(id)arg1;
+ (id)_convertOptionsToFaceCoreSetupOptions:(id)arg1;
+ (id)supportedComputeDevicesForOptions:(id)arg1 error:(id*)arg2;
+ (Class)trackerObservationClass;

- (void).cxx_destruct;
- (id)_detectFacesInImage:(id)arg1 error:(id*)arg2;
- (id)initWithOptions:(id)arg1 error:(id*)arg2;
- (bool)isResettable;
- (bool)reset:(id*)arg1;
- (id)setTrackedObjects:(id)arg1 inFrame:(id)arg2 error:(id*)arg3;
- (id)trackInFrame:(id)arg1 error:(id*)arg2;

@end
