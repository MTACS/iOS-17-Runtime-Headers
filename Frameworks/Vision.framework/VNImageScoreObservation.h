
@interface VNImageScoreObservation : VNObservation {
    NSNumber * _blurScore;
    NSNumber * _exposureScore;
}

@property (nonatomic, retain) NSNumber *blurScore;
@property (nonatomic, retain) NSNumber *exposureScore;

+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)blurScore;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)exposureScore;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setBlurScore:(id)arg1;
- (void)setExposureScore:(id)arg1;
- (id)vn_cloneObject;

@end
