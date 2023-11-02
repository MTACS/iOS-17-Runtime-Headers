
@interface VisionCoreValueConfidenceCurve : NSObject <NSCopying, NSSecureCoding> {
    bool  _confidencesAreIncreasing;
    struct vector<VisionCoreValueConfidencePoint, std::allocator<VisionCoreValueConfidencePoint>> { 
        struct VisionCoreValueConfidencePoint {} *__begin_; 
        struct VisionCoreValueConfidencePoint {} *__end_; 
        struct __compressed_pair<VisionCoreValueConfidencePoint *, std::allocator<VisionCoreValueConfidencePoint>> { 
            struct VisionCoreValueConfidencePoint {} *__value_; 
        } __end_cap_; 
    }  _increasingValuePoints;
    int  _resolvedPointsDistribution_DO_NOT_DIRECTLY_ACCESS;
}

@property (readonly) float maximumConfidence;
@property (readonly) float maximumValue;
@property (readonly) float minimumConfidence;
@property (readonly) float minimumValue;

// Image: /System/Library/PrivateFrameworks/VisionCore.framework/VisionCore

+ (id)curveWithValues:(const float*)arg1 confidences:(const float*)arg2 count:(unsigned long long)arg3 error:(id*)arg4;
+ (id)curveWithValuesArray:(id)arg1 confidencesArray:(id)arg2 error:(id*)arg3;
+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (float)confidenceForValue:(float)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (float)maximumConfidence;
- (float)maximumValue;
- (float)minimumConfidence;
- (float)minimumValue;
- (float)valueForConfidence:(float)arg1;

// Image: /System/Library/Frameworks/Vision.framework/Vision

+ (id)VNCurveForCSUMetricOperatingPointCurve:(id)arg1 error:(id*)arg2;

@end
