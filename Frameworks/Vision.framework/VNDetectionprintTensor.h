
@interface VNDetectionprintTensor : VNEspressoModelImageprint {
    VisionCoreEspressoTensorShape * _shape;
}

@property (nonatomic, readonly) VisionCoreEspressoTensorShape *shape;

+ (unsigned long long)confidenceTypeForOriginatingRequestSpecifier:(id)arg1;
+ (unsigned int)currentCodingVersion;
+ (unsigned long long)currentSerializationVersion;
+ (id)currentVersion;
+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)arg1;
+ (unsigned long long)serializationMagicNumber;
+ (bool)shouldAssumeOriginatingRequestClassForHeaderSerializationVersion:(unsigned int)arg1;
+ (bool)shouldIgnoreLagecyLabelsAndConfidenceForHeaderSerializationVersion:(unsigned int)arg1;
+ (bool)supportsSecureCoding;
+ (id)tensorFromCSUBuffer:(id)arg1 originatingRequestSpecifier:(id)arg2 error:(id*)arg3;
+ (id)tensorFromEspressoBuffer:(struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; })arg1 originatingRequestSpecifier:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)VNEspressoModelImageprintMLMultiArrayWithConstraint:(id)arg1 error:(id*)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDescriptorData:(id)arg1 elementType:(unsigned long long)arg2 elementCount:(unsigned long long)arg3 originatingRequestSpecifier:(id)arg4;
- (id)shape;

@end
