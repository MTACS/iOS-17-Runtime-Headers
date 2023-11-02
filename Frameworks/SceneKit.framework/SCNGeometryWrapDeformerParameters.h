
@interface SCNGeometryWrapDeformerParameters : NSObject <NSSecureCoding>

+ (bool)supportsSecureCoding;

- (id)_initForCreateSubclass;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDriverSandwichNode0:(id)arg1 driverSandwichNode1:(id)arg2 deformedNode:(id)arg3 mode:(unsigned long long)arg4 bindingTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg5;
- (id)initWithDriverSandwichNode0:(id)arg1 driverSandwichNode1:(id)arg2 extraLayers:(id)arg3 deformedNode:(id)arg4 mode:(unsigned long long)arg5 bindingTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg6;
- (id)initWithDrivingNode:(id)arg1 deformedNode:(id)arg2 bindingMode:(unsigned long long)arg3 bindingTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg4 drivingNodeUVChannel:(unsigned long long)arg5 deformedNodeUVChannel:(unsigned long long)arg6;

@end
