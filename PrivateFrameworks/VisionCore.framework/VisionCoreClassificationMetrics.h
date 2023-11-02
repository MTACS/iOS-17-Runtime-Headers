
@interface VisionCoreClassificationMetrics : NSObject <NSCopying, NSSecureCoding> {
    VisionCoreValueConfidenceCurve * _precisionCurve;
    VisionCoreValueConfidenceCurve * _recallCurve;
}

// Image: /System/Library/PrivateFrameworks/VisionCore.framework/VisionCore

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (float)confidenceThresholdForPrecision:(float)arg1;
- (float)confidenceThresholdForRecall:(float)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPrecisionCurve:(id)arg1 recallCurve:(id)arg2;
- (bool)isEqual:(id)arg1;
- (float)precisionOfConfidence:(float)arg1;
- (float)recallOfConfidence:(float)arg1;

// Image: /System/Library/Frameworks/Vision.framework/Vision

+ (id)VNMetricsFromMLPrecisionRecallCurve:(id)arg1 error:(id*)arg2;

@end
