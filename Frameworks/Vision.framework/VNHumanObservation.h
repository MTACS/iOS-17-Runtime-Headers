
@interface VNHumanObservation : VNDetectedObjectObservation <VNEntityIdentificationModelObservation> {
    VNTorsoprint * _torsoprint;
    bool  _upperBodyOnly;
}

@property (nonatomic, readonly) VNTorsoprint *torsoprint;
@property (nonatomic, readonly) bool upperBodyOnly;

+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)VNEntityIdentificationModelPrintWithOriginatingRequestSpecifier:(id)arg1 error:(id*)arg2;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithOriginatingRequestSpecifier:(id)arg1 boundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 upperBodyOnly:(bool)arg3 confidence:(float)arg4;
- (bool)isEqual:(id)arg1;
- (void)setTorsoprint:(id)arg1;
- (id)torsoprint;
- (bool)upperBodyOnly;
- (id)vn_cloneObject;

@end
