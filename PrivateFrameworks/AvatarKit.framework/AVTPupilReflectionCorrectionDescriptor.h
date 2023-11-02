
@interface AVTPupilReflectionCorrectionDescriptor : NSObject {
    SCNMaterial * _leftEyeMaterial;
    long long  _leftEyeTargetIndex;
    SCNNode * _readMorpherNode;
    SCNMaterial * _rightEyeMaterial;
    long long  _rightEyeTargetIndex;
}

- (void).cxx_destruct;

@end
