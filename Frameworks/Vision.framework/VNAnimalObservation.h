
@interface VNAnimalObservation : VNRecognizedObjectObservation <VNEntityIdentificationModelObservation> {
    VNAnimalprint * _animalprint;
}

@property (nonatomic, readonly) VNAnimalprint *animalprint;

+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)VNEntityIdentificationModelPrintWithOriginatingRequestSpecifier:(id)arg1 error:(id*)arg2;
- (id)animalprint;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAnimalprint:(id)arg1 confidence:(float)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithOriginatingRequestSpecifier:(id)arg1 boundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 confidence:(float)arg3 labels:(id)arg4 groupId:(id)arg5 animalprint:(id)arg6;
- (bool)isEqual:(id)arg1;
- (void)setAnimalprint:(id)arg1;
- (id)vn_cloneObject;

@end
