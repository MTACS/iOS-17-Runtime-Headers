
@interface AVTMorpherDrivenMaterialDescriptor : NSObject {
    SCNMaterial * _material;
    long long  _morphTargetIndex;
    NSString * _propertyName;
    SCNNode * _readMorpherNode;
}

- (void).cxx_destruct;

@end
