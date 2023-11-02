
@interface AVTEyeSkinningDescriptor : NSObject {
    SCNNode * _leftEyeJoint;
    long long  _leftEyeLookDownTargetIndex;
    long long  _leftEyeLookInTargetIndex;
    long long  _leftEyeLookOutTargetIndex;
    long long  _leftEyeLookUpTargetIndex;
    SCNNode * _readMorpherNode;
    SCNNode * _rightEyeJoint;
    long long  _rightEyeLookDownTargetIndex;
    long long  _rightEyeLookInTargetIndex;
    long long  _rightEyeLookOutTargetIndex;
    long long  _rightEyeLookUpTargetIndex;
}

- (void).cxx_destruct;

@end
