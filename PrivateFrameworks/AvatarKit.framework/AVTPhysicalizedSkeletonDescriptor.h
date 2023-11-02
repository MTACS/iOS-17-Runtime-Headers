
@interface AVTPhysicalizedSkeletonDescriptor : NSObject {
    SCNNode * _drivingNode;
    void _forwardBackRotation;
    void _leftRightRotation;
    SCNNode * _referenceNode;
    SCNNode * _rootJoint;
    unsigned long long  _side;
    float  _simulationFactor;
    NSArray * _targetNodes;
    void _upDownRotation;
}

- (void).cxx_destruct;
- (id)description;

@end
