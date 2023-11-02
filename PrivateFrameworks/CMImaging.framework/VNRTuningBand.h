
@interface VNRTuningBand : NSObject {
    float  _deghostBoostFactorScaling;
    VNRGainValueArray * _deghostBoostFactorScalingGVA;
    float  _deghostPatchSigmaScaling;
    VNRGainValueArray * _deghostPatchSigmaScalingGVA;
    float  _fusionStrengthScaling;
    VNRGainValueArray * _fusionStrengthScalingGVA;
}

- (void).cxx_destruct;
- (id)initWithTuningParamsDict:(id)arg1;
- (int)updateWithGain:(float)arg1;

@end
