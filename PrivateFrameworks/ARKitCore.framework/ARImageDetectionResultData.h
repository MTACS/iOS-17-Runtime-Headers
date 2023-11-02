
@interface ARImageDetectionResultData : NSObject <ARQATraceable, ARResultData, NSCopying> {
    ARCamera * _currentCamera;
    NSArray * _detectedImages;
    bool  _detectionOnly;
    bool  _predicted;
    bool  _providesWorldTrackingCameraPose;
    double  _timestamp;
}

@property (nonatomic, copy) ARCamera *currentCamera;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *detectedImages;
@property (nonatomic) bool detectionOnly;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool predicted;
@property (nonatomic) bool providesWorldTrackingCameraPose;
@property (readonly) Class superclass;
@property (nonatomic) double timestamp;
@property (nonatomic, readonly) NSDictionary *tracingEntry;

+ (id)tracingEntryFormat;

- (void).cxx_destruct;
- (id)anchorsForCameraWithTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 referenceOriginTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2 existingAnchors:(id)arg3 anchorsToRemove:(id)arg4;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentCamera;
- (id)description;
- (id)detectedImages;
- (bool)detectionOnly;
- (bool)isEqual:(id)arg1;
- (bool)predicted;
- (bool)providesWorldTrackingCameraPose;
- (void)setCurrentCamera:(id)arg1;
- (void)setDetectedImages:(id)arg1;
- (void)setDetectionOnly:(bool)arg1;
- (void)setPredicted:(bool)arg1;
- (void)setProvidesWorldTrackingCameraPose:(bool)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;
- (id)tracingEntry;

@end
