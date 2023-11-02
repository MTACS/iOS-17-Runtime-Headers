
@interface ARImageAnchor : ARAnchor <ARTrackable> {
    bool  _detectionOnly;
    double  _estimatedScaleFactor;
    bool  _isTracked;
    ARReferenceImage * _referenceImage;
    NSUUID * _referenceImageUUID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDetectionOnly, nonatomic) bool detectionOnly;
@property (nonatomic, readonly) double estimatedScaleFactor;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isTracked;
@property (nonatomic, readonly) ARReferenceImage *referenceImage;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithTrackedState:(bool)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (double)estimatedScaleFactor;
- (id)initWithAnchor:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithReferenceImage:(id)arg1 transform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2 detectionOnly:(bool)arg3 tracked:(bool)arg4;
- (bool)isDetectionOnly;
- (bool)isTracked;
- (id)name;
- (id)referenceImage;
- (void)setDetectionOnly:(bool)arg1;
- (void)setEstimatedScaleFactor:(double)arg1;
- (void)setIsTracked:(bool)arg1;

@end
