
@interface VisionCoreTensorDescriptor : VisionCoreDescriptor {
    unsigned long long  _dataType;
    NSString * _name;
    VisionCoreTensorShape * _shape;
    VisionCoreTensorStrides * _strides;
}

@property (nonatomic, readonly) unsigned long long dataType;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) VisionCoreTensorShape *shape;
@property (nonatomic, readonly) unsigned long long storageByteCount;
@property (nonatomic, readonly) VisionCoreTensorStrides *strides;

// Image: /System/Library/PrivateFrameworks/VisionCore.framework/VisionCore

+ (id)descriptorForEspressoBlobDimensions:(struct { char *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; })arg1 dataType:(unsigned long long)arg2 error:(id*)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)E5RTExecutionContextAssignNewTensorInstanceToNamedObjects:(id)arg1 error:(id*)arg2;
- (id)E5RTExecutionContextNewIOSurfacePropertiesAndReturnError:(id*)arg1;
- (id)confidencesDescriptorWithLabelsFileURL:(id)arg1 error:(id*)arg2;
- (unsigned long long)dataType;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)getByteOffset:(unsigned long long*)arg1 forPosition:(const unsigned long long*)arg2 rank:(unsigned long long)arg3 error:(id*)arg4;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 dataType:(unsigned long long)arg2 shape:(id)arg3 strides:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)shape;
- (unsigned long long)storageByteCount;
- (id)strides;

// Image: /System/Library/Frameworks/Vision.framework/Vision

- (bool)getVNElementType:(unsigned long long*)arg1 error:(id*)arg2;

@end
