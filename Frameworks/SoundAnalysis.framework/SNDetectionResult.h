
@interface SNDetectionResult : NSObject <NSCopying, NSSecureCoding, SNConfidenceProviding, SNConfidenceProvidingWritable, SNPlistSerializable, SNResult, SNTimeRangeProviding, SNTimeRangeProvidingWritable, SRSampling> {
    double  _confidence;
    bool  _detected;
    NSString * _detectorIdentifier;
    NSString * _identifier;
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    }  _timeRange;
}

@property (nonatomic) double confidence;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool detected;
@property (nonatomic, readonly) NSString *detectorIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (readonly) Class superclass;
@property (nonatomic) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } timeRange;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)binarySampleRepresentation;
- (double)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)detected;
- (id)detectorIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithBinarySampleRepresentation:(id)arg1;
- (id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 detectedValue:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (id)plistRepresentationWithError:(id*)arg1;
- (void)setConfidence:(double)arg1;
- (void)setTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;

@end
