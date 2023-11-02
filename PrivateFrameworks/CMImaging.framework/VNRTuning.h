
@interface VNRTuning : NSObject {
    NSArray * _chromaBands;
    float  _deghostBoostFactor;
    VNRGainValueArray * _deghostBoostFactorGVA;
    float  _deghostPatchSigmaChroma;
    VNRGainValueArray * _deghostPatchSigmaChromaGVA;
    float  _deghostPatchSigmaLuma;
    VNRGainValueArray * _deghostPatchSigmaLumaGVA;
    float  _fusionStrengthChroma;
    VNRGainValueArray * _fusionStrengthChromaGVA;
    float  _fusionStrengthLuma;
    VNRGainValueArray * _fusionStrengthLumaGVA;
    float  _ghostAttenuationBreakthroughSigmaChroma;
    VNRGainValueArray * _ghostAttenuationBreakthroughSigmaChromaGVA;
    float  _ghostAttenuationBreakthroughSigmaLuma;
    VNRGainValueArray * _ghostAttenuationBreakthroughSigmaLumaGVA;
    float  _ghostAttenuationChroma;
    VNRGainValueArray * _ghostAttenuationChromaGVA;
    float  _ghostAttenuationLuma;
    VNRGainValueArray * _ghostAttenuationLumaGVA;
    NSArray * _lumaBands;
}

- (void).cxx_destruct;
- (id)initWithTuningParamsDict:(id)arg1;
- (int)updateWithGain:(float)arg1;

@end
