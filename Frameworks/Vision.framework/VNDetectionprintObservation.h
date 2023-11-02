
@interface VNDetectionprintObservation : VNObservation {
    VNDetectionprint * _detectionprint;
}

@property (readonly, copy) VNDetectionprint *detectionprint;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)VNCoreMLTransformerDetectionprintAndReturnError:(id*)arg1;
- (id)detectionprint;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithOriginatingRequestSpecifier:(id)arg1 detectionprint:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)vn_cloneObject;

@end
