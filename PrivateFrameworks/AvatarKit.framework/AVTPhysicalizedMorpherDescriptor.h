
@interface AVTPhysicalizedMorpherDescriptor : NSObject {
    unsigned long long  _backwardMorphTargetIndex;
    unsigned long long  _downwardMorphTargetIndex;
    SCNNode * _drivingNode;
    SCNNode * _extraSimulationFactorReadMorpherNode;
    unsigned long long  _extraSimulationFactorTargetIndex;
    unsigned long long  _forwardMorphTargetIndex;
    unsigned long long  _leftwardMorphTargetIndex;
    bool  _mirrored;
    SCNNode * _referenceNode;
    unsigned long long  _rightwardMorphTargetIndex;
    float  _simulationFactor;
    unsigned long long  _upwardMorphTargetIndex;
    SCNMorpher * _writeMorpher;
}

- (void).cxx_destruct;
- (id)description;

@end
