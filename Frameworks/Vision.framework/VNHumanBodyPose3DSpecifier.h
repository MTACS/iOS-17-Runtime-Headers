
@interface VNHumanBodyPose3DSpecifier : VNRecognizedPoints3DSpecifier {
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  _cameraIntrinsics;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _cameraRenderTransformMatrix;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _cameraTransformMatrix;
    float  _heightEstimatedScale;
    NSNumber * _humanHeight;
    struct CGSize { 
        double width; 
        double height; 
    }  _inputSize;
    NSArray * _orderedHumanBodyPose3DKeypoints;
}

@property (nonatomic, readonly) float bodyHeight;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } cameraIntrinsics;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } cameraRenderTransformMatrix;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } cameraTransformMatrix;
@property (nonatomic, readonly) float heightEstimatedScale;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } inputSize;

+ (id)_stringRepresentationForRequestRevision:(unsigned long long)arg1 abpkJoint:(id)arg2 error:(id*)arg3;
+ (id)supportedHumanBodyPose3DKeypointsRev1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)availableGroupKeys;
- (float)bodyHeight;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })cameraIntrinsics;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })cameraRenderTransformMatrix;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })cameraTransformMatrix;
- (void)encodeWithCoder:(id)arg1;
- (float)heightEstimatedScale;
- (id)initWithCoder:(id)arg1;
- (id)initWithHumanBody3DOutput:(id)arg1 originatingRequestSpecifier:(id)arg2;
- (struct CGSize { double x1; double x2; })inputSize;
- (id)pointKeyGroupLabelsMapping;

@end
