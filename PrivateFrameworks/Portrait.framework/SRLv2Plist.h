
@interface SRLv2Plist : NSObject {
    float  biasFactorSRLv2;
    float  faceExpDifThreshold;
    float  maskThreshold;
    float  maxBoost_I;
    float  maxBoost_II;
    float  maxBoost_III;
    float  maxBoost_IV;
    float  maxBoost_V;
    float  maxBoost_VI;
    float  maxCurveBoost;
    float  maxTargetRatioDarkening;
    float  maxTargetRatioLimit;
    float  minCurveBoost;
    float  minFaceSize;
    bool  relightOnlyPersonMask;
    float  targetMedian_I;
    float  targetMedian_II;
    float  targetMedian_III;
    float  targetMedian_IV;
    float  targetMedian_V;
    float  targetMedian_VI;
    float  toneSimilaritySigma;
}

- (int)readPlist:(id)arg1;

@end
